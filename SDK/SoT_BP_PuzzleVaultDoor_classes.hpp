#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PuzzleVaultDoor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PuzzleVaultDoor.BP_PuzzleVaultDoor_C
// 0x0018 (0x05A8 - 0x0590)
class ABP_PuzzleVaultDoor_C : public ASlidingDoor
{
public:
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_impact1;                           // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_impact;                            // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_falling_dust;                      // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PuzzleVaultDoor.BP_PuzzleVaultDoor_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
