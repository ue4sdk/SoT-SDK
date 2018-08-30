#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipLadderMainMast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C
// 0x0028 (0x06A8 - 0x0680)
class ABP_SmallShipLadderMainMast_C : public ALadder
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OnTopSplinePositions;                                     // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             OffTopSplinePositions;                                    // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmallShipLadderMainMast.BP_SmallShipLadderMainMast_C");
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions);
	bool CanInteract(class AActor** InInteractor);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
