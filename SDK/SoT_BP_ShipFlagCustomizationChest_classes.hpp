#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipFlagCustomizationChest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipFlagCustomizationChest.BP_ShipFlagCustomizationChest_C
// 0x0008 (0x0598 - 0x0590)
class ABP_ShipFlagCustomizationChest_C : public AShipFlagCustomizationChest
{
public:
	UHitRegSnapshotRedirectImpactToReplicatedMovementAttachParentComponent* HitRegSnapshotRedirectImpactToReplicatedMovementAttachParent;// 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipFlagCustomizationChest.BP_ShipFlagCustomizationChest_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
