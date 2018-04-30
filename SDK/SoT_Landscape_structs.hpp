#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.GrassVariety
// 0x0030
struct FGrassVariety
{
	float                                              ScaleVariationMax;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UStaticMesh*                                 GrassMesh;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrid;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinLOD;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlignToSurface;                                           // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleVariationMin;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	unsigned char                                      GrassMapChannelIndex;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class ULandscapeSplineControlPoint*                ControlPoint;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TangentLen;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	float                                              StartEndFalloff;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FVector                                     Center;                                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Left;                                                     // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffLeft;                                              // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffRight;                                             // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	unsigned char                                      End : 1;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class ULandscapeSplineSegment*                     Segment;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GrassInput
// 0x0048
struct FGrassInput
{
	struct FExpressionInput                            Input;                                                    // 0x0000(0x0038) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1AB];                                     // 0x0038(0x01AB) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULandscapeGrassType*                         GrassType;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0098
struct FLayerBlendInput
{
	float                                              ConstHeightInput;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       LayerName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            LayerInput;                                               // 0x01E3(0x0038) (ZeroConstructor)
	struct FExpressionInput                            HeightInput;                                              // 0x01E3(0x0038) (ZeroConstructor)
	float                                              PreviewWeight;                                            // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstLayerInput;                                          // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                             // 0x01E3(0x0001) (Edit)
	struct FVector2D                                   CenterAdjust;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleToWidth : 1;                                        // 0x01E3(0x0001) (Edit)
	struct FVector                                     Scale;                                                    // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeSplineMeshOrientation>       Orientation;                                              // 0x01E3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
