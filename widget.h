#ifndef WIDGET_H
#define WIDGET_H

#include "qtimplementation/canvas.h"

#include "core/scene.h"

#include <QtWidgets/QWidget>
#include <QtGui/QImage>

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);    

protected:
    void paintEvent(QPaintEvent *event);

private:
    void render();

    QImage m_image;
    QtImplementation::Canvas m_canvas;

    Core::Scene m_scene;
};

#endif // WIDGET_H
