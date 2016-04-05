// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/togglebutton.h>
#include <gtkmm/private/togglebutton_p.h>

// -*- c++ -*-
/* $Id: togglebutton.ccg,v 1.2 2006/07/16 19:18:49 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtk.h>

namespace Gtk
{

ToggleButton::ToggleButton(const Glib::ustring& label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Button(Glib::ConstructParams(togglebutton_class_.init(), "label",label.c_str(),"use_underline",gboolean(mnemonic), static_cast<char*>(0)))
{}

ToggleButton::ToggleButton(const StockID& stock_id)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Button(Glib::ConstructParams(togglebutton_class_.init(), "use_stock",1,"label",stock_id.get_c_str(), static_cast<char*>(0)))
{}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo ToggleButton_signal_toggled_info =
{
  "toggled",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::ToggleButton* wrap(GtkToggleButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::ToggleButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ToggleButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ToggleButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_toggle_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void ToggleButton_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->toggled = &toggled_callback;
}


void ToggleButton_Class::toggled_callback(GtkToggleButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->on_toggled();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->toggled)
    (*base->toggled)(self);
}


Glib::ObjectBase* ToggleButton_Class::wrap_new(GObject* o)
{
  return manage(new ToggleButton((GtkToggleButton*)(o)));

}


/* The implementation: */

ToggleButton::ToggleButton(const Glib::ConstructParams& construct_params)
:
  Gtk::Button(construct_params)
{
  }

ToggleButton::ToggleButton(GtkToggleButton* castitem)
:
  Gtk::Button((GtkButton*)(castitem))
{
  }

ToggleButton::~ToggleButton()
{
  destroy_();
}

ToggleButton::CppClassType ToggleButton::togglebutton_class_; // initialize static member

GType ToggleButton::get_type()
{
  return togglebutton_class_.init().get_type();
}


GType ToggleButton::get_base_type()
{
  return gtk_toggle_button_get_type();
}


ToggleButton::ToggleButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Button(Glib::ConstructParams(togglebutton_class_.init()))
{
  

}

void ToggleButton::set_mode(bool draw_indicator)
{
gtk_toggle_button_set_mode(gobj(), static_cast<int>(draw_indicator)); 
}

bool ToggleButton::get_mode() const
{
  return gtk_toggle_button_get_mode(const_cast<GtkToggleButton*>(gobj()));
}

void ToggleButton::set_active(bool is_active)
{
gtk_toggle_button_set_active(gobj(), static_cast<int>(is_active)); 
}

bool ToggleButton::get_active() const
{
  return gtk_toggle_button_get_active(const_cast<GtkToggleButton*>(gobj()));
}

void ToggleButton::set_inconsistent(bool setting)
{
gtk_toggle_button_set_inconsistent(gobj(), static_cast<int>(setting)); 
}

bool ToggleButton::get_inconsistent() const
{
  return gtk_toggle_button_get_inconsistent(const_cast<GtkToggleButton*>(gobj()));
}

void ToggleButton::toggled()
{
gtk_toggle_button_toggled(gobj()); 
}


Glib::SignalProxy0< void > ToggleButton::signal_toggled()
{
  return Glib::SignalProxy0< void >(this, &ToggleButton_signal_toggled_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> ToggleButton::property_active() 
{
  return Glib::PropertyProxy<bool>(this, "active");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> ToggleButton::property_active() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "active");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> ToggleButton::property_inconsistent() 
{
  return Glib::PropertyProxy<bool>(this, "inconsistent");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> ToggleButton::property_inconsistent() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "inconsistent");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> ToggleButton::property_draw_indicator() 
{
  return Glib::PropertyProxy<bool>(this, "draw-indicator");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> ToggleButton::property_draw_indicator() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "draw-indicator");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gtk::ToggleButton::on_toggled()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->toggled)
    (*base->toggled)(gobj());
}


} // namespace Gtk


