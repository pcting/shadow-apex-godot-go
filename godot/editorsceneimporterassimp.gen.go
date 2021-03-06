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

//func NewEditorSceneImporterAssimpFromPointer(ptr gdnative.Pointer) EditorSceneImporterAssimp {
func newEditorSceneImporterAssimpFromPointer(ptr gdnative.Pointer) EditorSceneImporterAssimp {
	owner := gdnative.NewObjectFromPointer(ptr)
	obj := EditorSceneImporterAssimp{}
	obj.SetBaseObject(owner)

	return obj
}

/*
This is a multi-format 3D asset importer based on [url=http://assimp.org/]Assimp[/url]. See [url=https://assimp-docs.readthedocs.io/en/latest/about/intoduction.html#installation]this page[/url] for a full list of supported formats. If exporting a FBX scene from Autodesk Maya, use these FBX export settings: [codeblock] - Smoothing Groups - Smooth Mesh - Triangluate (for meshes with blend shapes) - Bake Animation - Resample All - Deformed Models - Skins - Blend Shapes - Curve Filters - Constant Key Reducer - Auto Tangents Only - *Do not check* Constraints (as it will break the file) - Can check Embed Media (embeds textures into the exported FBX file) - Note that when importing embedded media, the texture and mesh will be a single immutable file. - You will have to re-export then re-import the FBX if the texture has changed. - Units: Centimeters - Up Axis: Y - Binary format in FBX 2017 [/codeblock]
*/
type EditorSceneImporterAssimp struct {
	EditorSceneImporter
	owner gdnative.Object
}

func (o *EditorSceneImporterAssimp) BaseClass() string {
	return "EditorSceneImporterAssimp"
}

// EditorSceneImporterAssimpImplementer is an interface that implements the methods
// of the EditorSceneImporterAssimp class.
type EditorSceneImporterAssimpImplementer interface {
	EditorSceneImporterImplementer
}
