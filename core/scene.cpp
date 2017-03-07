#include "scene.h"

#include "inputbuffer.h"

namespace Core {

void Scene::read(InputBuffer &buffer)
{
    while (buffer.hasSegment())
        m_segments.push_back(buffer.nextSegment());
}

Scene::SegmentIterator Scene::segmentBegin() const
{
    return m_segments.begin();
}

Scene::SegmentIterator Scene::segmentEnd() const
{
    return m_segments.end();
}

} // namespace Core
