#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0018 (0x0A78 - 0x0A60)
class ABP_KrakenAnimatedTentacle_C : public AKrakenAnimatedTentacle
{
public:
	class UKrakenTentacleItemSpawnComponent*           KrakenTentacleFoodSpawn;                                  // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKrakenTentacleItemSpawnComponent*           KrakenTentacleItemSpawn;                                  // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_KrakenAnimatedTentacle.BP_KrakenAnimatedTentacle_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
