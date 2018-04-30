#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkullItemInfo_Legendary+_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C
// 0x0010 (0x0588 - 0x0578)
class ABP_BountyRewardSkullItemInfo_Legendary__C : public ABootyItemInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0578(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BountyRewardSkullItemInfo_Legendary+.BP_BountyRewardSkullItemInfo_Legendary+_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BountyRewardSkullItemInfo_Legendary_(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
