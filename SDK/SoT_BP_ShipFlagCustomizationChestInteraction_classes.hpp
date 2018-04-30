#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipFlagCustomizationChestInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipFlagCustomizationChestInteraction.BP_ShipFlagCustomizationChestInteraction_C
// 0x0008 (0x0598 - 0x0590)
class ABP_ShipFlagCustomizationChestInteraction_C : public AShipCustomizationChestInteraction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0590(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipFlagCustomizationChestInteraction.BP_ShipFlagCustomizationChestInteraction_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
