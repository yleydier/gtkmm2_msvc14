// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/mount.h>
#include <giomm/private/mount_p.h>

// -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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

#include <giomm/drive.h>
#include <giomm/volume.h>
#include <gio/gio.h>
#include "slot_async.h"

namespace Gio
{

void Mount::unmount(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_unmount_with_operation(gobj(),
                                 GMountUnmountFlags(flags),
                                 0, // mount_operation
                                 Glib::unwrap(cancellable),
                                 &SignalProxy_async_callback,
                                 slot_copy);
}

void Mount::unmount(const SlotAsyncReady& slot, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_unmount_with_operation(gobj(),
                                 GMountUnmountFlags(flags),
                                 0, // mount_operation
                                 0, // cancellable
                                 &SignalProxy_async_callback,
                                 slot_copy);
}

void Mount::unmount(MountUnmountFlags flags)
{
  g_mount_unmount_with_operation(gobj(),
                                 GMountUnmountFlags(flags),
                                 0, // mount_operation
                                 0, // cancellable
                                 0, // callback
                                 0); // data
}

void Mount::unmount(const Glib::RefPtr<MountOperation>& mount_operation,
                    const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_unmount_with_operation(gobj(),
                                 GMountUnmountFlags(flags),
                                 Glib::unwrap(mount_operation),
                                 Glib::unwrap(cancellable),
                                 &SignalProxy_async_callback,
                                 slot_copy);
}

void Mount::unmount(const Glib::RefPtr<MountOperation>& mount_operation,
                    const SlotAsyncReady& slot, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_unmount_with_operation(gobj(),
                                 GMountUnmountFlags(flags),
                                 Glib::unwrap(mount_operation),
                                 0, // cancellable
                                 &SignalProxy_async_callback,
                                 slot_copy);
}

void Mount::unmount(const Glib::RefPtr<MountOperation>& mount_operation,
                    MountUnmountFlags flags)
{
  g_mount_unmount_with_operation(gobj(),
                                 GMountUnmountFlags(flags),
                                 Glib::unwrap(mount_operation),
                                 0, // cancellable
                                 0, // callback
                                 0); // data
}


void Mount::remount(const Glib::RefPtr<MountOperation>& operation, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountMountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_remount(gobj(),
                  static_cast<GMountMountFlags>(flags),
                  Glib::unwrap(operation),
                  Glib::unwrap(cancellable),
                  &SignalProxy_async_callback,
                  slot_copy);
}

void Mount::remount(const Glib::RefPtr<MountOperation>& operation, const SlotAsyncReady& slot, MountMountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_remount(gobj(),
                  static_cast<GMountMountFlags>(flags),
                  Glib::unwrap(operation),
                  0,
                  &SignalProxy_async_callback,
                  slot_copy);
}

void Mount::remount(const Glib::RefPtr<MountOperation>& operation, MountMountFlags flags)
{
  g_mount_remount(gobj(),
                  static_cast<GMountMountFlags>(flags),
                  Glib::unwrap(operation),
                  0,
                  0,
                  0);
}

void Mount::remount(MountMountFlags flags)
{
  g_mount_remount(gobj(),
                  static_cast<GMountMountFlags>(flags),
                  0,
                  0,
                  0,
                  0);
}

void Mount::eject(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_eject_with_operation(gobj(),
                               GMountUnmountFlags(flags),
                               0, // mount_operation
                               Glib::unwrap(cancellable),
                               &SignalProxy_async_callback,
                               slot_copy);
}

void Mount::eject(const SlotAsyncReady& slot, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_eject_with_operation(gobj(),
                               GMountUnmountFlags(flags),
                               0, // mount_operation
                               0, // cancellable
                               &SignalProxy_async_callback,
                               slot_copy);
}

void Mount::eject(MountUnmountFlags flags)
{
  g_mount_eject_with_operation(gobj(),
                               GMountUnmountFlags(flags),
                               0, // mount_operation
                               0, // cancellable
                               0, // callback
                               0); // data
}

void Mount::eject(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_eject_with_operation(gobj(),
                               GMountUnmountFlags(flags),
                               Glib::unwrap(mount_operation),
                               Glib::unwrap(cancellable),
                               &SignalProxy_async_callback,
                               slot_copy);
}

void Mount::eject(const Glib::RefPtr<MountOperation>& mount_operation, const SlotAsyncReady& slot, MountUnmountFlags flags)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_eject_with_operation(gobj(),
                               GMountUnmountFlags(flags),
                               Glib::unwrap(mount_operation),
                               0, // cancellable
                               &SignalProxy_async_callback,
                               slot_copy);
}

void Mount::eject(const Glib::RefPtr<MountOperation>& mount_operation, MountUnmountFlags flags)
{
  g_mount_eject_with_operation(gobj(),
                  GMountUnmountFlags(flags),
                  Glib::unwrap(mount_operation),
                  0, // cancellable
                  0, // callback
                  0); // data
}


void Mount::guess_content_type(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, bool force_rescan)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_guess_content_type(gobj(),
                  force_rescan,
                  Glib::unwrap(cancellable),
                  &SignalProxy_async_callback,
                  slot_copy);
}

void Mount::guess_content_type(const SlotAsyncReady& slot, bool force_rescan)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_mount_guess_content_type(gobj(),
                  force_rescan,
                  0,
                  &SignalProxy_async_callback,
                  slot_copy);
}

void Mount::guess_content_type(bool force_rescan)
{
  g_mount_guess_content_type(gobj(),
                  force_rescan,
                  0,
                  0,
                  0);
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
void Mount::guess_content_type_sync(const Glib::RefPtr<Cancellable>& cancellable, bool force_rescan)
#else
void Mount::guess_content_type_sync(const Glib::RefPtr<Cancellable>& cancellable, bool force_rescan, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
    GError* gerror = 0;
    g_mount_guess_content_type_sync(gobj(), force_rescan, Glib::unwrap(cancellable),
                                    &gerror);
  if(gerror)
#ifndef GLIBMM_EXCEPTIONS_ENABLED
      error =
#endif //GLIBMM_EXCEPTIONS_ENABLED
          ::Glib::Error::throw_exception(gerror);
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
void Mount::guess_content_type_sync(bool force_rescan)
#else
void Mount::guess_content_type_sync(bool force_rescan, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
    GError* gerror = 0;
    g_mount_guess_content_type_sync(gobj(), force_rescan, 0, &gerror);
  if(gerror)
#ifndef GLIBMM_EXCEPTIONS_ENABLED
      error =
#endif //GLIBMM_EXCEPTIONS_ENABLED
          ::Glib::Error::throw_exception(gerror);
}


} // namespace Gio


namespace
{


static const Glib::SignalProxyInfo Mount_signal_changed_info =
{
  "changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Mount_signal_unmounted_info =
{
  "unmounted",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static const Glib::SignalProxyInfo Mount_signal_pre_unmount_info =
{
  "pre_unmount",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::Mount> wrap(GMount* object, bool take_copy)
{
  return Glib::RefPtr<Gio::Mount>( dynamic_cast<Gio::Mount*> (Glib::wrap_auto_interface<Gio::Mount> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gio
{


/* The *_Class implementation: */

const Glib::Interface_Class& Mount_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Mount_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = g_mount_get_type();
  }

  return *this;
}

void Mount_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  klass->changed = &changed_callback;
  klass->unmounted = &unmounted_callback;
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void Mount_Class::changed_callback(GMount* self)
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
        obj->on_changed();
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
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->changed)
    (*base->changed)(self);
}
void Mount_Class::unmounted_callback(GMount* self)
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
        obj->on_unmounted();
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
        g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)    );

  // Call the original underlying C function:
  if(base && base->unmounted)
    (*base->unmounted)(self);
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* Mount_Class::wrap_new(GObject* object)
{
  return new Mount((GMount*)(object));
}


/* The implementation: */

Mount::Mount()
:
  Glib::Interface(mount_class_.init())
{}

Mount::Mount(GMount* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Mount::Mount(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Mount::~Mount()
{}

// static
void Mount::add_interface(GType gtype_implementer)
{
  mount_class_.init().add_interface(gtype_implementer);
}

Mount::CppClassType Mount::mount_class_; // initialize static member

GType Mount::get_type()
{
  return mount_class_.init().get_type();
}


GType Mount::get_base_type()
{
  return g_mount_get_type();
}


Glib::RefPtr<File> Mount::get_root()
{

  Glib::RefPtr<File> retvalue = Glib::wrap(g_mount_get_root(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const File> Mount::get_root() const
{
  return const_cast<Mount*>(this)->get_root();
}

std::string Mount::get_name() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_mount_get_name(const_cast<GMount*>(gobj())));
}

Glib::RefPtr<Icon> Mount::get_icon()
{

  Glib::RefPtr<Icon> retvalue = Glib::wrap(g_mount_get_icon(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Icon> Mount::get_icon() const
{
  return const_cast<Mount*>(this)->get_icon();
}

std::string Mount::get_uuid() const
{
  return Glib::convert_return_gchar_ptr_to_stdstring(g_mount_get_uuid(const_cast<GMount*>(gobj())));
}

Glib::RefPtr<Volume> Mount::get_volume()
{

  Glib::RefPtr<Volume> retvalue = Glib::wrap(g_mount_get_volume(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Volume> Mount::get_volume() const
{
  return const_cast<Mount*>(this)->get_volume();
}

Glib::RefPtr<Drive> Mount::get_drive()
{

  Glib::RefPtr<Drive> retvalue = Glib::wrap(g_mount_get_drive(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Drive> Mount::get_drive() const
{
  return const_cast<Mount*>(this)->get_drive();
}

bool Mount::can_unmount() const
{
  return g_mount_can_unmount(const_cast<GMount*>(gobj()));
}

bool Mount::can_eject() const
{
  return g_mount_can_eject(const_cast<GMount*>(gobj()));
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool Mount::unmount_finish(const Glib::RefPtr<AsyncResult>& result)
#else
bool Mount::unmount_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  bool retvalue = g_mount_unmount_with_operation_finish(gobj(), Glib::unwrap(result), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool Mount::remount_finish(const Glib::RefPtr<AsyncResult>& result)
#else
bool Mount::remount_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  bool retvalue = g_mount_remount_finish(gobj(), Glib::unwrap(result), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool Mount::eject_finish(const Glib::RefPtr<AsyncResult>& result)
#else
bool Mount::eject_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  bool retvalue = g_mount_eject_with_operation_finish(gobj(), Glib::unwrap(result), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
Glib::StringArrayHandle Mount::guess_content_type_finish(const Glib::RefPtr<AsyncResult>& result)
#else
Glib::StringArrayHandle Mount::guess_content_type_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  Glib::StringArrayHandle retvalue = Glib::StringArrayHandle(g_mount_guess_content_type_finish(gobj(), Glib::unwrap(result), &(gerror)), Glib::OWNERSHIP_DEEP);
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

bool Mount::is_shadowed() const
{
  return g_mount_is_shadowed(const_cast<GMount*>(gobj()));
}

void Mount::shadow()
{
g_mount_shadow(gobj()); 
}

void Mount::unshadow()
{
g_mount_unshadow(gobj()); 
}

Glib::RefPtr<File> Mount::get_default_location() const
{
  return Glib::wrap(g_mount_get_default_location(const_cast<GMount*>(gobj())));
}


Glib::SignalProxy0< void > Mount::signal_changed()
{
  return Glib::SignalProxy0< void >(this, &Mount_signal_changed_info);
}


Glib::SignalProxy0< void > Mount::signal_unmounted()
{
  return Glib::SignalProxy0< void >(this, &Mount_signal_unmounted_info);
}


Glib::SignalProxy0< void > Mount::signal_pre_unmount()
{
  return Glib::SignalProxy0< void >(this, &Mount_signal_pre_unmount_info);
}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
void Gio::Mount::on_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->changed)
    (*base->changed)(gobj());
}
void Gio::Mount::on_unmounted()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->unmounted)
    (*base->unmounted)(gobj());
}
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gio

