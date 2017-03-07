#ifndef CORE_CANVAS_H
#define CORE_CANVAS_H

#include "color.h"

namespace Core {

class Canvas
{
public:
    virtual ~Canvas();

    virtual int width() const = 0;
    virtual int height() const = 0;

    virtual Color color(int x, int y) const = 0;
    virtual void setColor(int x, int y, Color color) = 0;
};

} // namespace Core

#endif // CORE_CANVAS_H
