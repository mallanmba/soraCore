#include "TextMessager.h"

#include <knShare/Log.h>

#include <string>

#include "rapidDds/TextMessage.h"
#include "rapidDds/TextMessageSupport.h"
#include "rapidDds/RapidConstants.h"
#include "rapidUtil/RapidHelper.h"

namespace rapid {

kn::Singleton<TextMessager> TextMessager::instance;

/**
 * ctor
 */
TextMessager::TextMessager(const TextMessagerParameters& params)
  :
  m_params(params)
{
  m_publisher = new TextMessageSupplier(params.topic,
                                        params.publisher,
                                        params.profile,
                                        params.library,
                                        params.entityName);
  rapid::TextMessage& text = m_publisher->event();
  rapid::RapidHelper::initHeader(text.hdr);
}

/**
 * dtor
 */
TextMessager::~TextMessager()
{
  delete m_publisher;
}

/**
 * Publish a TextMessage
 * @param category String64 to identify source or category message
 * @param msgLevel level of message (MSG_DEBUG, MSG_INFO, MSG_ATTENTION, MSG_WARN, MSG_ERROR, MSG_CRITICAL)
 * @param message String2K message
 * @returns true if file is valid and readable
 */
void
TextMessager::sendText(const char* category,
                       rapid::MessageLevel msgLevel,
                       const char* message)
{
  Lock guard(m_mutex);
  rapid::TextMessage& text = m_publisher->event();
  rapid::RapidHelper::updateHeader(text.hdr);
  
  text.level = msgLevel;
  strncpy(text.category,category, 63);
  text.category[63] = 0;
  strncpy(text.message, message, 1999);
  text.message[1999] = 0;    
  
  m_publisher->sendEvent();
}

#if defined (ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION)
template kn::Singleton<rapid::TextMessager> * kn::Singleton<rapid::TextMessager>::s_instance_;
#endif /* ACE_HAS_EXPLICIT_STATIC_TEMPLATE_MEMBER_INSTANTIATION */

}
