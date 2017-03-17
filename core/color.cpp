#include "color.h"

namespace Core {

Color color(std::uint8_t r, std::uint8_t g, std::uint8_t b, std::uint8_t a)
{
    std::uint32_t result = a;
    result<<=8;
    result|=b;
    result<<=8;
    result|=g;
    result<<=8;
    result|=r;

    return result;
}

uint8_t red(Color c)
{
    return c & 0x00000ff;
}

uint8_t green(Color c)
{
    return (c & 0x0000ff00)>>8;
}

uint8_t blue(Color c)
{
    return (c & 0x00ff0000)>>16;
}

uint8_t alpha(Color c)
{
    return (c & 0xff000000)>>24;
}

} // namespace Core
