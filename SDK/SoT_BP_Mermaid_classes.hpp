#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x0028 (0x0988 - 0x0960)
class ABP_Mermaid_C : public AMermaid
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           PlayerHits;                                               // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           WorldHits;                                                // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mermaid.BP_Mermaid_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
