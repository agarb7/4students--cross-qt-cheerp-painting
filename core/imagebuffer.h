#ifndef CORE_IMAGEBUFFER_H
#define CORE_IMAGEBUFFER_H

#include "color.h"

namespace Core {

class ImageBuffer
{
public:    
    virtual ~ImageBuffer();

    virtual int width() const = 0;
    virtual int height() const = 0;

    virtual Color color(int x, int y) const = 0;
    virtual void setColor(int x, int y, Color color) = 0;
};

} // namespace Core

#endif // CORE_IMAGEBUFFER_H
