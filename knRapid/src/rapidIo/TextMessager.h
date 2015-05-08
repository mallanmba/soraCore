#ifndef kn_TextMessager_h
#define kn_TextMessager_h

#include "rapidDds/RapidConstants.h"

#include <knDds/DdsTypedSupplier.h>

#include <knShare/SmartPtr.h>
#include <knShare/Singleton.h>
#include <knShare/Mutex.h>

#include "rapidDds/TextMessage.h"

#include "rapidIo/RapidIoParameters.h"

#include "rapidIo_Export.h"

namespace rapid
{

  /**
   * TextMessager is a convenience class for publishing TextMessage
   * messages. A singleton is provided so an application can share a single
   * data writer - if used, please call TextMessager::instance.close() to
   * cleanly destroy the singleton during shutdown.
   */
  class rapidIo_Export TextMessager
  {
  public:
    TextMessager(const TextMessagerParameters& params = TextMessagerParameters());
    ~TextMessager();

    void sendText(const char* category, rapid::MessageLevel msgLevel, const char* message);

    static kn::Singleton<TextMessager> instance;

  protected:

  protected:
    typedef kn::lock_guard<kn::mutex> Lock;
    typedef kn::DdsTypedSupplier<rapid::TextMessage> TextMessageSupplier;

    TextMessagerParameters m_params;
    TextMessageSupplier*   m_publisher;
    mutable kn::mutex      m_mutex;
  };
}

RAPIDIO_SINGLETON_DECLARATION(kn::Singleton<rapid::TextMessager>);

#endif // kn_TextMessager_h
