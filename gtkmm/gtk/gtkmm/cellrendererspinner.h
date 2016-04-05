// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERSPINNER_H
#define _GTKMM_CELLRENDERERSPINNER_H


#include <glibmm.h>

/* cellrendererspinner.h
 *
 * Copyright (C) 2009 The gtkmm Development Team
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

#include <gtkmm/cellrenderer.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCellRendererSpinner GtkCellRendererSpinner;
typedef struct _GtkCellRendererSpinnerClass GtkCellRendererSpinnerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class CellRendererSpinner_Class; } // namespace Gtk
namespace Gtk
{


/** Renders a spinning animation in a cell.
 * A CellRendererSpinner can be used as an alternative to CellRendererProgress for displaying
 * indefinite activity, instead of actual progress.
 *
 * To start the animation in a cell, set the active property to	true and increment the pulse property
 * at regular intervals.
 *
 * @ingroup TreeView
 */

class CellRendererSpinner : public CellRenderer
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRendererSpinner CppObjectType;
  typedef CellRendererSpinner_Class CppClassType;
  typedef GtkCellRendererSpinner BaseObjectType;
  typedef GtkCellRendererSpinnerClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~CellRendererSpinner();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CellRendererSpinner_Class;
  static CppClassType cellrendererspinner_class_;

  // noncopyable
  CellRendererSpinner(const CellRendererSpinner&);
  CellRendererSpinner& operator=(const CellRendererSpinner&);

protected:
  explicit CellRendererSpinner(const Glib::ConstructParams& construct_params);
  explicit CellRendererSpinner(GtkCellRendererSpinner* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCellRendererSpinner*       gobj()       { return reinterpret_cast<GtkCellRendererSpinner*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCellRendererSpinner* gobj() const { return reinterpret_cast<GtkCellRendererSpinner*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  CellRendererSpinner();

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the spinner is active (ie. shown) in the cell.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_active() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the spinner is active (ie. shown) in the cell.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_active() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Pulse of the spinner.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<guint> property_pulse() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Pulse of the spinner.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<guint> property_pulse() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkIconSize value that specifies the size of the rendered spinner.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gtk::IconSize> property_size() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The GtkIconSize value that specifies the size of the rendered spinner.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gtk::IconSize> property_size() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::CellRendererSpinner
   */
  Gtk::CellRendererSpinner* wrap(GtkCellRendererSpinner* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLRENDERERSPINNER_H */

