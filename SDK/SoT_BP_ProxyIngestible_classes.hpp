#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0018 (0x0818 - 0x0800)
class ABP_ProxyIngestible_C : public AStaticMeshFloatingItemProxy
{
public:
	class UTrackedOwnerComponent*                      TrackedOwner;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
