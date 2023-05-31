/****************************************************************************
** Meta object code from reading C++ file 'adventuremenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adventuremenu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adventuremenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAdventureMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAdventureMenuENDCLASS = QtMocHelpers::stringData(
    "AdventureMenu",
    "on_advMainMenuButton_pressed",
    "",
    "on_advMainMenuButton_released",
    "on_advPlayButton_pressed",
    "on_advPlayButton_released",
    "on_btnA1_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAdventureMenuENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[14];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[25];
    char stringdata5[26];
    char stringdata6[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAdventureMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAdventureMenuENDCLASS_t qt_meta_stringdata_CLASSAdventureMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "AdventureMenu"
        QT_MOC_LITERAL(14, 28),  // "on_advMainMenuButton_pressed"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 29),  // "on_advMainMenuButton_released"
        QT_MOC_LITERAL(74, 24),  // "on_advPlayButton_pressed"
        QT_MOC_LITERAL(99, 25),  // "on_advPlayButton_released"
        QT_MOC_LITERAL(125, 16)   // "on_btnA1_clicked"
    },
    "AdventureMenu",
    "on_advMainMenuButton_pressed",
    "",
    "on_advMainMenuButton_released",
    "on_advPlayButton_pressed",
    "on_advPlayButton_released",
    "on_btnA1_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAdventureMenuENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AdventureMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSAdventureMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAdventureMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAdventureMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AdventureMenu, std::true_type>,
        // method 'on_advMainMenuButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_advMainMenuButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_advPlayButton_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_advPlayButton_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnA1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AdventureMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdventureMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_advMainMenuButton_pressed(); break;
        case 1: _t->on_advMainMenuButton_released(); break;
        case 2: _t->on_advPlayButton_pressed(); break;
        case 3: _t->on_advPlayButton_released(); break;
        case 4: _t->on_btnA1_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AdventureMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdventureMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAdventureMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AdventureMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
