#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkeletonAIController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkeletonAIController.BP_SkeletonAIController_C
// 0x0018 (0x0B30 - 0x0B18)
class ABP_SkeletonAIController_C : public AAthenaAICharacterController
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UAthenaAIAbilityHandlerComponent*                  AthenaAIAbilityHandler;                                   // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	AWieldableItem*                                    Item;                                                     // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkeletonAIController.BP_SkeletonAIController_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnPossess(APawn* PossessedPawn);
	void ExecuteUbergraph_BP_SkeletonAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
