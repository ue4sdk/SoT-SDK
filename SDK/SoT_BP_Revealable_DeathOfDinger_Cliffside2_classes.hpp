#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Revealable_DeathOfDinger_Cliffside2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Revealable_DeathOfDinger_Cliffside2.BP_Revealable_DeathOfDinger_Cliffside2_C
// 0x0048 (0x0518 - 0x04D0)
class ABP_Revealable_DeathOfDinger_Cliffside2_C : public ABP_Revealable_BaseMesh_C
{
public:
	class UStaticMeshComponent*                        Skelly2Shroud;                                            // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Blunderbuss2;                                             // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeleton2;                                                // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Skelly1Shroud;                                            // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Blunderbuss1;                                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeleton1;                                                // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DingerShroud2;                                            // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        DingerShroud;                                             // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Dinger;                                                   // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Revealable_DeathOfDinger_Cliffside2.BP_Revealable_DeathOfDinger_Cliffside2_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
