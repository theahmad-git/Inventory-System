/****************************************************************************
** Meta object code from reading C++ file 'checkoutform.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../checkoutform.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkoutform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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
struct qt_meta_tag_ZN12CheckoutformE_t {};
} // unnamed namespace

template <> constexpr inline auto Checkoutform::qt_create_metaobjectdata<qt_meta_tag_ZN12CheckoutformE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Checkoutform",
        "handleBarcode",
        "",
        "barcode",
        "addToCart",
        "Product",
        "product",
        "on_pushButton_addtocart_clicked",
        "on_pushButton_remove_clicked",
        "on_lineEdit_discount_textChanged",
        "discountText",
        "on_pushButton_generatebill_clicked",
        "on_comboBox_2_activated",
        "index",
        "on_comboBox_method_activated",
        "on_pushButton_2_clicked",
        "on_pushButton_clicked",
        "onCartQuantityChanged",
        "row",
        "column",
        "on_pushButton_paynow_clicked",
        "on_pushButton_clearform_clicked",
        "on_lineEdit_searchproduct_textChanged",
        "text",
        "on_quantitybox_textChanged",
        "arg1"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'handleBarcode'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'addToCart'
        QtMocHelpers::SlotData<void(const Product &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'on_pushButton_addtocart_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_remove_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEdit_discount_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'on_pushButton_generatebill_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBox_2_activated'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'on_comboBox_method_activated'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'on_pushButton_2_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCartQuantityChanged'
        QtMocHelpers::SlotData<void(int, int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 18 }, { QMetaType::Int, 19 },
        }}),
        // Slot 'on_pushButton_paynow_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_clearform_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEdit_searchproduct_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'on_quantitybox_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Checkoutform, qt_meta_tag_ZN12CheckoutformE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Checkoutform::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CheckoutformE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CheckoutformE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12CheckoutformE_t>.metaTypes,
    nullptr
} };

void Checkoutform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Checkoutform *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->handleBarcode((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->addToCart((*reinterpret_cast< std::add_pointer_t<Product>>(_a[1]))); break;
        case 2: _t->on_pushButton_addtocart_clicked(); break;
        case 3: _t->on_pushButton_remove_clicked(); break;
        case 4: _t->on_lineEdit_discount_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_pushButton_generatebill_clicked(); break;
        case 6: _t->on_comboBox_2_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_comboBox_method_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->onCartQuantityChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->on_pushButton_paynow_clicked(); break;
        case 12: _t->on_pushButton_clearform_clicked(); break;
        case 13: _t->on_lineEdit_searchproduct_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->on_quantitybox_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Checkoutform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Checkoutform::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12CheckoutformE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Checkoutform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
