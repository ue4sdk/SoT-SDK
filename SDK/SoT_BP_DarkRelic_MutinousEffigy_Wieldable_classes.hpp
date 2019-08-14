#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DarkRelic_MutinousEffigy_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DarkRelic_MutinousEffigy_Wieldable.BP_DarkRelic_MutinousEffigy_Wieldable_C
// 0x0000 (0x07F0 - 0x07F0)
class ABP_DarkRelic_MutinousEffigy_Wieldable_C : public ABP_BountyRewardSkull_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DarkRelic_MutinousEffigy_Wieldable.BP_DarkRelic_MutinousEffigy_Wieldable_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
