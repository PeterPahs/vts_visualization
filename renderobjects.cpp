#include "renderobjects.h"



renderObjects::renderObjects(Qt3DCore::QNode *parent)
    : Qt3DCore::QEntity(parent)
    , m_mesh(new Qt3DExtras::QSphereMesh())
    , m_transform(new Qt3DCore::QTransform())
    , m_material(new Qt3DExtras::QPhongMaterial())
{
    addComponent(m_mesh);
    addComponent(m_transform);
    addComponent(m_material);
}

renderObjects::~renderObjects()
{

}

Qt3DCore::QTransform *renderObjects::transform() const
{
    return m_transform;
}

Qt3DExtras::QSphereMesh *renderObjects::mesh() const
{
    return m_mesh;
}

Qt3DExtras::QPhongMaterial *renderObjects::material() const
{
    return m_material;
}
