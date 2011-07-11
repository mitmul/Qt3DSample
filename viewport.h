#ifndef VIEWPORT_H
#define VIEWPORT_H

#include <Qt3D/qglview.h>
#include <Qt3D/qglbuilder.h>
#include <Qt3D/qglcube.h>

class Viewport : public QGLView
{
    Q_OBJECT

public:
    explicit Viewport(QWidget *parent = 0);
    ~Viewport();

    void initializeGL(QGLPainter *painter);

    void paintGL(QGLPainter *painter);

signals:

public slots:

private:
    QGLSceneNode *cube;
};

#endif // VIEWPORT_H
