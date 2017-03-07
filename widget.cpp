#include "widget.h"

#include "qtimplementation/canvas.h"

#include "mock/inputbuffer.h"

#include "core/paint.h"

#include <QtGui/QPainter>
#include <QtGui/QPaintEvent>
#include <QtGui/QColor>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    m_image(100, 100, QImage::Format_ARGB32)
{    
    m_image.fill(0);
    m_canvas.setImage(&m_image);

    Mock::InputBuffer buffer;
    m_scene.read(buffer);

    render();
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(event->rect(), m_image, event->rect());
}

void Widget::render()
{
    Core::paint(m_scene, m_canvas);
}
