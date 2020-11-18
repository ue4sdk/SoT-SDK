#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LotS_Rare_Battletoads_Interact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LotS_Rare_Battletoads_Interact.BP_LotS_Rare_Battletoads_Interact_C
// 0x0018 (0x04B0 - 0x0498)
class ABP_LotS_Rare_Battletoads_Interact_C : public AInteractableBase
{
public:
	class UNPCDialogComponent*                         InspectDialog;                                            // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      InteractionRegion;                                        // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LotS_Rare_Battletoads_Interact.BP_LotS_Rare_Battletoads_Interact_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
