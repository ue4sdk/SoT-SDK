#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_KrakenAnimatedTentacle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_KrakenAnimatedTentacle.BP_KrakenAnimatedTentacle_C
// 0x0010 (0x0AF0 - 0x0AE0)
class ABP_KrakenAnimatedTentacle_C : public AKrakenAnimatedTentacle
{
public:
	class UKrakenTentacleItemSpawnComponent*           KrakenTentacleItemSpawn;                                  // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_KrakenAnimatedTentacle.BP_KrakenAnimatedTentacle_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
