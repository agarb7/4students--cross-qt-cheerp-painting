#ifndef CORE_SCENE_H
#define CORE_SCENE_H

#include "segment.h"

#include <vector>

namespace Core {

class InputBuffer;

class Scene
{
    using SegmentContainer = std::vector<Segment>;

public:
    using SegmentIterator = SegmentContainer::const_iterator;

    void read(InputBuffer &buffer);

    SegmentIterator segmentBegin() const;
    SegmentIterator segmentEnd() const;

private:
    SegmentContainer m_segments;
};

} // namespace Core

#endif // CORE_SCENE_H
