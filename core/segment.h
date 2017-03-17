#ifndef CORE_SEGMENT_H
#define CORE_SEGMENT_H

#include "point.h"
#include "color.h"

namespace Core {

struct Segment
{
    Segment(Point point1, Point point2, Color color = blackColor) :
        point1(point1), point2(point2), color(color)
    {}

    Point point1;
    Point point2;
    Color color = blackColor;
};

} // namespace Core

#endif // CORE_SEGMENT_H
