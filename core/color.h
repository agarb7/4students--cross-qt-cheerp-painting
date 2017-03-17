#ifndef CORE_COLOR_H
#define CORE_COLOR_H

#include <cstdint>

namespace Core {

    using Color = std::uint32_t;

    constexpr Color blackColor = 0xff000000;

    Color color(std::uint8_t r, std::uint8_t g, std::uint8_t b, std::uint8_t a = 255);

    std::uint8_t red(Color c);
    std::uint8_t green(Color c);
    std::uint8_t blue(Color c);
    std::uint8_t alpha(Color c);

} // namespace Core

#endif // CORE_COLOR_H
