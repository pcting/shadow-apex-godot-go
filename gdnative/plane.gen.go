package gdnative

/*------------------------------------------------------------------------------
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated. Any updates should be done in
//   "types.go.tmpl" so they can be included in the generated
//   code.
//----------------------------------------------------------------------------*/

/*
#include <gdnative/plane.h>
*/
import "C"

type Plane struct {
	base *C.godot_plane
}

func (t *Plane) getBase() *C.godot_plane {
	return t.base
}