#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_ObjectLifetime_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_WwiseAudio_classes.hpp"
#include "SoT_RareEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareAudio.WwiseEmitter
// 0x0020
struct FWwiseEmitter
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct RareAudio.WwiseEmitterCreationParams
// 0x0028
struct FWwiseEmitterCreationParams
{
	struct FName                                       SwitchValue;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UWwiseEvent*                                 Event;                                                    // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RTPCName;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RTPCValue;                                                // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchGroup;                                              // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareAudio.WwiseNativeEmitterPoolDensityParams
// 0x0028
struct FWwiseNativeEmitterPoolDensityParams
{
	float                                              DensityDistance;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	bool                                               PlayPoolDensityAudio;                                     // 0x01E3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PoolDensityAudioPlayEvent;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 PoolDensityAudioStopEvent;                                // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       DensityRtpcName;                                          // 0x01E3(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FullDensityAmount;                                        // 0x01E3(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareAudio.EventToComponentMapping
// 0x0020
struct FEventToComponentMapping
{
	TArray<class UWwiseEmitterComponent*>              WwiseEmitterComponents;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UWwiseEvent*                                 PlayEvent;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopEvent;                                                // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareAudio.StaticMeshWwiseEmitterData
// 0x0038
struct FStaticMeshWwiseEmitterData
{
	TArray<class UWwiseEvent*>                         StopEvents;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UWwiseObjectPoolWrapper*                     Pool;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalOriginOffset;                                        // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UWwiseEvent*>                         StartEvents;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshAudioAssociation
// 0x0020
struct FStaticMeshAudioAssociation
{
	TArray<class UStaticMesh*>                         Meshes;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TArray<struct FStaticMeshWwiseEmitterData>         PlaybackDataArray;                                        // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshComponentAudioAssociation
// 0x0068
struct FStaticMeshComponentAudioAssociation
{
	struct FVector                                     EmitterPositionRelativeToComponentOrigin;                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FStaticMeshWwiseEmitterData                 PlaybackData;                                             // 0x01E3(0x0038) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
