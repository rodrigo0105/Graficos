#ifndef GRAFICOS_H
#define GRAFICOS_H

//#include <QtGui>
#include <QtCore>
#include <QPainter>
#include <QColor>
#include <QMouseEvent>


class Graficos
{
public:
    Graficos();

    int roud(float n)
    {
        return int(n + 0.5);
    }

    //int lineaDDA(int x1,int y1,int x2,int y2, QPainter *canvas);
    int lineaDDA(int x1,int y1,int x2,int y2, QPainter *canvas, QColor color);
    void CirculoPitagoras(int xc,int yc,int radio,QPainter *canvas);
    void CirculosPolares(int xc, int yc, int radio, QPainter *canvas);

    void Circulos(int xc, int yc, int radio, QPainter *canvas);

    void espiral1(QPainter *canvas, QColor color);
    void espiral2(QPainter *canvas, QColor color);
};

#endif // GRAFICOS_H
