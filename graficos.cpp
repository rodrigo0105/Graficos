#include "graficos.h"

Graficos::Graficos()
{

}

int Graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas, QColor color)
{
    int pasos;
    int dx= x2- x1;
    int dy= y2 - y1;

    float xInc, yInc, x=x1, y= y1;

    if(abs(dx) > abs(dy))
        pasos = abs(dx);
    else
        pasos = abs(dy);

    xInc = (float)dx / pasos;
    yInc = (float)dy / pasos;

    //QPen pen(QColor(0,0,255), 5);
    canvas->setPen(color);
    canvas->drawPoint(round(x), qRound(y));
    for(int k=0; k<pasos; k++)
    {
        x += xInc;
        y += yInc;
        canvas->drawPoint(round(x),qRound(y));
    }

}

void Graficos::CirculoPitagoras(int xc, int yc, int radio, QPainter *canvas)
{
    canvas->setPen(QColor(0,0,255));

    float y;
    for(int x = xc-radio; x < xc +radio; x++)
    {
        y = yc + pow((radio * radio) - pow(x - xc,2.0),0.5);
        canvas->drawPoint(x,y);
        y = yc - sqrt(pow(radio,2.0) - pow(x-xc,2.0));
        canvas->drawPoint(x,y);
    }
}

void Graficos::CirculosPolares(int xc, int yc, int radio, QPainter *canvas)
{
    canvas->setPen(QColor(0,0,200));
    float dht,cdth,sdth, x, y, xt;
    dht = 1.0 / radio;
    cdth = cos(dht);
    sdth = sin(dht);
    x = 0;
    y = radio;
    while( y >=x)
    {
        canvas->drawPoint(round(xc + x)+0.5,round(yc + y)+0.5);
        canvas->drawPoint(round(xc - x)+0.5,round(yc + y)+0.5);
        canvas->drawPoint(round(xc - x)+0.5,round(yc - y)+0.5);
        canvas->drawPoint(round(xc + x)+0.5,round(yc - y)+0.5);

        xt = x;
        x = xt * cdth - y * sdth;
        y = y * cdth + xt * sdth;
    }
}

///INVERTIGAR UNA ALTERNATIVA PARA DIBUJAR CIRCULOS
void Graficos::Circulos(int xc, int yc, int radio, QPainter *canvas)
{
    QPen pluma(QColor(0,0,200)); // = new QPen(QColor(0,0,200));
    // pluma.setWidth(8);
    // canvas->setPen(QColor(0, 0));//qrand()%155+100));
    double x, y;
    for(int grados = 0; grados < 360; grados+= 2)
    {       // COMVERTIR EL ANGULO DE GRADOS A RADIANES
        x = xc + radio * cos(grados / 180.0 * M_PI); // INCLUIR <math.h>
        y = yc + radio * sin(grados / 180.0 * M_PI);
        // canvas->drawPoint(x-1,y-1);
        canvas->drawPoint(round(x),round(y));
        // canvas->drawPoint(x+1, y+1);
    }
}

void Graficos::espiral1(QPainter *canvas, QColor color)
{
    int xc = canvas->window().width()/2;
    int yc = canvas->window().height()/2;
    int radio = 5;
    const double dosPI = M_PI * 2; // 6.28318;
    canvas->setPen(color);//QColor(200,0,0));
    int cont;
    double dth, cdth,sdth, x, y, xtemp, xt, yt;
//    dth = dosPI / (16 * radio);
    dth = dosPI / (4 * radio);
    cdth = cos(dth);
    sdth = sin(dth);

    x = 0.0;
    y = radio;
    cont = 0.0;
    xt = xc + x;
    yt = yc + y;
    do
    {
        xtemp = x;
        x = x * cdth - y * sdth;
        y = y * cdth + xtemp * sdth;
        if (x>0)
        {
            x +=0.5;
        }
        else
        {
            x -= 0.5;
        }
        if(y > 0)
        {
            y += 0.5;
        }
        else
        {
            y -= 0.5;
        }
       // canvas->drawPoint(xt + .5, roud(yt+.5));

        lineaDDA(xt + .5, yt+.5, xc+x+.5,yc+y+.5,canvas, color);

        xt = xc + x;
        yt = yc + y;
        cont++;

    }while (cont < 250);
}

void Graficos::espiral2(QPainter *canvas, QColor color)
{
    int xc = canvas->window().width()/2;
    int yc = canvas->window().height()/2;
    double th, x,y,xt,yt;
    float radio =1;
    canvas->setPen(color);//QColor(200,0,0));
    th = 0.0;

    x = radio * cos(th);
    y = radio * sin(th);
    xt = xc + x;
    yt = yc + y;
    while(radio <230)
    {
        th += 0.1;
        radio += .9;
        x = radio * cos(th);
        y = radio * sin(th);
        lineaDDA(xt+.5,yt+.5,xc+x+.5,yc+y+.5,canvas,color);
        xt = xc + x;
        yt = yc + y;
    }

}













//implementar este metodo, utilizar desde la aplicacion un color aleatorio
// nota se publicara en la segunda semana los dia en los que se entragara las tareas
/*
int Graficos::lineaDDA(int x1, int y1, int x2, int y2, QPainter *canvas, QColor color)
{

}
*/
