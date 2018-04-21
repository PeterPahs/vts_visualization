#ifndef RENDEROBJECTS_H
#define RENDEROBJECTS_H

#include <QEntity>
#include <QTransform>
#include <QSphereMesh>
#include <QPhongMaterial>

class renderObjects : public Qt3DCore::QEntity
{
public:
    renderObjects(Qt3DCore::QNode *parent);
    ~renderObjects();

    Qt3DCore::QTransform *transform() const;
    Qt3DExtras::QSphereMesh *mesh() const;
    Qt3DExtras::QPhongMaterial *material() const;

private:
    Qt3DCore::QTransform *m_transform;
    Qt3DExtras::QSphereMesh *m_mesh;
    Qt3DExtras::QPhongMaterial *m_material;
};


#endif // RENDEROBJECTS_H
