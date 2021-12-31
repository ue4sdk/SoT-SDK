#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HarpoonLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HarpoonLauncher.BP_HarpoonLauncher_C
// 0x0018 (0x0B68 - 0x0B50)
class ABP_HarpoonLauncher_C : public AHarpoonLauncher
{
public:
	UStaticMeshComponent*                              CubeNotWalkable;                                          // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCapsuleComponent*                                 MountCollision;                                           // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCapsuleComponent*                                 BarrelCollision;                                          // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HarpoonLauncher.BP_HarpoonLauncher_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
