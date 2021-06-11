#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CapstanArm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C
// 0x0010 (0x05B0 - 0x05A0)
class ABP_CapstanArm_C : public ACapstanArm
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LookAtPos;                                                // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CapstanArm.BP_CapstanArm_C"));
		return ptr;
	}


	struct FVector GetLookAtPosBasisSpace();
	struct FVector GetFrontFacingVector();
	bool DoesRequireFacingFront();
	struct FDockableInfo GetDockableInfo();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	struct FVector GetLookAtPos();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
