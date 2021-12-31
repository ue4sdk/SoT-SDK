#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_VolcanoRockMedium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_VolcanoRockMedium.BP_Projectile_VolcanoRockMedium_C
// 0x0018 (0x0670 - 0x0658)
class ABP_Projectile_VolcanoRockMedium_C : public AVolcanicRock
{
public:
	URotatingAudioSourceComponent*                     RotatingAudioSource;                                      // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              RockMesh;                                                 // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USphereComponent*                                  Collision;                                                // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_VolcanoRockMedium.BP_Projectile_VolcanoRockMedium_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
