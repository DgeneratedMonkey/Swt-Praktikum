/*
 * Author: Lucas
 * Version: 0.1
 * Datum 01.12.2017
 *
 * Author: Manuel
 * version: 0.2
 * Datum: 12.01.2018
 * Kommentar: Buttons angepasst
 *
 * Author: Lucas
 * version: 0.3
 * Datum: 14.01.2018
 * Kommentar: Buttons angepasst
 * */

#ifndef BUTTON_H
#define BUTTON_H
#include "hexagonbase.h"
#include "enumerations.h"
#include <QDebug>

class Game;

class Button : public HexagonBase
{
    Q_OBJECT
private:    
    bool bool_ButtonShowActivation; //sagt an ob ein Button nicht "geschwaertzt werden soll
public:
    Button();
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event) = 0;

    //get und set Methoden
    void setBool_ButtonShowActivation(bool value);
    bool getBool_ButtonShowActivation() const;
};


/*New Class*/
class ButtonMove : public Button
{
    Q_OBJECT
public:
    ButtonMove(int sizeX = 64, int sizeY = 64);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void printType();
signals:
    void clicked();
};


/*New Class*/
class ButtonAction : public Button
{
    Q_OBJECT
public:
    ButtonAction(int sizeX = 64, int sizeY = 64);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    void printType();
signals:
    void clicked();

};


/*New Class*/
class ButtonMap : public Button
{
    Q_OBJECT
public:
    ButtonMap(int sizeX = 64, int sizeY = 64);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void printType();
signals:
    void clicked();

};


/*New Class*/
class ButtonInformation : public Button
{
    Q_OBJECT
public:
    ButtonInformation(int sizeX = 64, int sizeY = 64);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void printType();
signals:
    void clicked();

};


/*New Class*/
class ButtonChangePhase : public Button
{
    Q_OBJECT
public:
    ButtonChangePhase(int sizeX = 64, int sizeY = 64);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void printType();
signals:
    void clicked();

};


/*New Class*/
class ButtonMenue : public Button
{
    Q_OBJECT
public:
    ButtonMenue(int sizeX = 64, int sizeY = 64);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

    void printType();
signals:
    void clicked();

};
#endif // BUTTON_H
