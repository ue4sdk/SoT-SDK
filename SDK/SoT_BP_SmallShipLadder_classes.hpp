#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipLadder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipLadder.BP_SmallShipLadder_C
// 0x0028 (0x05E8 - 0x05C0)
class ABP_SmallShipLadder_C : public ALadder
{
public:
	UInteractableComponent*                            Interactable;                                             // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<FVector>                                    OffTopSplineComponentPositions;                           // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<FVector>                                    OnTopSplineComponentPositions;                            // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShipLadder.BP_SmallShipLadder_C"));
		return ptr;
	}


	FDockableInfo GetDockableInfo();
	void Setup_Spline(USplineComponent* Spline, TArray<FVector>* Positions);
	bool CanInteract(AActor* InInteractor);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
