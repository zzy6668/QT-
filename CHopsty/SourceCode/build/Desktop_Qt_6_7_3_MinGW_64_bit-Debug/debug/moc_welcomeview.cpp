/****************************************************************************
** Meta object code from reading C++ file 'welcomeview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../welcomeview.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
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
struct qt_meta_stringdata_CLASSWelcomeViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWelcomeViewENDCLASS = QtMocHelpers::stringData(
    "WelcomeView",
    "goDepartmentView",
    "",
    "goDoctorView",
    "goPatientView",
    "goRecordView",
    "on_btDepartment_clicked",
    "on_btDoctor_clicked",
    "on_btPatient_clicked",
    "on_btrecord_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWelcomeViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,
       5,    0,   65,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WelcomeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWelcomeViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWelcomeViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWelcomeViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WelcomeView, std::true_type>,
        // method 'goDepartmentView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goDoctorView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goPatientView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goRecordView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btDepartment_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btDoctor_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btPatient_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btrecord_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WelcomeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WelcomeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goDepartmentView(); break;
        case 1: _t->goDoctorView(); break;
        case 2: _t->goPatientView(); break;
        case 3: _t->goRecordView(); break;
        case 4: _t->on_btDepartment_clicked(); break;
        case 5: _t->on_btDoctor_clicked(); break;
        case 6: _t->on_btPatient_clicked(); break;
        case 7: _t->on_btrecord_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WelcomeView::*)();
            if (_t _q_method = &WelcomeView::goDepartmentView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WelcomeView::*)();
            if (_t _q_method = &WelcomeView::goDoctorView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WelcomeView::*)();
            if (_t _q_method = &WelcomeView::goPatientView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WelcomeView::*)();
            if (_t _q_method = &WelcomeView::goRecordView; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *WelcomeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWelcomeViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WelcomeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WelcomeView::goDepartmentView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WelcomeView::goDoctorView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WelcomeView::goPatientView()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WelcomeView::goRecordView()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
