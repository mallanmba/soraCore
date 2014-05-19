#include "../Thread.h"
#include "../Chrono.h"
#include "../Functional.h"

#include <boost/thread.hpp>
#include <boost/thread/future.hpp>

#include <iostream>
#include <stdexcept>

using namespace boost;
using namespace std;

void doSomething(int i) {
  cout << "thread param " << i << endl;
  cout << "thread sleep" << endl;
  kn::this_thread::sleep_for(kn::seconds(1));
  cout << "wake up" << endl;
  throw logic_error("maeh");

}

class MyException : public std::runtime_error, public virtual boost::exception
{
public:
  MyException(std::string const& w) :
    std::runtime_error(w)
  {}
};


struct DoSomething
{
  int d;
  void foo(int i) {
    cout << "object param " << i + d << endl;
    cout << "object sleep" << endl;
    kn::this_thread::sleep_for(kn::seconds(1));
    cout << "wake up" << endl;
    boost::throw_exception(MyException("object maeh"));
  }
};


int main(int argc, char* argv[])
{
  int c = 5;
  if (argc > 1) {
    c = atoi(argv[1]);
  }
  int d = c + 1;
  boost::shared_ptr<BOOST_THREAD_FUTURE<void> > f;

  {
    boost::packaged_task<void> pt(kn::bind(&doSomething, c));
    c = -1;
    f.reset(new BOOST_THREAD_FUTURE<void>(pt.get_future()));
    boost::thread( boost::move(pt) ).detach();
  }

  //  boost::async(doSomething);

  cout << "wait" << endl;
  while(!f->is_ready()) {
    cout << "." << flush;
    kn::this_thread::sleep_for(kn::microseconds(100000));
  }
  try {
    f->get();
    cout << "got it" << endl;
  }
  catch(logic_error const& e) {
    cout << "exception: " << e.what() << endl;
  }

  DoSomething bar;
  bar.d = d;
  {
    boost::packaged_task<void> pt(kn::bind(&DoSomething::foo, bar, d));
    c = -1;
    f.reset(new BOOST_THREAD_FUTURE<void>(pt.get_future()));
    boost::thread( boost::move(pt) ).detach();
  }

  cout << "wait for object" << endl;
  while(!f->is_ready()) {
    cout << "." << flush;
    kn::this_thread::sleep_for(kn::microseconds(100000));
  }
  try {
    f->get();
    cout << "got it" << endl;
  }
  catch(MyException const& e) {
    cout << "MyException: " << e.what() << endl;
  }
  catch(std::runtime_error const& e) {
    cout << "fail: cought MyException as runtime_error " << endl;
  }
  catch(std::exception const& e) {
    cout << "exception: " << e.what() << endl;
  }


  return 0;
}
