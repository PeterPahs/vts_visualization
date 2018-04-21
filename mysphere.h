#ifndef MYSPHERE_H
#define MYSPHERE_H

#include <QEntity>
#include <QTransform>
#include <QSphereMesh>
#include <QPhongMaterial>

class mySphere : public Qt3DCore::QEntity
{
public:
    mySphere(Qt3DCore::QNode *parent = 0);
    ~mySphere();

    Qt3DExtras::QSphereMesh *mesh() const;
    Qt3DCore::QTransform *transform() const;
    Qt3DExtras::QPhongMaterial *material() const;

private:
    Qt3DExtras::QSphereMesh *m_mesh;
    Qt3DCore::QTransform *m_transform;
    Qt3DExtras::QPhongMaterial *m_material;
};

#endif // MYSPHERE_H
