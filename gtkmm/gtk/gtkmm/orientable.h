// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ORIENTABLE_H
#define _GTKMM_ORIENTABLE_H


#include <glibmm.h>

/* $Id: orientable.hg,v 1.3 2006/05/18 17:53:15 murrayc Exp $ */

/* Copyright (C) 2009 The gtkmm Development Team
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

#include <glibmm/interface.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkOrientableIface GtkOrientableIface;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkOrientable GtkOrientable;
typedef struct _GtkOrientableClass GtkOrientableClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Orientable_Class; } // namespace Gtk
namespace Gtk
{

/** This interface is implemented by all widgets that can be oriented 
 * horizontally or vertically. Historically, such widgets have been realized as 
 * subclasses of a common base class (e.g GtkBox/GtkHBox/GtkVBox and 
 * GtkScale/GtkHScale/GtkVScale). GtkOrientable is more flexible in that it 
 * allows the orientation to be changed at runtime, allowing the widgets to 'flip'.
 *
 * @newin{2,16}
 */

class Orientable : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Orientable CppObjectType;
  typedef Orientable_Class CppClassType;
  typedef GtkOrientable BaseObjectType;
  typedef GtkOrientableIface BaseClassType;

private:
  friend class Orientable_Class;
  static CppClassType orientable_class_;

  // noncopyable
  Orientable(const Orientable&);
  Orientable& operator=(const Orientable&);

protected:
  Orientable(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Orientable(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Orientable(GtkOrientable* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Orientable();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkOrientable*       gobj()       { return reinterpret_cast<GtkOrientable*>(gobject_); }

  ///Provides access to the underlying C GObject.  
  const GtkOrientable* gobj() const { return reinterpret_cast<GtkOrientable*>(gobject_); }

private:


public:
  
  /** Sets the orientation of the @a orientable.
   * 
   * @newin{2,16}
   * @param orientation The orientable's new orientation.
   */
  void set_orientation(Orientation orientation);
  
  /** Retrieves the orientation of the @a orientable.
   * 
   * @newin{2,16}
   * @return The orientation of the @a orientable.
   */
  Orientation get_orientation() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The orientation of the orientable.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Orientation> property_orientation() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The orientation of the orientable.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Orientation> property_orientation() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Orientable
   */
  Glib::RefPtr<Gtk::Orientable> wrap(GtkOrientable* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_ORIENTABLE_H */

