// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gdkmm/visual.h>
#include <gdkmm/private/visual_p.h>

// -*- c++ -*-
/* $Id: visual.ccg,v 1.1 2003/01/21 13:38:39 murrayc Exp $ */

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

#include <gdk/gdk.h>

namespace Gdk
{


} //namespace


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gdk::VisualType>::value_type()
{
  return gdk_visual_type_get_type();
}


namespace Glib
{

Glib::RefPtr<Gdk::Visual> wrap(GdkVisual* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::Visual>( dynamic_cast<Gdk::Visual*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& Visual_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Visual_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_visual_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Visual_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Visual_Class::wrap_new(GObject* object)
{
  return new Visual((GdkVisual*)object);
}


/* The implementation: */

GdkVisual* Visual::gobj_copy()
{
  reference();
  return gobj();
}

Visual::Visual(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Visual::Visual(GdkVisual* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Visual::~Visual()
{}


Visual::CppClassType Visual::visual_class_; // initialize static member

GType Visual::get_type()
{
  return visual_class_.init().get_type();
}


GType Visual::get_base_type()
{
  return gdk_visual_get_type();
}


Visual::Visual()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(visual_class_.init()))
{
  

}

Glib::RefPtr<Visual> Visual::get_system()
{

  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_visual_get_system());

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


Glib::RefPtr<Visual> Visual::get_best()
{

  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_visual_get_best());

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


Glib::RefPtr<Visual> Visual::get_best(int depth)
{

  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_visual_get_best_with_depth(depth));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


Glib::RefPtr<Visual> Visual::get_best(VisualType visual_type)
{

  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_visual_get_best_with_type(((GdkVisualType)(visual_type))));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


Glib::RefPtr<Visual> Visual::get_best(int depth, VisualType visual_type)
{

  Glib::RefPtr<Visual> retvalue = Glib::wrap(gdk_visual_get_best_with_both(depth, ((GdkVisualType)(visual_type))));

  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


int Visual::get_best_depth()
{
  return gdk_visual_get_best_depth();
}


VisualType Visual::get_best_type()
{
  return ((VisualType)(gdk_visual_get_best_type()));
}


Glib::RefPtr<Screen> Visual::get_screen()
{

  Glib::RefPtr<Screen> retvalue = Glib::wrap(gdk_visual_get_screen(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Screen> Visual::get_screen() const
{
  return const_cast<Visual*>(this)->get_screen();
}

VisualType Visual::get_visual_type() const
{
  return ((VisualType)(gdk_visual_get_visual_type(const_cast<GdkVisual*>(gobj()))));
}

int Visual::get_depth() const
{
  return gdk_visual_get_depth(const_cast<GdkVisual*>(gobj()));
}

ByteOrder Visual::get_byte_order()
{
  return ((ByteOrder)(gdk_visual_get_byte_order(gobj())));
}

int Visual::get_colormap_size() const
{
  return gdk_visual_get_colormap_size(const_cast<GdkVisual*>(gobj()));
}

int Visual::get_bits_per_rgb() const
{
  return gdk_visual_get_bits_per_rgb(const_cast<GdkVisual*>(gobj()));
}

void Visual::get_red_pixel_details(guint32& mask, int& shift, int& precision) const
{
gdk_visual_get_red_pixel_details(const_cast<GdkVisual*>(gobj()), &(mask), &shift, &precision); 
}

void Visual::get_green_pixel_details(guint32& mask, int& shift, int& precision) const
{
gdk_visual_get_green_pixel_details(const_cast<GdkVisual*>(gobj()), &(mask), &shift, &precision); 
}

void Visual::get_blue_pixel_details(guint32& mask, int& shift, int& precision) const
{
gdk_visual_get_blue_pixel_details(const_cast<GdkVisual*>(gobj()), &(mask), &shift, &precision); 
}


} // namespace Gdk


