#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningstar_TrinketTrackerProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RevengeOfTheMorningstar_TrinketTrackerProxy.BP_RevengeOfTheMorningstar_TrinketTrackerProxy_C
// 0x0024 (0x04CC - 0x04A8)
class ABP_RevengeOfTheMorningstar_TrinketTrackerProxy_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TrinketsCollected;                                        // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTrinketsCollected;                                      // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                NumberToCollect;                                          // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RevengeOfTheMorningstar_TrinketTrackerProxy.BP_RevengeOfTheMorningstar_TrinketTrackerProxy_C"));
		return ptr;
	}


	void IncrementTrinketsCollected();
	void UserConstructionScript();
	void OnTrinketsCollected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
