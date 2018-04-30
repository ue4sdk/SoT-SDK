#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AthenaSocketLookup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaRigging.RopeCatenaryLengthParams
// 0x0010
struct FRopeCatenaryLengthParams
{
	float                                              CatenaryScaleAtMaxLength;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              MinTautLength;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTautLength;                                            // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CatenaryScaleAtMinLength;                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenarySlopeBlendParams
// 0x0008
struct FRopeCatenarySlopeBlendParams
{
	float                                              MaxSlopeForTautBlend;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              MinSlopeForTautBlend;                                     // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenaryShapeParams
// 0x0018
struct FRopeCatenaryShapeParams
{
	struct FRopeCatenarySlopeBlendParams               Slope;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FRopeCatenaryLengthParams                   Length;                                                   // 0x01E3(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct AthenaRigging.RopeCatenarySwingParams
// 0x0008
struct FRopeCatenarySwingParams
{
	float                                              LengthBias;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              LengthForNeutralSwing;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeCatenaryDynamicsParams
// 0x0008
struct FRopeCatenaryDynamicsParams
{
	bool                                               ReactsToWind;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	float                                              CatenaryToTautLengthRatioToConsiderCatenary;              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.InstancedRopeParams
// 0x0050
struct FInstancedRopeParams
{
	struct FRopeCatenaryDynamicsParams                 Dynamics;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FVector                                     Start;                                                    // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x01E3(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UVScale;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UVOffset;                                                 // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Roughness;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRopeCatenaryShapeParams                    Shape;                                                    // 0x01E3(0x0018) (Edit, BlueprintVisible)
	struct FRopeCatenarySwingParams                    Swing;                                                    // 0x01E3(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct AthenaRigging.RiggingSystemLine
// 0x0010
struct FRiggingSystemLine
{
	uint32_t                                           NumRopes;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	uint32_t                                           RopeStart;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SocketStart;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PulleyStart;                                              // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyData
// 0x0060
struct FRiggingSystemPulleyData
{
	TArray<float>                                      ScaledRadius;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                Meshes;                                                   // 0x01E3(0x0010) (ExportObject, ZeroConstructor)
	TArray<float>                                      AttachmentSag;                                            // 0x01E3(0x0010) (ZeroConstructor)
	TArray<float>                                      AttachmentLength;                                         // 0x01E3(0x0010) (ZeroConstructor)
	TArray<float>                                      Scale;                                                    // 0x01E3(0x0010) (ZeroConstructor)
	TArray<float>                                      ScaledOffset;                                             // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaRigging.RopeStyleParams
// 0x0020
struct FRopeStyleParams
{
	int                                                ShadowLOD;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DiffuseTexture;                                           // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  NormalTexture;                                            // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.PulleyVisualParams
// 0x0010
struct FPulleyVisualParams
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RopeVisualParams
// 0x000C
struct FRopeVisualParams
{
	float                                              Roughness;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Thickness;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UVScale;                                                  // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyAttachmentParams
// 0x0014
struct FRiggingSystemPulleyAttachmentParams
{
	float                                              Sag;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FRopeVisualParams                           Visuals;                                                  // 0x01E3(0x000C) (Edit)
	float                                              Length;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaRigging.RiggingSystemPulleyParams
// 0x0050
struct FRiggingSystemPulleyParams
{
	struct FRiggingSystemPulleyAttachmentParams        AttachmentRope;                                           // 0x0000(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x1CF];                                     // 0x0014(0x01CF) MISSED OFFSET
	struct FSocketId                                   Anchor;                                                   // 0x01E3(0x0020) (Edit)
	float                                              OffsetFromAnchor;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPulleyVisualParams                         Visuals;                                                  // 0x01E3(0x0010) (Edit)
};

// ScriptStruct AthenaRigging.RiggingSystemLineParams
// 0x0078
struct FRiggingSystemLineParams
{
	struct FRopeCatenaryShapeParams                    Shape;                                                    // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x1CB];                                     // 0x0018(0x01CB) MISSED OFFSET
	struct FSocketId                                   Start;                                                    // 0x01E3(0x0020) (Edit)
	TArray<struct FRiggingSystemPulleyParams>          Pulleys;                                                  // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FSocketId                                   End;                                                      // 0x01E3(0x0020) (Edit)
	struct FRopeVisualParams                           Visuals;                                                  // 0x01E3(0x000C) (Edit)
};

// ScriptStruct AthenaRigging.RopeAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FRopeAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0048(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaRigging.RiggingSystemAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FRiggingSystemAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	TArray<class ARiggingSystem*>                      RiggingSystems;                                           // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaRigging.RopeCatenaryLengthPair
// 0x0008
struct FRopeCatenaryLengthPair
{
	float                                              Catenary;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              Taut;                                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
