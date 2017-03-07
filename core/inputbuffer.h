#ifndef CORE_INPUTBUFFER_H
#define CORE_INPUTBUFFER_H

#include "segment.h"

namespace Core {

class InputBuffer
{
public:
    virtual ~InputBuffer();

    virtual bool hasSegment() const = 0;
    virtual Segment nextSegment() = 0;
};

} // namespace Core

#endif // CORE_INPUTBUFFER_H
