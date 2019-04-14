#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0020 (0x0578 - 0x0558)
class ABP_PuzzleVaultDoor_C : public ASlidingDoor
{
public:
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_falling_dust;                      // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_riddle_MediumFallingStone;                            // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_glow;                              // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_skeleton_fort_door_impact;                            // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
