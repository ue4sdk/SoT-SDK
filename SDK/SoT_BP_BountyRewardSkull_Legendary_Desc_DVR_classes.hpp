#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BountyRewardSkull_Legendary_Desc_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BountyRewardSkull_Legendary_Desc_DVR.BP_BountyRewardSkull_Legendary_Desc_DVR_C
// 0x0000 (0x0120 - 0x0120)
class UBP_BountyRewardSkull_Legendary_Desc_DVR_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BountyRewardSkull_Legendary_Desc_DVR.BP_BountyRewardSkull_Legendary_Desc_DVR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
