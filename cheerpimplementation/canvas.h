#ifndef CHEERPIMPLEMENTATION_CANVAS_H
#define CHEERPIMPLEMENTATION_CANVAS_H

#include "imagebuffer.h"

#include "core/canvas.h"

#include <cheerp/clientlib.h>

namespace CheerpImplementation {

class Canvas: public Core::Canvas
{
public:
    Canvas(int width, int height);
    ~Canvas() override;

    ImageBuffer *imageBuffer() override;

    client::HTMLCanvasElement *htmlCanvas();

private:
    client::HTMLCanvasElement *m_canvas = 0;
    ImageBuffer *m_buffer = 0;
    client::CanvasRenderingContext2D *m_context = 0;
};

} // namespace CheerpImplementation

#endif // CHEERPIMPLEMENTATION_CANVAS_H
