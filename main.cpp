#include <QGuiApplication>
#include <QEntity>
#include <QCamera>
#include <QCameraLens>
#include <QAspectEngine>

#include <QInputAspect>

#include <QRenderAspect>
#include <QPhongMaterial>

#include<Qt3DRender/QPointLight>
#include <Qt3DExtras/QFirstPersonCameraController>
#include <QTransform>

#include <Qt3DExtras/qt3dwindow.h>

#include <QVector>


#include "mysphere.h"
#include "renderobjects.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Qt3DExtras::Qt3DWindow view;

    view.setTitle("Qt3D Test");
    view.resize(800, 600);
    Qt3DInput::QInputAspect *input = new Qt3DInput::QInputAspect;
    view.registerAspect(input);

    //Scene root
    Qt3DCore::QEntity *sceneRoot = new Qt3DCore::QEntity();

    //Scene Camera
    Qt3DRender::QCamera *cam = view.camera();
    cam->lens()->setPerspectiveProjection(45.0f, 800.0f/600.0f, 0.1f, 1000.0f);
    cam->setPosition(QVector3D(0, 0, 20.0f));
    cam->setUpVector(QVector3D(0, 1, 0));
    cam->setViewCenter(QVector3D(0,0,0));

    //camera control
    Qt3DExtras::QFirstPersonCameraController *camContrl = new Qt3DExtras::QFirstPersonCameraController(sceneRoot);
    camContrl->setCamera(cam);

    //light
    Qt3DCore::QEntity *lightEntity = new Qt3DCore::QEntity(sceneRoot);
    Qt3DRender::QPointLight *light = new Qt3DRender::QPointLight(lightEntity);
    light->setColor("white");
    light->setIntensity(1);
    lightEntity->addComponent(light);
    Qt3DCore::QTransform *lightTransform = new Qt3DCore::QTransform(lightEntity);
    lightTransform->setTranslation(cam->position());
    lightEntity->addComponent(lightTransform);


    QVector<mySphere *> sphereVec;

    for(int i=0; i<10; i++){
        sphereVec.append(new mySphere(sceneRoot));
        sphereVec.last()->mesh()->setRadius(1.0f);
        sphereVec.last()->mesh()->setRings(10);
        sphereVec.last()->mesh()->setSlices(10);
        sphereVec.last()->transform()->setTranslation(QVector3D(i, i + 1.0f, i + 1.0f));
        sphereVec.last()->material()->setDiffuse(QColor(Qt::red));
    }
/*
    mySphere *sphere = new mySphere(sceneRoot);
    sphere->mesh()->setRadius(1.0f);
    sphere->mesh()->setRings(10);
    sphere->mesh()->setSlices(10);
    sphere->transform()->setTranslation(QVector3D(1.0f, 1.0f, 1.0f));
    sphere->material()->setDiffuse(QColor(Qt::red));
*/

    view.setRootEntity(sceneRoot);
    view.show();

    return app.exec();
}
