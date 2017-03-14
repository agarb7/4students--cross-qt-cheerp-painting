#include "inputbuffer.h"

#include "core/canvas.h"

namespace Mock {

InputBuffer::InputBuffer()
    : InputBuffer {
        {{0,0}, {0,100}},
        {{0,100}, {50,0}},
        {{50,0}, {0,0}}
    }
{}

InputBuffer::InputBuffer(std::initializer_list<Core::Segment> segments)
    : m_segments(segments)
{}

bool InputBuffer::hasSegment() const
{
    return m_index < m_segments.size();
}

Core::Segment InputBuffer::nextSegment()
{
    return m_segments[m_index++];
}

void InputBuffer::pushBack(const Core::Segment &segment)
{
    m_segments.push_back(segment);
}

} // namespace Mock
