#ifndef QTIMPLEMENTATION_IMAGEBUFFER_H
#define QTIMPLEMENTATION_IMAGEBUFFER_H

#include "core/imagebuffer.h"

#include <QtGui/QImage>

namespace QtImplementation {

class ImageBuffer: public Core::ImageBuffer
{
public:
    explicit ImageBuffer(int width, int height);

    int width() const override;
    int height() const override;

    Core::Color color(int x, int y) const override;
    void setColor(int x, int y, Core::Color color) override;

    QImage &image();

private:
    QImage m_image;
};

} // namespace QtImplementation

#endif // QTIMPLEMENTATION_IMAGEBUFFER_H
