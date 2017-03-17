#include "canvas.h"

#include "imagebuffer.h"
#include "scene.h"

#include <cassert>
#include <cmath>
#include <cstdlib>

namespace Core {

Canvas::~Canvas()
{
}

Scene *Canvas::scene() const
{
    return m_scene;
}

void Canvas::setScene(Scene *scene)
{
    m_scene = scene;
}

void Canvas::paint(int /*x*/, int /*y*/, int /*w*/, int /*h*/)
{
    for (auto it = m_scene->segmentBegin(), end = m_scene->segmentEnd();
         it != end; ++it)
    {
        drawSegment(*it);
    }
}

void Canvas::onMousePress(int x, int y)
{
    assert(imageBuffer());

    m_origin = {double(x), double(y)};

    ImageBuffer *buffer = imageBuffer();
    paint(0, 0, buffer->width(), buffer->height());
}

void Canvas::drawSegment(const Segment &segment)
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

    setColor(x1, y1, segment.color);

    for (int i=1, last = l-1; i<=last; ++i) {
        x+=dx;
        y+=dy;

        setColor(lround(x), lround(y), segment.color);
    }

    setColor(x2, y2, segment.color);
}

/*!
 * \brief Origin aware setColor
 * \param x
 * \param y
 * \param c
 */
void Canvas::setColor(int x, int y, Color c)
{
    assert(imageBuffer());

    imageBuffer()->setColor(m_origin.x + x, m_origin.y + y, c);
}

} // namespace Core
