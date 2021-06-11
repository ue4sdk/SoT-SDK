#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RowboatHarpoonLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RowboatHarpoonLauncher.BP_RowboatHarpoonLauncher_C
// 0x0020 (0x0BA0 - 0x0B80)
class ABP_RowboatHarpoonLauncher_C : public AHarpoonLauncher
{
public:
	class USphereComponent*                            BarrelNoseCollision;                                      // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CubeNotWalkable;                                          // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           MountCollision;                                           // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           BarrelCollision;                                          // 0x0B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RowboatHarpoonLauncher.BP_RowboatHarpoonLauncher_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
