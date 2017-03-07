#ifndef CORE_SEGMENT_H
#define CORE_SEGMENT_H

#include "point.h"
#include "color.h"

namespace Core {

struct Segment
{
    Point point1;
    Point point2;
    Color color = blackColor;
};

} // namespace Core

#endif // CORE_SEGMENT_H
