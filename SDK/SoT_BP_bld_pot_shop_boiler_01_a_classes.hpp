#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_bld_pot_shop_boiler_01_a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_bld_pot_shop_boiler_01_a.BP_bld_pot_shop_boiler_01_a_C
// 0x0018 (0x04C0 - 0x04A8)
class ABP_bld_pot_shop_boiler_01_a_C : public AActor
{
public:
	class UParticleSystemComponent*                    vfx_magic_fire_pot;                                       // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bld_pot_shop_boiler_01_a;                                 // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_bld_pot_shop_boiler_01_a.BP_bld_pot_shop_boiler_01_a_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
