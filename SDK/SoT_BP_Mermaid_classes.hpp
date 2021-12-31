#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mermaid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mermaid.BP_Mermaid_C
// 0x0028 (0x09C8 - 0x09A0)
class ABP_Mermaid_C : public AMermaid
{
public:
	UInteractableComponent*                            Interactable;                                             // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCapsuleComponent*                                 PlayerHits;                                               // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UAnimNotifyWwiseEmitterComponent*                  AnimNotifyWwiseEmitter;                                   // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USkeletalMeshMemoryConstraintComponent*            SkeletalMeshMemoryConstraint;                             // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UCapsuleComponent*                                 WorldHits;                                                // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Mermaid.BP_Mermaid_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
