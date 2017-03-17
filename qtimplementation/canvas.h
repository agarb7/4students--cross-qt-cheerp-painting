#ifndef QTIMPLEMENTATION_CANVAS_H
#define QTIMPLEMENTATION_CANVAS_H

#include "imagebuffer.h"

#include "core/canvas.h"

#include <QtWidgets/QWidget>

namespace QtImplementation {

class Canvas: public QWidget, public Core::Canvas
{
    Q_OBJECT

public:
    Canvas(int bufferWidth, int bufferHeight, QWidget *parent = 0);
    ImageBuffer *imageBuffer() override;

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private:
    ImageBuffer m_buffer;
};

} // namespace QtImplementation

#endif // QTIMPLEMENTATION_CANVAS_H
