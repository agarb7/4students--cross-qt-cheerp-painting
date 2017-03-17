#include "imagebuffer.h"

#include <cassert>

namespace CheerpImplementation {

ImageBuffer::ImageBuffer(client::HTMLCanvasElement *canvas)
{
    assert(canvas);

    auto context = static_cast<client::CanvasRenderingContext2D*>(canvas->getContext("2d"));

    m_imageData = context->createImageData(canvas->get_width(),
                                           canvas->get_height());
}

ImageBuffer::~ImageBuffer()
{
    delete m_imageData;
}

int ImageBuffer::width() const
{
    return m_imageData->get_width();
}

int ImageBuffer::height() const
{
    return m_imageData->get_height();
}

Core::Color ImageBuffer::color(int x, int y) const
{
    auto d = m_imageData->get_data();

    int p = pos(x, y);
    if (p >= d->get_length())
        return Core::Color();        

    return Core::color(
        (*d)[p],
        (*d)[p+1],
        (*d)[p+2],
        (*d)[p+3]
    );
}

void ImageBuffer::setColor(int x, int y, Core::Color color)
{
    auto d = m_imageData->get_data();

    int p = pos(x, y);
    if (p >= d->get_length())
        return;

    (*d)[p]   = Core::red(color);
    (*d)[p+1] = Core::green(color);
    (*d)[p+2] = Core::blue(color);
    (*d)[p+3] = Core::alpha(color);
}

client::ImageData *ImageBuffer::imageData()
{
    return m_imageData;
}

int ImageBuffer::pos(int x, int y) const
{
    return (y * m_imageData->get_width() + x) * 4;
}

} // namespace CheerpImplementation
