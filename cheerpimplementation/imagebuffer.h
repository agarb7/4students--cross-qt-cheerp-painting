#ifndef CHEERPIMPLEMENTATION_IMAGEBUFFER_H
#define CHEERPIMPLEMENTATION_IMAGEBUFFER_H

#include "core/imagebuffer.h"

#include <cheerp/clientlib.h>

namespace CheerpImplementation {

class ImageBuffer: public Core::ImageBuffer
{
public:
    explicit ImageBuffer(client::HTMLCanvasElement *canvas);
    ~ImageBuffer() override;

    int width() const override;
    int height() const override;

    Core::Color color(int x, int y) const override;
    void setColor(int x, int y, Core::Color color) override;

    client::ImageData *imageData();

private:
    int pos(int x, int y) const;     

    mutable client::ImageData *m_imageData = 0;
};

} // namespace CheerpImplementation

#endif // CHEERPIMPLEMENTATION_IMAGEBUFFER_H
