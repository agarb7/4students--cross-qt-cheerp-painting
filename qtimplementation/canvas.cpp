#include "canvas.h"

#include <QtGui/QPainter>
#include <QtGui/QPaintEvent>
#include <QtGui/QMouseEvent>

namespace QtImplementation {

Canvas::Canvas(int bufferWidth, int bufferHeight, QWidget *parent) :
    QWidget(parent),
    m_buffer(bufferWidth, bufferHeight)
{
}

ImageBuffer *Canvas::imageBuffer() const
{
    return &m_buffer;
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(event->rect(), m_buffer.image(), event->rect());
}

void Canvas::mousePressEvent(QMouseEvent *event)
{
    auto pos = event->pos();
    onMousePress(pos.x(), pos.y());
    update();
}

} // namespace QtImplementation
