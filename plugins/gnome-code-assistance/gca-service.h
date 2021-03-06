/*
 * Generated by gdbus-codegen 2.42.0. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __GCA_SERVICE_H__
#define __GCA_SERVICE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.CodeAssist.v1.Service */

#define GCA_TYPE_SERVICE (gca_service_get_type ())
#define GCA_SERVICE(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCA_TYPE_SERVICE, GcaService))
#define GCA_IS_SERVICE(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCA_TYPE_SERVICE))
#define GCA_SERVICE_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GCA_TYPE_SERVICE, GcaServiceIface))

struct _GcaService;
typedef struct _GcaService GcaService;
typedef struct _GcaServiceIface GcaServiceIface;

struct _GcaServiceIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_dispose) (
    GcaService *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_path);

  gboolean (*handle_parse) (
    GcaService *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_path,
    const gchar *arg_data_path,
    GVariant *arg_cursor,
    GVariant *arg_options);

};

GType gca_service_get_type (void);

GDBusInterfaceInfo *gca_service_interface_info (void);
guint gca_service_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gca_service_complete_dispose (
    GcaService *object,
    GDBusMethodInvocation *invocation);

void gca_service_complete_parse (
    GcaService *object,
    GDBusMethodInvocation *invocation,
    const gchar *unnamed_arg4);



/* D-Bus method calls: */
void gca_service_call_dispose (
    GcaService *proxy,
    const gchar *arg_path,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gca_service_call_dispose_finish (
    GcaService *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gca_service_call_dispose_sync (
    GcaService *proxy,
    const gchar *arg_path,
    GCancellable *cancellable,
    GError **error);

void gca_service_call_parse (
    GcaService *proxy,
    const gchar *arg_path,
    const gchar *arg_data_path,
    GVariant *arg_cursor,
    GVariant *arg_options,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gca_service_call_parse_finish (
    GcaService *proxy,
    gchar **out_unnamed_arg4,
    GAsyncResult *res,
    GError **error);

gboolean gca_service_call_parse_sync (
    GcaService *proxy,
    const gchar *arg_path,
    const gchar *arg_data_path,
    GVariant *arg_cursor,
    GVariant *arg_options,
    gchar **out_unnamed_arg4,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define GCA_TYPE_SERVICE_PROXY (gca_service_proxy_get_type ())
#define GCA_SERVICE_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCA_TYPE_SERVICE_PROXY, GcaServiceProxy))
#define GCA_SERVICE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCA_TYPE_SERVICE_PROXY, GcaServiceProxyClass))
#define GCA_SERVICE_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCA_TYPE_SERVICE_PROXY, GcaServiceProxyClass))
#define GCA_IS_SERVICE_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCA_TYPE_SERVICE_PROXY))
#define GCA_IS_SERVICE_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCA_TYPE_SERVICE_PROXY))

typedef struct _GcaServiceProxy GcaServiceProxy;
typedef struct _GcaServiceProxyClass GcaServiceProxyClass;
typedef struct _GcaServiceProxyPrivate GcaServiceProxyPrivate;

struct _GcaServiceProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GcaServiceProxyPrivate *priv;
};

struct _GcaServiceProxyClass
{
  GDBusProxyClass parent_class;
};

GType gca_service_proxy_get_type (void);

void gca_service_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GcaService *gca_service_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GcaService *gca_service_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gca_service_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GcaService *gca_service_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GcaService *gca_service_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GCA_TYPE_SERVICE_SKELETON (gca_service_skeleton_get_type ())
#define GCA_SERVICE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GCA_TYPE_SERVICE_SKELETON, GcaServiceSkeleton))
#define GCA_SERVICE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GCA_TYPE_SERVICE_SKELETON, GcaServiceSkeletonClass))
#define GCA_SERVICE_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GCA_TYPE_SERVICE_SKELETON, GcaServiceSkeletonClass))
#define GCA_IS_SERVICE_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GCA_TYPE_SERVICE_SKELETON))
#define GCA_IS_SERVICE_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GCA_TYPE_SERVICE_SKELETON))

typedef struct _GcaServiceSkeleton GcaServiceSkeleton;
typedef struct _GcaServiceSkeletonClass GcaServiceSkeletonClass;
typedef struct _GcaServiceSkeletonPrivate GcaServiceSkeletonPrivate;

struct _GcaServiceSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GcaServiceSkeletonPrivate *priv;
};

struct _GcaServiceSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gca_service_skeleton_get_type (void);

GcaService *gca_service_skeleton_new (void);


G_END_DECLS

#endif /* __GCA_SERVICE_H__ */
