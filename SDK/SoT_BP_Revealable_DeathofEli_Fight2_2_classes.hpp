#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Revealable_DeathofEli_Fight2_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Revealable_DeathofEli_Fight2_2.BP_Revealable_DeathofEli_Fight2_1_C
// 0x0038 (0x0508 - 0x04D0)
class ABP_Revealable_DeathofEli_Fight2_1_C : public ABP_Revealable_BaseMesh_C
{
public:
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GraymarrowShroud;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        GraymarrowSword;                                          // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Graymarrow;                                               // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        EliShroud;                                                // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        EliSword;                                                 // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Eli;                                                      // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Revealable_DeathofEli_Fight2_2.BP_Revealable_DeathofEli_Fight2_1_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
