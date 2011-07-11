#include "viewport.h"

Viewport::Viewport(QWidget *parent) :
    QGLView(parent)
{
}

void Viewport::initializeGL(QGLPainter *painter)
{
    QGLBuilder builder;
    builder << QGL::Faceted;
    builder << QGLCube();
    builder.finalizedSceneNode();
}

void Viewport::paintGL(QGLPainter *painter)
{
    cube->draw(painter);
}
