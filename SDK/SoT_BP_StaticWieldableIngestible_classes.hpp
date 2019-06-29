#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StaticWieldableIngestible_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StaticWieldableIngestible.BP_StaticWieldableIngestible_C
// 0x0028 (0x08A0 - 0x0878)
class ABP_StaticWieldableIngestible_C : public AStaticWieldableIngestible
{
public:
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPottableComponent*                          Pottable;                                                 // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractable;                                    // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldable;                                          // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPickupableComponent*                        Pickupable;                                               // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StaticWieldableIngestible.BP_StaticWieldableIngestible_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
