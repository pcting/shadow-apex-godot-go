#include <gdnative/gdnative.h>
#include <gdnative_api_struct.gen.h>
#include <nativescript/godot_nativescript.h>
#include <stdio.h>
#include <stdlib.h>

// This is a gateway function for the create method.
void *cgo_gateway_create_func(godot_object *obj, void *method_data) {
	// printf("CGO: C.go_create_func_cgo()\n");
	void *ret;
	void *go_create_func(godot_object *, void *);
	ret = go_create_func(obj, method_data);  // Execute our Go function.
	return ret;
}

// This is a gateway function for the destroy method.
void *cgo_gateway_destroy_func(godot_object *obj, void *method_data,
			       void *user_data) {
	// printf("CGO: C.go_destroy_func_cgo()\n");
	void *ret;
	void *go_destroy_func(godot_object *, void *, void *);
	ret = go_destroy_func(obj, method_data,
			      user_data);  // Execute our Go function.
	return ret;
}

// This is a gateway function for the free method.
void *cgo_gateway_free_func(void *method_data) {
	// printf("CGO: C.go_free_func_cgo()\n");
	void *ret;
	void *go_free_func(void *);
	ret = go_free_func(method_data);  // Execute our Go function.
	return ret;
}

// This is a gateway function for the method
// GDCALLINGCONV godot_variant (*method)(godot_object *, void *, void *, int,
// godot_variant **);
// func go_method_func(godotObject *C.godot_object, methodData unsafe.Pointer,
// userData unsafe.Pointer, numArgs C.uint, args **C.godot_variant) {
godot_variant cgo_gateway_method_func(godot_object *obj, void *method_data,
				      void *user_data, int num_args,
				      godot_variant **args) {
	// printf("CGO: C.go_method_func_cgo()\n");
	// printf("CGO: Number of arguments: %d\n", num_args);
	godot_variant ret;
	godot_variant go_method_func(godot_object *, void *, void *, int,
				     godot_variant **);
	ret = go_method_func(obj, method_data, user_data, num_args,
			     args);  // Execute our Go function.

	return ret;
}

// This is a gateway function for the set property method.
// GDCALLINGCONV void (*set_func)(godot_object *, void *, void *, godot_variant
// *);
void cgo_gateway_property_set_func(godot_object *obj, void *method_data,
				   void *user_data, godot_variant *property) {
	// printf("CGO: C.go_set_property_func()\n");
	void go_set_property_func(godot_object *, void *, void *,
				  godot_variant *);
	go_set_property_func(obj, method_data, user_data,
			     property);  // Execute our Go function.
}

// This is a gateway function for the get property method.
// GDCALLINGCONV godot_variant (*get_func)(godot_object *, void *, void *);
godot_variant cgo_gateway_property_get_func(godot_object *obj,
					    void *method_data,
					    void *user_data) {
	// printf("CGO: C.go_get_property_func()\n");
	godot_variant ret;
	godot_variant go_get_property_func(godot_object *, void *, void *);
	ret = go_get_property_func(obj, method_data,
				   user_data);  // Execute our Go function.

	return ret;
}

godot_signal_argument **go_godot_signal_argument_build_array(int length) {
	godot_signal_argument **arr =
	    malloc(sizeof(godot_signal_argument *) * length);

	return arr;
}

void go_godot_signal_argument_add_element(godot_signal_argument **array,
					  godot_signal_argument *element,
					  int index) {
	array[index] = element;
}


/* GDNative NATIVESCRIPT 1.0 */
void go_godot_nativescript_register_class(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_base, godot_instance_create_func p_create_func, godot_instance_destroy_func p_destroy_func) {
	p_api->godot_nativescript_register_class(p_gdnative_handle, p_name, p_base, p_create_func, p_destroy_func);
}

void go_godot_nativescript_register_tool_class(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_base, godot_instance_create_func p_create_func, godot_instance_destroy_func p_destroy_func) {
	p_api->godot_nativescript_register_tool_class(p_gdnative_handle, p_name, p_base, p_create_func, p_destroy_func);
}

void go_godot_nativescript_register_method(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_function_name, godot_method_attributes p_attr, godot_instance_method p_method) {
	p_api->godot_nativescript_register_method(p_gdnative_handle, p_name, p_function_name, p_attr, p_method);
}

void go_godot_nativescript_register_property(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const char * p_path, godot_property_attributes * p_attr, godot_property_set_func p_set_func, godot_property_get_func p_get_func) {
	p_api->godot_nativescript_register_property(p_gdnative_handle, p_name, p_path, p_attr, p_set_func, p_get_func);
}

void go_godot_nativescript_register_signal(godot_gdnative_ext_nativescript_api_struct * p_api, void * p_gdnative_handle, const char * p_name, const godot_signal * p_signal) {
	p_api->godot_nativescript_register_signal(p_gdnative_handle, p_name, p_signal);
}

void * go_godot_nativescript_get_userdata(godot_gdnative_ext_nativescript_api_struct * p_api, godot_object * p_instance) {
	return p_api->godot_nativescript_get_userdata(p_instance);
}
