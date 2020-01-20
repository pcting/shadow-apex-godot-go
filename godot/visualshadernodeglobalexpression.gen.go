package godot

import (
	"github.com/shadowapex/godot-go/gdnative"
)

/*------------------------------------------------------------------------------
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated. Any updates should be done in
//   "class.go.tmpl" so they can be included in the generated
//   code.
//----------------------------------------------------------------------------*/

//func NewVisualShaderNodeGlobalExpressionFromPointer(ptr gdnative.Pointer) VisualShaderNodeGlobalExpression {
func newVisualShaderNodeGlobalExpressionFromPointer(ptr gdnative.Pointer) VisualShaderNodeGlobalExpression {
	owner := gdnative.NewObjectFromPointer(ptr)
	obj := VisualShaderNodeGlobalExpression{}
	obj.SetBaseObject(owner)

	return obj
}

/*

 */
type VisualShaderNodeGlobalExpression struct {
	VisualShaderNodeExpression
	owner gdnative.Object
}

func (o *VisualShaderNodeGlobalExpression) BaseClass() string {
	return "VisualShaderNodeGlobalExpression"
}

// VisualShaderNodeGlobalExpressionImplementer is an interface that implements the methods
// of the VisualShaderNodeGlobalExpression class.
type VisualShaderNodeGlobalExpressionImplementer interface {
	VisualShaderNodeExpressionImplementer
}