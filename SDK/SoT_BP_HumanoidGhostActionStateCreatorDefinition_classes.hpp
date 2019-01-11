#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HumanoidGhostActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HumanoidGhostActionStateCreatorDefinition.BP_HumanoidGhostActionStateCreatorDefinition_C
// 0x0000 (0x07D8 - 0x07D8)
class ABP_HumanoidGhostActionStateCreatorDefinition_C : public ABP_HumanoidActionStateCreatorDefinition_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_HumanoidGhostActionStateCreatorDefinition.BP_HumanoidGhostActionStateCreatorDefinition_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
