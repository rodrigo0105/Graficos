#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QColorDialog>
#include <qpen.h>
#include "graficos.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Dialog *ui;
    void paintEvent(QPaintEvent *e);
    QColor color;
    QPainter *Canvas;
    int x1,y1,x2,y2;

    int xc,yc, radio;
    //para cuando se tenga variable primitiva
    bool linea, circuloPitagoras,circculoPolare, circulo, espiral1, espiral2;

protected:
    void mousePressEvent(QMouseEvent *event)override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

   // void mouseDoubleClickEvent(QMouseEvent *event) override;

};
#endif // DIALOG_H





