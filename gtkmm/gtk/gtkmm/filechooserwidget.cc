// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/filechooserwidget.h>
#include <gtkmm/private/filechooserwidget_p.h>

// -*- c++ -*-
/* $Id: filechooserwidget.ccg,v 1.1 2003/11/01 17:02:37 murrayc Exp $ */

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


} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::FileChooserWidget* wrap(GtkFileChooserWidget* object, bool take_copy)
{
  return dynamic_cast<Gtk::FileChooserWidget *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& FileChooserWidget_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FileChooserWidget_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_file_chooser_widget_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  FileChooser::add_interface(get_type());

  }

  return *this;
}


void FileChooserWidget_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FileChooserWidget_Class::wrap_new(GObject* o)
{
  return manage(new FileChooserWidget((GtkFileChooserWidget*)(o)));

}


/* The implementation: */

FileChooserWidget::FileChooserWidget(const Glib::ConstructParams& construct_params)
:
  Gtk::VBox(construct_params)
{
  }

FileChooserWidget::FileChooserWidget(GtkFileChooserWidget* castitem)
:
  Gtk::VBox((GtkVBox*)(castitem))
{
  }

FileChooserWidget::~FileChooserWidget()
{
  destroy_();
}

FileChooserWidget::CppClassType FileChooserWidget::filechooserwidget_class_; // initialize static member

GType FileChooserWidget::get_type()
{
  return filechooserwidget_class_.init().get_type();
}


GType FileChooserWidget::get_base_type()
{
  return gtk_file_chooser_widget_get_type();
}


FileChooserWidget::FileChooserWidget()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::VBox(Glib::ConstructParams(filechooserwidget_class_.init()))
{
  

}

FileChooserWidget::FileChooserWidget(FileChooserAction action)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::VBox(Glib::ConstructParams(filechooserwidget_class_.init(), "action", ((GtkFileChooserAction)(action)), static_cast<char*>(0)))
{
  

}

FileChooserWidget::FileChooserWidget(FileChooserAction action, const Glib::ustring& backend)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::VBox(Glib::ConstructParams(filechooserwidget_class_.init(), "action", ((GtkFileChooserAction)(action)), "backend", backend.c_str(), static_cast<char*>(0)))
{
  

}


} // namespace Gtk


