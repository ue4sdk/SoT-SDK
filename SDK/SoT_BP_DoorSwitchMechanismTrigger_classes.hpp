#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DoorSwitchMechanismTrigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DoorSwitchMechanismTrigger.BP_DoorSwitchMechanismTrigger_C
// 0x0010 (0x0558 - 0x0548)
class ABP_DoorSwitchMechanismTrigger_C : public ASwitchMechanismTrigger
{
public:
	class UArrowComponent*                             Arrow;                                                    // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractableComponent*                      Interactable;                                             // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DoorSwitchMechanismTrigger.BP_DoorSwitchMechanismTrigger_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
