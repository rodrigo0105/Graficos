#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;

    //linea = true;
     linea = circuloPitagoras = circculoPolare = circulo= espiral1 = espiral2 = false;
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_2_clicked()
{
    QColor color_seleccionado = QColorDialog::getColor(Qt::white,this,"Selecciona el Color");
    if(color_seleccionado.isValid())
    {
        color = color_seleccionado;
    }
}


void Dialog::on_pushButton_clicked()
{
    x1 = ui->lineEdit->text().toInt();
    y1 = ui->lineEdit_2->text().toInt();

    x2 = ui->lineEdit_3->text().toInt();
    y2 = ui->lineEdit_4->text().toInt();
    //linea = true;

    update();//invocamos el metodo paintEvent
}

void Dialog::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    Canvas = new QPainter(this);
    //creacion de objeto estatico
    /*
    Graficos graficos;
    graficos.lineaDDA(x1,y1,x2,y2,Canvas);   //,Qcolor(200,0,0);
    */
    //creacion de objeto dinamico
    Graficos *graficos = new Graficos();

    if(linea)
        //graficos->lineaDDA(x1,y1,x2,y2,Canvas);
        graficos->lineaDDA(x1,y1,x2,y2,Canvas,color);
    else if(circuloPitagoras)
    graficos->CirculoPitagoras(xc,yc,radio,Canvas);
    else if(circculoPolare)
        graficos->CirculosPolares(xc,yc,radio,Canvas);
    else if(circulo)
        graficos->Circulos(xc,yc,radio,Canvas);
    else if (espiral1)
        graficos->espiral1(Canvas, color);
    else if (espiral2)
        graficos->espiral2(Canvas,color);

    linea = circuloPitagoras = circculoPolare = circulo = espiral1 = espiral2 = false;

    Canvas->end();
}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    //X1
    ui->lineEdit->setText(QString::number(event->pos().x()));
    //Y1
    ui->lineEdit_2->setText(QString::number(event->pos().y()));

    ui->spinBox->setValue(event->pos().x());  // xc
    ui->spinBox_2->setValue(event->pos().y()); // yc
}

void Dialog::mouseReleaseEvent(QMouseEvent *event)
{
    //X2
    ui->lineEdit_3->setText(QString::number(event->pos().x()));
    ui->lineEdit_4->setText(QString::number(event->pos().y()));

    this->on_pushButton_clicked();
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    ui->lineEdit_3->setText(QString::number(event->pos().x()));
    ui->lineEdit_4->setText(QString::number(event->pos().y()));

    this->on_pushButton_clicked();
}

//circulo pitagoras
void Dialog::on_pushButton_3_clicked()
{
    xc = ui->spinBox->value();
    yc = ui->spinBox_2->value();
    radio = ui->spinBox_3->value();

    circuloPitagoras = true;
    update();
}

// Circulo polares
void Dialog::on_pushButton_4_clicked()
{
    xc = ui->spinBox->value();
    yc = ui->spinBox_2->value();
    radio = ui->spinBox_3->value();

    circculoPolare = true;
    update();
}

//Circulo alternatiba
void Dialog::on_pushButton_5_clicked()
{
    xc = ui->spinBox->value();
    yc = ui->spinBox_2->value();
    radio = ui->spinBox_3->value();

    circulo = true;
    update();
}


void Dialog::on_pushButton_6_clicked()
{
    espiral1 = true;
    update();
}




void Dialog::on_pushButton_7_clicked()
{
    espiral2 = true;
    update();
}

