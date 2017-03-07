#include "paint.h"

#include "scene.h"
#include "canvas.h"

#include <algorithm>
#include <cmath>

namespace Core {

void drawSegment(const Segment &segment, Canvas &canvas)
{
    using std::lround;
    using std::max;
    using std::abs;

    double x = segment.point1.x;
    double y = segment.point1.y;

    int x1 = lround(x);
    int y1 = lround(y);

    int x2 = lround(segment.point2.x);
    int y2 = lround(segment.point2.y);

    int lx = x2-x1;
    int ly = y2-y1;

    int l = max(abs(lx), abs(ly));

    double dx = double(lx)/l;
    double dy = double(ly)/l;

    canvas.setColor(x1, y1, segment.color);

    for (int i=1, last = l-1; i<=last; ++i) {
        x+=dx;
        y+=dy;

        canvas.setColor(lround(x), lround(y), segment.color);
    }

    canvas.setColor(x2, y2, segment.color);
}

//void drawSegment2(const Segment &segment, Canvas &canvas)
//{
//    using std::lround;
//    using std::max;
//    using std::abs;

//    double x1 = segment.point1.x;
//    double y1 = segment.point1.y;

//    double x2 = segment.point2.x;
//    double y2 = segment.point2.y;

//    double lx = x2-x1;
//    double ly = y2-y1;

//    auto dda = [&]()

//    if (lx<ly) {

//    }



//    double m = (segment.point2.y-y)/(segment.point2.x-x);

//    if (m<)

//    int x1 = lround(x);
//    int y1 = lround(y);

//    int x2 = lround(segment.point2.x);
//    int y2 = lround(segment.point2.y);

//    int lx = x2-x1;
//    int ly = y2-y1;

//    int c = max(abs(lx), abs(ly))+1;

//    double dx = double(lx)/c;
//    double dy = double(ly)/c;

//    canvas.setColor(x1, y1, segment.color);

//    for (int i=1, last = c-2; i<=last; ++i) {
//        x+=dx;
//        y+=dy;

//        canvas.setColor(lround(x), lround(y), segment.color);
//    }

//    canvas.setColor(x2, y2, segment.color);
//}

void paint(const Scene &scene, Canvas &canvas)
{
    for (auto it = scene.segmentBegin(), end = scene.segmentEnd();
         it != end; ++it)
    {
        drawSegment(*it, canvas);
    }
}

} // namespace Core
