#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0018 (0x0B88 - 0x0B70)
class ABP_SkeletonAIController_C : public AAthenaAICharacterController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaAIAbilityHandlerComponent*            AthenaAIAbilityHandler;                                   // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AWieldableItem*                              Item;                                                     // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkeletonAIController.BP_SkeletonAIController_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnPossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_BP_SkeletonAIController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
