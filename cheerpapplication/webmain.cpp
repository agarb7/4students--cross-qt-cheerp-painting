#include "cheerpimplementation/canvas.h"

#include "mock/inputbuffer.h"

#include "core/scene.h"

#include <cheerp/clientlib.h>

void webMain()
{
    using namespace CheerpImplementation;

    Mock::InputBuffer buffer;
    auto scene = new Core::Scene;
    scene->read(buffer);

    auto canvas = new Canvas(300, 300);
    canvas->setScene(scene);

    client::HTMLElement *body = client::document.get_body();
    body->appendChild(canvas->htmlCanvas());
}
