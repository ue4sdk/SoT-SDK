#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReapersBounty_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReapersBounty_Proxy.BP_ReapersBounty_Proxy_C
// 0x0020 (0x0870 - 0x0850)
class ABP_ReapersBounty_Proxy_C : public ABP_TreasureChestProxy_Static_C
{
public:
	class UWorldMarkerOnDigPositionComponent*          WorldMarkerOnDigPosition;                                 // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_reapers_chest_smoke;                                  // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorldMarkerOnSpawnPositionComponent*        WorldMarkerOnSpawnPosition;                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReapersMarkTrackedItemComponent*            ReapersMarkTrackedItem;                                   // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReapersBounty_Proxy.BP_ReapersBounty_Proxy_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
