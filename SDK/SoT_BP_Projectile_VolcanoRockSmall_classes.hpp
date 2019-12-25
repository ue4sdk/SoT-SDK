#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_VolcanoRockSmall_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_VolcanoRockSmall.BP_Projectile_VolcanoRockSmall_C
// 0x0018 (0x0628 - 0x0610)
class ABP_Projectile_VolcanoRockSmall_C : public AVolcanicRock
{
public:
	class URotatingAudioSourceComponent*               RotatingAudioSource;                                      // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RockMesh;                                                 // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Collision;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_VolcanoRockSmall.BP_Projectile_VolcanoRockSmall_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
