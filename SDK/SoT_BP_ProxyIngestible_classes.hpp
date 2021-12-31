#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ProxyIngestible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProxyIngestible.BP_ProxyIngestible_C
// 0x0020 (0x07B0 - 0x0790)
class ABP_ProxyIngestible_C : public AStaticMeshFloatingItemProxy
{
public:
	UConfigurableBuryableItemComponent*                ConfigurableBuryableItem;                                 // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UTrackedOwnerComponent*                            TrackedOwner;                                             // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMaterialManipulationComponent*                    MaterialManipulation;                                     // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UInteractableComponent*                            Interactable;                                             // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ProxyIngestible.BP_ProxyIngestible_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
