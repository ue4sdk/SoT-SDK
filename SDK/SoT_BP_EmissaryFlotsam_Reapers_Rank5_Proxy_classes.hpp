#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EmissaryFlotsam_Reapers_Rank5_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EmissaryFlotsam_Reapers_Rank5_Proxy.BP_EmissaryFlotsam_Reapers_Rank5_Proxy_C
// 0x0000 (0x0810 - 0x0810)
class ABP_EmissaryFlotsam_Reapers_Rank5_Proxy_C : public ABP_EmissaryFlotsam_Proxy_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EmissaryFlotsam_Reapers_Rank5_Proxy.BP_EmissaryFlotsam_Reapers_Rank5_Proxy_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
