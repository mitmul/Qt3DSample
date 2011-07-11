#include "viewport.h"

Viewport::Viewport(QWidget *parent) :
    QGLView(parent)
{
}

Viewport::~Viewport()
{
    delete cube;
}

void Viewport::initializeGL(QGLPainter *painter)
{
    painter->setStandardEffect(QGL::LitMaterial);
    QGLBuilder builder;
    builder << QGLCube();
    cube = builder.finalizedSceneNode();
}

void Viewport::paintGL(QGLPainter *painter)
{
    cube->draw(painter);
}
