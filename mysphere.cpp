#include "mysphere.h"

#include <QSphereMesh>
#include <QTransform>

mySphere::mySphere(Qt3DCore::QNode *parent)
    :Qt3DCore::QEntity(new Qt3DCore::QEntity(parent))
    , m_mesh(new Qt3DExtras::QSphereMesh())
    , m_transform(new Qt3DCore::QTransform())
    , m_material(new Qt3DExtras::QPhongMaterial())
{
    addComponent(m_mesh);
    addComponent(m_transform);
    addComponent(m_material
                 );
}

mySphere::~mySphere()
{

}

Qt3DExtras::QSphereMesh *mySphere::mesh() const
{
    return m_mesh;
}

Qt3DCore::QTransform *mySphere::transform() const
{
    return m_transform;
}

Qt3DExtras::QPhongMaterial *mySphere::material() const
{
    return m_material;
}
