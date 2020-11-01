#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkeletalProxyIngestible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkeletalProxyIngestible.BP_SkeletalProxyIngestible_C
// 0x0018 (0x06B0 - 0x0698)
class ABP_SkeletalProxyIngestible_C : public ASkeletalMeshItemProxy
{
public:
	class UTrackedOwnerComponent*                      TrackedOwner;                                             // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkeletalProxyIngestible.BP_SkeletalProxyIngestible_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
