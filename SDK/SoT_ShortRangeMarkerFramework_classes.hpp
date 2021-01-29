#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShortRangeMarkerFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShortRangeMarkerFramework.ShortRangeMarker
// 0x0058 (0x0480 - 0x0428)
class AShortRangeMarker : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0438(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              LifetimerTimer;                                           // 0x0448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTimer;                                                // 0x044C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TriggerFadeIn;                                            // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerFadeOut;                                           // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<TWeakObjectPtr<class AActor>>               CachedActors;                                             // 0x0470(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShortRangeMarkerFramework.ShortRangeMarker"));
		return ptr;
	}


	void Multicast_OnCleanUp();
};


// Class ShortRangeMarkerFramework.ShortRangeMarkerInterface
// 0x0000 (0x0028 - 0x0028)
class UShortRangeMarkerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShortRangeMarkerFramework.ShortRangeMarkerInterface"));
		return ptr;
	}

};


// Class ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UShortRangeMarkerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary"));
		return ptr;
	}


	static void RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors);
};


// Class ShortRangeMarkerFramework.ShortRangeMarkerDataAsset
// 0x0010 (0x0038 - 0x0028)
class UShortRangeMarkerDataAsset : public UDataAsset
{
public:
	class UActorSpawnData*                             RewardMarker;                                             // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              RewardMarkerHeight;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShortRangeMarkerFramework.ShortRangeMarkerDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
