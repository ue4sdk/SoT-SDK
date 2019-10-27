#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReapersChest_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReapersChest_Proxy.BP_ReapersChest_Proxy_C
// 0x0020 (0x0900 - 0x08E0)
class ABP_ReapersChest_Proxy_C : public ABP_TreasureChestProxy_C
{
public:
	class UWorldMarkerOnDigPositionComponent*          WorldMarkerOnDigPosition;                                 // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_reapers_chest_smoke;                                  // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldMarkerOnSpawnPositionComponent*        WorldMarkerOnSpawnPosition;                               // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReapersMarkTrackedItemComponent*            ReapersMarkTrackedItem;                                   // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReapersChest_Proxy.BP_ReapersChest_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
