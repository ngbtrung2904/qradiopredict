#include "MapGraphicsObject.h"

#include <QtDebug>
#include <QKeyEvent>

MapGraphicsObject::MapGraphicsObject(MapGraphicsObject *parent)
{
    //Set default properties and the parent that was passed as argument
    _enabled = true;
    _opacity = 1.0;
    this->setParent(parent);
    _pos = QPointF(0.0,0.0);
    _rotation = 0.0;
    _visible = true;
    _zValue = 0.0;
    _selected = false;
}

MapGraphicsObject::~MapGraphicsObject()
{
}

bool MapGraphicsObject::enabled() const
{
    return _enabled;
}

void MapGraphicsObject::setEnabled(bool nEnabled)
{
    _enabled = nEnabled;
    this->enabledChanged();
}

qreal MapGraphicsObject::opacity() const
{
    return _opacity;
}

void MapGraphicsObject::setOpacity(qreal nOpacity)
{
    _opacity = nOpacity;
    this->opacityChanged();
}

MapGraphicsObject *MapGraphicsObject::parent() const
{
    return _parent;
}

void MapGraphicsObject::setParent(MapGraphicsObject * nParent)
{
    _parent = nParent;
    this->parentChanged();
}

QPointF MapGraphicsObject::pos() const
{
    return _pos;
}

void MapGraphicsObject::setPos(const QPointF & nPos)
{
    _pos = nPos;
    this->posChanged();
}

qreal MapGraphicsObject::rotation() const
{
    return _rotation;
}

void MapGraphicsObject::setRotation(qreal nRotation)
{
    _rotation = nRotation;
    this->rotationChanged();
}

bool MapGraphicsObject::visible() const
{
    return _visible;
}

void MapGraphicsObject::setVisible(bool nVisible)
{
    _visible = nVisible;
    this->visibleChanged();
}

qreal MapGraphicsObject::longitude() const
{
    return _pos.x();
}

void MapGraphicsObject::setLongitude(qreal nLongitude)
{
    this->setPos(QPointF(nLongitude,this->pos().y()));
}

qreal MapGraphicsObject::latitude() const
{
    return _pos.y();
}

void MapGraphicsObject::setLatitude(qreal nLatitude)
{
    this->setPos(QPointF(this->pos().x(),nLatitude));
}

qreal MapGraphicsObject::zValue() const
{
    return _zValue;
}

void MapGraphicsObject::setZValue(qreal nZValue)
{
    _zValue = nZValue;
    this->zValueChanged();
}

bool MapGraphicsObject::isSelected() const
{
    return _selected;
}

void MapGraphicsObject::setSelected(bool sel)
{
    if (_selected == sel)
        return;
    _selected = sel;
    this->selectedChanged();

}

//protected
void MapGraphicsObject::contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
{
    event->ignore();
}

//protected
QVariant MapGraphicsObject::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant &value)
{
    Q_UNUSED(change)
    return value;
}

//protected
void MapGraphicsObject::keyPressEvent(QKeyEvent *event)
{
    event->ignore();
}

//protected
void MapGraphicsObject::keyReleaseEvent(QKeyEvent *event)
{
    event->ignore();
}

//protected
void MapGraphicsObject::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    event->ignore();
}

//protected
void MapGraphicsObject::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    event->ignore();
}

//protected
void MapGraphicsObject::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //The default is to accept this if we are selectable and/or movable
    event->accept();
}

//protected
void MapGraphicsObject::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    event->ignore();
}

//protected
void MapGraphicsObject::wheelEvent(QGraphicsSceneWheelEvent *event)
{
    event->ignore();
}