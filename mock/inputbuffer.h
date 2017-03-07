#ifndef MOCK_INPUTBUFFER_H
#define MOCK_INPUTBUFFER_H

#include "core/inputbuffer.h"

#include <vector>

namespace Mock {

class InputBuffer: public Core::InputBuffer
{
public:
    InputBuffer();
    InputBuffer(std::initializer_list<Core::Segment> segments);

    bool hasSegment() const override;
    Core::Segment nextSegment() override;

    void pushBack(const Core::Segment &segment);

private:
    std::size_t m_index = 0;
    std::vector<Core::Segment> m_segments;
};

} // namespace Mock

#endif // MOCK_INPUTBUFFER_H
