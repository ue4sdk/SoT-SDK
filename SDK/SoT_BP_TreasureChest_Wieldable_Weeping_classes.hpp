#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Wieldable_Weeping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Wieldable_Weeping.BP_TreasureChest_Wieldable_Weeping_C
// 0x0030 (0x0818 - 0x07E8)
class ABP_TreasureChest_Wieldable_Weeping_C : public ABP_TreasureChest_C
{
public:
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides2;                             // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_long_sides;                              // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides2;                            // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_weepingchest_short_sides;                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWeepingComponent*                           Weeping;                                                  // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureChest_Wieldable_Weeping.BP_TreasureChest_Wieldable_Weeping_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
