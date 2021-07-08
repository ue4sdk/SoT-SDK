#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_AthenaRigging_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AthenaSocketLookup_classes.hpp"
#include "SoT_Tethering_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaRigging.RopeCatenaryLengthParams
// 0x0010
struct FRopeCatenaryLengthParams
{
	float                                              MinTautLength;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTautLength;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CatenaryScaleAtMinLength;                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CatenaryScaleAtMaxLength;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenarySlopeBlendParams
// 0x0008
struct FRopeCatenarySlopeBlendParams
{
	float                                              MinSlopeForTautBlend;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlopeForTautBlend;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenaryShapeParams
// 0x0018
struct FRopeCatenaryShapeParams
{
	struct FRopeCatenaryLengthParams                   Length;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FRopeCatenarySlopeBlendParams               Slope;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct AthenaRigging.RopeCatenarySwingParams
// 0x0008
struct FRopeCatenarySwingParams
{
	float                                              LengthForNeutralSwing;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthBias;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenaryDynamicsParams
// 0x0008
struct FRopeCatenaryDynamicsParams
{
	float                                              CatenaryToTautLengthRatioToConsiderCatenary;              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ReactsToWind;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct AthenaRigging.InstancedRopeParams
// 0x0054
struct FInstancedRopeParams
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UVScale;                                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UVBase;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UVOffset;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Roughness;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRopeCatenaryShapeParams                    Shape;                                                    // 0x002C(0x0018) (Edit, BlueprintVisible)
	struct FRopeCatenarySwingParams                    Swing;                                                    // 0x0044(0x0008) (Edit, BlueprintVisible)
	struct FRopeCatenaryDynamicsParams                 Dynamics;                                                 // 0x004C(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct AthenaRigging.RiggingSystemLine
// 0x0010
struct FRiggingSystemLine
{
	uint32_t                                           RopeStart;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SocketStart;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PulleyStart;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NumRopes;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyData
// 0x0060
struct FRiggingSystemPulleyData
{
	TArray<float>                                      AttachmentSag;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      AttachmentLength;                                         // 0x0010(0x0010) (ZeroConstructor)
	TArray<float>                                      Scale;                                                    // 0x0020(0x0010) (ZeroConstructor)
	TArray<float>                                      ScaledOffset;                                             // 0x0030(0x0010) (ZeroConstructor)
	TArray<float>                                      ScaledRadius;                                             // 0x0040(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshIDs;                                                  // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaRigging.RopeStyleParams
// 0x0020
struct FRopeStyleParams
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DiffuseTexture;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  NormalTexture;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShadowLOD;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaRigging.PulleyVisualParams
// 0x0010
struct FPulleyVisualParams
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeVisualParams
// 0x000C
struct FRopeVisualParams
{
	float                                              Thickness;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UVScale;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Roughness;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyAttachmentParams
// 0x0014
struct FRiggingSystemPulleyAttachmentParams
{
	struct FRopeVisualParams                           Visuals;                                                  // 0x0000(0x000C) (Edit)
	float                                              Length;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sag;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyParams
// 0x0050
struct FRiggingSystemPulleyParams
{
	struct FSocketId                                   Anchor;                                                   // 0x0000(0x0020) (Edit)
	float                                              OffsetFromAnchor;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FPulleyVisualParams                         Visuals;                                                  // 0x0028(0x0010) (Edit)
	struct FRiggingSystemPulleyAttachmentParams        AttachmentRope;                                           // 0x0038(0x0014) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaRigging.RiggingSystemLineParams
// 0x0078
struct FRiggingSystemLineParams
{
	struct FSocketId                                   Start;                                                    // 0x0000(0x0020) (Edit)
	TArray<struct FRiggingSystemPulleyParams>          Pulleys;                                                  // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FSocketId                                   End;                                                      // 0x0030(0x0020) (Edit)
	struct FRopeVisualParams                           Visuals;                                                  // 0x0050(0x000C) (Edit)
	struct FRopeCatenaryShapeParams                    Shape;                                                    // 0x005C(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct AthenaRigging.RiggingSystemLineGroup
// 0x0018
struct FRiggingSystemLineGroup
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FRiggingSystemLineParams>            Lines;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AthenaRigging.RopeCatenaryLengthPair
// 0x0008
struct FRopeCatenaryLengthPair
{
	float                                              Taut;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Catenary;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
