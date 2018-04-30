#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_onboarding_intro_tavern_table_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C
// 0x0070 (0x04E0 - 0x0470)
class ABP_onboarding_intro_tavern_table_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0470(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
