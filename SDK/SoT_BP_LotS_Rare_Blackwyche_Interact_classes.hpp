#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LotS_Rare_Blackwyche_Interact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LotS_Rare_Blackwyche_Interact.BP_LotS_Rare_Blackwyche_Interact_C
// 0x0018 (0x0470 - 0x0458)
class ABP_LotS_Rare_Blackwyche_Interact_C : public AInteractableBase
{
public:
	class UNPCDialogComponent*                         InspectDialog;                                            // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      InteractionRegion;                                        // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LotS_Rare_Blackwyche_Interact.BP_LotS_Rare_Blackwyche_Interact_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
