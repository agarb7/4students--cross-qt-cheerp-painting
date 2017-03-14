#include "imagebuffer.h"

namespace QtImplementation {

ImageBuffer::ImageBuffer(int width, int height) :
    m_image(width, height, QImage::Format_ARGB32)
{
    m_image.fill(0);
}

int ImageBuffer::width() const
{
    return m_image.width();
}

int ImageBuffer::height() const
{
    return m_image.height();
}

Core::Color ImageBuffer::color(int x, int y) const
{
    return m_image.pixel(x, y);
}

void ImageBuffer::setColor(int x, int y, Core::Color color)
{
    m_image.setPixel(x, y, color);
}

QImage &ImageBuffer::image()
{
    return m_image;
}

} // namespace QtImplementation
