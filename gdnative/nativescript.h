#ifndef CGDNATIVE_NATIVESCRIPT_GATEWAY_H
#define CGDNATIVE_NATIVESCRIPT_GATEWAY_H

#include <gdnative_api_struct.gen.h>
#include <gdnative/gdnative.h>
#include <nativescript/godot_nativescript.h>

/* GDNative NATIVESCRIPT C Gateway */
void *cgo_gateway_create_func(godot_object *obj, void *method_data);
void *cgo_gateway_destroy_func(godot_object *obj, void *method_data,
			       void *user_data);
void *cgo_gateway_free_func(void *method_data);
godot_variant cgo_gateway_method_func(godot_object *obj, void *method_data,
				      void *user_data, int num_args,
				      godot_variant **args);
void cgo_gateway_property_set_func(godot_object *obj, void *method_data,
				   void *user_data, godot_variant *property);
godot_variant cgo_gateway_property_get_func(godot_object *obj,
					    void *method_data, void *user_data);

// Type definitions for any function pointers. Some of these are not defined in
// the godot headers when they are part of a typedef struct.
typedef void (*create_func)(godot_object *, void *);
typedef void (*destroy_func)(godot_object *, void *, void *);
typedef void (*free_func)(void *);
typedef godot_variant (*method)(godot_object *, void *, void *, int,
				godot_variant **);
typedef void (*set_property_func)(godot_object *, void *, void *,
				  godot_variant *);
typedef godot_variant (*get_property_func)(godot_object *, void *, void *);
godot_signal_argument **go_godot_signal_argument_build_array(int length);
void go_godot_signal_argument_add_element(godot_signal_argument **array,
					  godot_signal_argument *element,
					  int index);


/* GDNative NATIVESCRIPT 1.0 */
void go_godot_nativescript_register_class(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_base, godot_instance_create_func p_create_func, godot_instance_destroy_func p_destroy_func);
void go_godot_nativescript_register_tool_class(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_base, godot_instance_create_func p_create_func, godot_instance_destroy_func p_destroy_func);
void go_godot_nativescript_register_method(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_function_name, godot_method_attributes p_attr, godot_instance_method p_method);
void go_godot_nativescript_register_property(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_path, godot_property_attributes * p_attr, godot_property_set_func p_set_func, godot_property_get_func p_get_func);
void go_godot_nativescript_register_signal(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const godot_signal * p_signal);
void * go_godot_nativescript_get_userdata(godot_gdnative_ext_nativescript_api_struct * p_api, godot_object * p_instance);
#endif
