#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Shores_Shroudbreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TT_Shores_Shroudbreaker.BP_TT_Shores_Shroudbreaker_C
// 0x0010 (0x04E8 - 0x04D8)
class ABP_TT_Shores_Shroudbreaker_C : public ABP_TT_Shores_CutSceneGhost_C
{
public:
	class UStaticMeshComponent*                        shroud;                                                   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      gmp_tal_shroudbreaker_complete_01_a;                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TT_Shores_Shroudbreaker.BP_TT_Shores_Shroudbreaker_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
