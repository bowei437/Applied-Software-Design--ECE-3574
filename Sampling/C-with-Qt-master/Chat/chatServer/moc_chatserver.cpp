/****************************************************************************
** Meta object code from reading C++ file 'chatserver.h'
**
** Created: Sat Apr 20 01:24:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChatServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   12,   11,   11, 0x0a,
      48,   12,   11,   11, 0x0a,
      97,   73,   11,   11, 0x0a,
     158,  143,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChatServer[] = {
    "ChatServer\0\0newUsername\0acceptClientJoin(char*)\0"
    "acceptClientLeave(char*)\0"
    "sender,receiver,message\0"
    "acceptPrivateMessage(QString,QString,QString)\0"
    "sender,message\0acceptPublicMessage(QString,QString)\0"
};

void ChatServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChatServer *_t = static_cast<ChatServer *>(_o);
        switch (_id) {
        case 0: _t->acceptClientJoin((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 1: _t->acceptClientLeave((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 2: _t->acceptPrivateMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->acceptPublicMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChatServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChatServer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ChatServer,
      qt_meta_data_ChatServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChatServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChatServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChatServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChatServer))
        return static_cast<void*>(const_cast< ChatServer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ChatServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
