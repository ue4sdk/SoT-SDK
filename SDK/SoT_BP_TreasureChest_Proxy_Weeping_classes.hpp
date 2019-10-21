#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Proxy_Weeping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Weeping.BP_TreasureChest_Proxy_Weeping_C
// 0x0048 (0x0928 - 0x08E0)
class ABP_TreasureChest_Proxy_Weeping_C : public ABP_TreasureChestProxy_C
{
public:
	class UItemProxyShipTrackerComponent*              ItemProxyShipTracker;                                     // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             puddle_decal;                                             // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_mouth_3;                                              // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_mouth_2;                                              // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides2;                             // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides;                              // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides2;                            // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides;                             // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeepingComponent*                           Weeping;                                                  // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureChest_Proxy_Weeping.BP_TreasureChest_Proxy_Weeping_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
