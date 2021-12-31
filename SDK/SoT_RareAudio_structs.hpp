#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_RareAudio_enums.hpp"
#include "SoT_RareEngine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_WwiseAudio_classes.hpp"

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

// ScriptStruct RareAudio.EventToComponentMapping
// 0x0020
struct FEventToComponentMapping
{
	UWwiseEvent*                                       PlayEvent;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UWwiseEvent*                                       StopEvent;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<UWwiseEmitterComponent*>                    WwiseEmitterComponents;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct RareAudio.WWiseEmitterCreationRTPCSetting
// 0x000C
struct FWWiseEmitterCreationRTPCSetting
{
	FName                                              RTPCName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RTPCValue;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareAudio.WWiseEmitterCreationSwitchSetting
// 0x0010
struct FWWiseEmitterCreationSwitchSetting
{
	FName                                              SwitchGroup;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	FName                                              SwitchValue;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RareAudio.WwiseEmitterCreationParams
// 0x0028
struct FWwiseEmitterCreationParams
{
	UWwiseEvent*                                       Event;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<FWWiseEmitterCreationRTPCSetting>           RTPCs;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<FWWiseEmitterCreationSwitchSetting>         Switches;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshWwiseEmitterData
// 0x0038
struct FStaticMeshWwiseEmitterData
{
	UWwiseObjectPoolWrapper*                           Pool;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	FVector                                            LocalOriginOffset;                                        // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<UWwiseEvent*>                               StartEvents;                                              // 0x0018(0x0010) (Edit, ZeroConstructor)
	TArray<UWwiseEvent*>                               StopEvents;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshAudioAssociation
// 0x0020
struct FStaticMeshAudioAssociation
{
	TArray<FStaticMeshWwiseEmitterData>                PlaybackDataArray;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<UStaticMesh*>                               Meshes;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct RareAudio.StaticMeshComponentAudioAssociation
// 0x0068
struct FStaticMeshComponentAudioAssociation
{
	FStaticMeshWwiseEmitterData                        PlaybackData;                                             // 0x0000(0x0038) (Edit)
	FVector                                            EmitterPositionRelativeToComponentOrigin;                 // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0044(0x0024) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
