/* $Id$ */
#ifndef OBJECT_COUNTER_H
#define OBJECT_COUNTER_H
#include "ace/pre.h"

#include "ace/Singleton.h"
#include "ace/Synch.h"
#include "ace/SString.h"
#include <sstream>

namespace Kokyu {

  class Object_Counter
    {
    public:

      struct object_id {
        uint32_t id;
        uint32_t tid;
        uint32_t queue_id;
      };

      Object_Counter ();

      inline object_id increment (void);

    private:
      unsigned int m_counter;
    };

#include "Counter.i"

  typedef ACE_TSS_Singleton<Object_Counter, ACE_Null_Mutex> ObjectCounterSingleton;
#define OBJECT_COUNTER ObjectCounterSingleton::instance()

} /* namespace kokyu */
#include "ace/post.h"
#endif /* OBJECT_COUNTER_H */

