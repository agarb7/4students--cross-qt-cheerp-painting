#ifndef QTIMPLEMENTATION_CANVAS_H
#define QTIMPLEMENTATION_CANVAS_H

#include "core/canvas.h"

#include <QtGui/QImage>

namespace QtImplementation {

class Canvas: public Core::Canvas
{
public:
    int width() const override;
    int height() const override;

    Core::Color color(int x, int y) const override;
    void setColor(int x, int y, Core::Color color) override;

    QImage *image() const;
    void setImage(QImage *image);

private:
    QImage *m_image = 0;
};

} // namespace QtImplementation

#endif // QTIMPLEMENTATION_CANVAS_H
