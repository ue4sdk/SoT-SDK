#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HumanoidActionStateCreatorDefinition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HumanoidActionStateCreatorDefinition.BP_HumanoidActionStateCreatorDefinition_C
// 0x0008 (0x0728 - 0x0720)
class ABP_HumanoidActionStateCreatorDefinition_C : public AHumanoidActionStateCreatorDefinition
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0720(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HumanoidActionStateCreatorDefinition.BP_HumanoidActionStateCreatorDefinition_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
