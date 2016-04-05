// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/unixconnection.h>
#include <giomm/private/unixconnection_p.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 Jonathon Jongsma
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

#include <gio/gio.h>
#include <gio/gunixconnection.h>

namespace Gio
{
} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::UnixConnection> wrap(GUnixConnection* object, bool take_copy)
{
  return Glib::RefPtr<Gio::UnixConnection>( dynamic_cast<Gio::UnixConnection*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& UnixConnection_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &UnixConnection_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_unix_connection_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void UnixConnection_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* UnixConnection_Class::wrap_new(GObject* object)
{
  return new UnixConnection((GUnixConnection*)object);
}


/* The implementation: */

GUnixConnection* UnixConnection::gobj_copy()
{
  reference();
  return gobj();
}

UnixConnection::UnixConnection(const Glib::ConstructParams& construct_params)
:
  Gio::SocketConnection(construct_params)
{

}

UnixConnection::UnixConnection(GUnixConnection* castitem)
:
  Gio::SocketConnection((GSocketConnection*)(castitem))
{}


UnixConnection::~UnixConnection()
{}


UnixConnection::CppClassType UnixConnection::unixconnection_class_; // initialize static member

GType UnixConnection::get_type()
{
  return unixconnection_class_.init().get_type();
}


GType UnixConnection::get_base_type()
{
  return g_unix_connection_get_type();
}


#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool UnixConnection::send_fd(int fd, const Glib::RefPtr<Cancellable>& cancellable)
#else
bool UnixConnection::send_fd(int fd, const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  bool retvalue = g_unix_connection_send_fd(gobj(), fd, const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
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
int UnixConnection::receive_fd(const Glib::RefPtr<Cancellable>& cancellable)
#else
int UnixConnection::receive_fd(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  int retvalue = g_unix_connection_receive_fd(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gio

