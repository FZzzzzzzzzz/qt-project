/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../menu.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMenuENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMenuENDCLASS = QtMocHelpers::stringData(
    "Menu",
    "on_btnAdventure_clicked",
    "",
    "on_btnAdventure_pressed",
    "on_btnAdventure_released",
    "on_btnGauntlet_pressed",
    "on_btnGauntlet_released",
    "on_btnOptions_pressed",
    "on_btnOptions_released",
    "on_btnMoreGames_pressed",
    "on_btnMoreGames_released",
    "on_btnQuit_pressed",
    "on_btnQuit_released"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMenuENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[5];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[25];
    char stringdata5[23];
    char stringdata6[24];
    char stringdata7[22];
    char stringdata8[23];
    char stringdata9[24];
    char stringdata10[25];
    char stringdata11[19];
    char stringdata12[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMenuENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMenuENDCLASS_t qt_meta_stringdata_CLASSMenuENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Menu"
        QT_MOC_LITERAL(5, 23),  // "on_btnAdventure_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 23),  // "on_btnAdventure_pressed"
        QT_MOC_LITERAL(54, 24),  // "on_btnAdventure_released"
        QT_MOC_LITERAL(79, 22),  // "on_btnGauntlet_pressed"
        QT_MOC_LITERAL(102, 23),  // "on_btnGauntlet_released"
        QT_MOC_LITERAL(126, 21),  // "on_btnOptions_pressed"
        QT_MOC_LITERAL(148, 22),  // "on_btnOptions_released"
        QT_MOC_LITERAL(171, 23),  // "on_btnMoreGames_pressed"
        QT_MOC_LITERAL(195, 24),  // "on_btnMoreGames_released"
        QT_MOC_LITERAL(220, 18),  // "on_btnQuit_pressed"
        QT_MOC_LITERAL(239, 19)   // "on_btnQuit_released"
    },
    "Menu",
    "on_btnAdventure_clicked",
    "",
    "on_btnAdventure_pressed",
    "on_btnAdventure_released",
    "on_btnGauntlet_pressed",
    "on_btnGauntlet_released",
    "on_btnOptions_pressed",
    "on_btnOptions_released",
    "on_btnMoreGames_pressed",
    "on_btnMoreGames_released",
    "on_btnQuit_pressed",
    "on_btnQuit_released"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMenuENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMenuENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMenuENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMenuENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Menu, std::true_type>,
        // method 'on_btnAdventure_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAdventure_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAdventure_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnGauntlet_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnGauntlet_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnOptions_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnOptions_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnMoreGames_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnMoreGames_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnQuit_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnQuit_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnAdventure_clicked(); break;
        case 1: _t->on_btnAdventure_pressed(); break;
        case 2: _t->on_btnAdventure_released(); break;
        case 3: _t->on_btnGauntlet_pressed(); break;
        case 4: _t->on_btnGauntlet_released(); break;
        case 5: _t->on_btnOptions_pressed(); break;
        case 6: _t->on_btnOptions_released(); break;
        case 7: _t->on_btnMoreGames_pressed(); break;
        case 8: _t->on_btnMoreGames_released(); break;
        case 9: _t->on_btnQuit_pressed(); break;
        case 10: _t->on_btnQuit_released(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMenuENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
