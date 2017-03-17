#include "canvas.h"

#include <cheerp/client.h>

namespace CheerpImplementation {

Canvas::Canvas(int width, int height)
{
    m_canvas = static_cast<client::HTMLCanvasElement*>(
                 client::document.createElement("canvas") );

    m_canvas->set_width(width);
    m_canvas->set_height(height);

    m_context = static_cast<client::CanvasRenderingContext2D*>(m_canvas->getContext("2d"));

    m_buffer = new ImageBuffer(m_canvas);

    m_canvas->addEventListener("mousedown", cheerp::Callback([this](client::MouseEvent *event) {
        onMousePress(event->get_offsetX(), event->get_offsetY());
//        client::console.log("mousedown on ", event->get_offsetX(), ", ", event->get_offsetY());
        m_buffer->setColor(event->get_offsetX(), event->get_offsetY(), Core::color(0,255,0));
        m_context->putImageData(m_buffer->imageData(), 0, 0);

//        auto imageData = m_context->createImageData(m_canvas->get_width(),
//                                                    m_canvas->get_height() );

//        auto data = imageData->get_data();

//        data[0]=data[1]=data[2]=data[3]=data[4]=data[5]=167;

//        imageData->get_data()->set(data);

//        auto a = imageData->get_data();
//        for (int i=0; i<a->get_length(); ++i) {
//            (*a)[i] = i;
//            client::console.log((*a)[i]);
//        }

//        imageData->get_data()->set(a);

//        m_context->putImageData(imageData, 0, 0);

//        m_context->set_fillStyle("green");
//        m_context->fillRect(10,10,30,30);


//        static bool dada = false;

//        if (dada) {
//            auto imageData = m_context->getImageData(10,10,30,30);

//            auto d = imageData->get_data();
//            client::console.log((*d)[512], (*d)[513], (*d)[514], (*d)[515]);

//            m_context->putImageData(imageData, 0, 0);
//        } else {
//            auto imageData = m_context->createImageData(30,30);

//            auto d = imageData->get_data();
//            client::console.log((*d)[512], (*d)[513], (*d)[514], (*d)[515]);
//            (*d)[513] = 128;
//            (*d)[515] = 255;
//            m_context->putImageData(imageData, 0, 0);
//        }

//        dada = !dada;
    }));
}

Canvas::~Canvas()
{
    delete m_buffer;
    delete m_canvas;
}

ImageBuffer *Canvas::imageBuffer()
{
    return m_buffer;
}

client::HTMLCanvasElement *Canvas::htmlCanvas()
{
    return m_canvas;
}

} // namespace CheerpImplementation
