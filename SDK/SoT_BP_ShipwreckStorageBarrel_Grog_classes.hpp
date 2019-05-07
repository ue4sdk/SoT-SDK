#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckStorageBarrel_Grog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckStorageBarrel_Grog.BP_ShipwreckStorageBarrel_Grog_C
// 0x0018 (0x04E0 - 0x04C8)
class ABP_ShipwreckStorageBarrel_Grog_C : public AInteractableBase
{
public:
	class UTankardRefillerComponent*                   TankardRefiller;                                          // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipwreckStorageBarrel_Grog.BP_ShipwreckStorageBarrel_Grog_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
