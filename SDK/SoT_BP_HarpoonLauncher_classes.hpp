#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0018 (0x0C18 - 0x0C00)
class ABP_HarpoonLauncher_C : public AHarpoonLauncher
{
public:
	class UStaticMeshComponent*                        CubeNotWalkable;                                          // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           MountCollision;                                           // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           BarrelCollision;                                          // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
