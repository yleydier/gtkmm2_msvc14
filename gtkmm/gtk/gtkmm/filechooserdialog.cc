// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/filechooserdialog.h>
#include <gtkmm/private/filechooserdialog_p.h>

// -*- c++ -*-
/* $Id: filechooserdialog.ccg,v 1.2 2005/01/06 22:51:46 mxpxpod Exp $ */

/*
 *
 * Copyright 2003 The gtkmm Development Team
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

FileChooserDialog::FileChooserDialog(Gtk::Window& parent, const Glib::ustring& title, FileChooserAction action)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(filechooserdialog_class_.init(), "title",title.c_str(),"action",(GtkFileChooserAction)action, static_cast<char*>(0)))
{
  set_transient_for(parent);
}

FileChooserDialog::FileChooserDialog(const Glib::ustring& title, FileChooserAction action)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(filechooserdialog_class_.init(), "title",title.c_str(),"action",(GtkFileChooserAction)action, static_cast<char*>(0)))
{
}

FileChooserDialog::FileChooserDialog(const Glib::ustring& title, FileChooserAction action, const Glib::ustring& backend)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(filechooserdialog_class_.init(), "title",title.c_str(),"action",(GtkFileChooserAction)action,"file-system-backend",backend.c_str(), static_cast<char*>(0)))
{
}

FileChooserDialog::FileChooserDialog(Gtk::Window& parent, const Glib::ustring& title, FileChooserAction action, const Glib::ustring& backend)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(filechooserdialog_class_.init(), "title",title.c_str(),"action",(GtkFileChooserAction)action,"file-system-backend",backend.c_str(), static_cast<char*>(0)))
{
  set_transient_for(parent);
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::FileChooserDialog* wrap(GtkFileChooserDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::FileChooserDialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& FileChooserDialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &FileChooserDialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_file_chooser_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  FileChooser::add_interface(get_type());

  }

  return *this;
}


void FileChooserDialog_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* FileChooserDialog_Class::wrap_new(GObject* o)
{
  return new FileChooserDialog((GtkFileChooserDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

FileChooserDialog::FileChooserDialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Dialog(construct_params)
{
  }

FileChooserDialog::FileChooserDialog(GtkFileChooserDialog* castitem)
:
  Gtk::Dialog((GtkDialog*)(castitem))
{
  }

FileChooserDialog::~FileChooserDialog()
{
  destroy_();
}

FileChooserDialog::CppClassType FileChooserDialog::filechooserdialog_class_; // initialize static member

GType FileChooserDialog::get_type()
{
  return filechooserdialog_class_.init().get_type();
}


GType FileChooserDialog::get_base_type()
{
  return gtk_file_chooser_dialog_get_type();
}


} // namespace Gtk

