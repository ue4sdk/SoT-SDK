#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TeleportStatueTributePeak2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TeleportStatueTributePeak2.BP_TeleportStatueTributePeak2_C
// 0x0008 (0x05E0 - 0x05D8)
class ABP_TeleportStatueTributePeak2_C : public ATeleportStatue
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TeleportStatueTributePeak2.BP_TeleportStatueTributePeak2_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
