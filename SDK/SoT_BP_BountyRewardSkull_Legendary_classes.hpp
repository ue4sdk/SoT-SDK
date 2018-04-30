#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Legendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkull_Legendary.BP_BountyRewardSkull_Legendary_C
// 0x0010 (0x07D0 - 0x07C0)
class ABP_BountyRewardSkull_Legendary_C : public ABP_BountyRewardSkull_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BountyRewardSkull_Legendary.BP_BountyRewardSkull_Legendary_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
