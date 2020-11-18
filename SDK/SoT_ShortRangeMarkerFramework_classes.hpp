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


// Class ShortRangeMarkerFramework.ShortRangeMarker
// 0x0058 (0x04C8 - 0x0470)
class AShortRangeMarker : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0470(0x0010) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0480(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              LifetimerTimer;                                           // 0x0490(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTimer;                                                // 0x0494(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TriggerFadeIn;                                            // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerFadeOut;                                           // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<TWeakObjectPtr<class AActor>>               CachedActors;                                             // 0x04B8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShortRangeMarkerFramework.ShortRangeMarker"));
		return ptr;
	}


	void Multicast_OnCleanUp();
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
