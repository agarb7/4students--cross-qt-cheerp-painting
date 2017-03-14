#ifndef CORE_CANVAS_H
#define CORE_CANVAS_H

#include "point.h"
#include "color.h"

namespace Core {

class ImageBuffer;
class Scene;
class Segment;

class Canvas
{
public:    
    virtual ~Canvas();

    virtual ImageBuffer *imageBuffer() const = 0;

    Scene *scene() const;
    void setScene(Scene *scene);

protected:
    void paint(int x, int y, int w, int h);
    void onMousePress(int x, int y);

private:
    void drawSegment(const Segment &segment);
    void setColor(int x, int y, Color c);

    Point m_origin;    
    Scene *m_scene = 0;
};

} // namespace Core

#endif // CORE_CANVAS_H
