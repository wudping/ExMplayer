/****************************************************************************
** Meta object code from reading C++ file 'mixdialog.h'
**
** Created: Sun Jan 27 21:26:48 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mixdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mixdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mixDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   44,   10,   10, 0x0a,
      62,   10,   10,   10, 0x0a,
      88,   77,   10,   10, 0x0a,
     117,   10,   10,   10, 0x0a,
     136,   10,   10,   10, 0x08,
     162,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_mixDialog[] = {
    "mixDialog\0\0opt,fn\0showfile(QString,QString)\0"
    "ec\0completed(int)\0updateStatus()\0"
    "cfn,af,dir\0mix(QString,QString,QString)\0"
    "readffmpegoutput()\0on_pushButtonof_clicked()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject mixDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_mixDialog,
      qt_meta_data_mixDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mixDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mixDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mixDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mixDialog))
        return static_cast<void*>(const_cast< mixDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int mixDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showfile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: completed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: updateStatus(); break;
        case 3: mix((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: readffmpegoutput(); break;
        case 5: on_pushButtonof_clicked(); break;
        case 6: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mixDialog::showfile(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE