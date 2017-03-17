#include "qtimplementation/canvas.h"

#include "mock/inputbuffer.h"

#include "core/scene.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    using namespace QtImplementation;

    Mock::InputBuffer buffer;
    Core::Scene scene;
    scene.read(buffer);

    QApplication a(argc, argv);
    Canvas canvas(300, 300);
    canvas.setScene(&scene);
    canvas.show();

    return a.exec();
}
