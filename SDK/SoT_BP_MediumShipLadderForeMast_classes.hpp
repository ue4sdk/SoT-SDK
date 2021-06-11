#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipLadderForeMast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C
// 0x0028 (0x0648 - 0x0620)
class ABP_MediumShipLadderForeMast_C : public ALadder
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             OnTopSplinePositions;                                     // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             OffTopSplinePositions;                                    // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MediumShipLadderForeMast.BP_MediumShipLadderForeMast_C"));
		return ptr;
	}


	struct FDockableInfo GetDockableInfo();
	void Setup_Spline(class USplineComponent* Spline, TArray<struct FVector>* Positions);
	bool CanInteract(class AActor* InInteractor);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
