#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShip_ServingHatch_Right_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C
// 0x0018 (0x0600 - 0x05E8)
class ABP_MediumShip_ServingHatch_Right_C : public ASwitchMechanismTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_mid_serving_hatch_R_01_a;                             // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MediumShip_ServingHatch_Right.BP_MediumShip_ServingHatch_Right_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void OnAnimationStarted();
	void OnAnimationCompleted();
	void ExecuteUbergraph_BP_MediumShip_ServingHatch_Right(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
