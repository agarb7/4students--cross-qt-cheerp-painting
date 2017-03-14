#include "canvas.h"

namespace QtImplementation {

int Canvas::width() const
{
    return m_image->width();
}

int Canvas::height() const
{
    return m_image->height();
}

Core::Color Canvas::color(int x, int y) const
{
    return m_image->pixel(x, y);
}

void Canvas::setColor(int x, int y, Core::Color color)
{
    m_image->setPixel(x, y, color);
}

QImage *Canvas::image() const
{
    return m_image;
}

void Canvas::setImage(QImage *image)
{
    m_image = image;
}

} // namespace QtImplementation
