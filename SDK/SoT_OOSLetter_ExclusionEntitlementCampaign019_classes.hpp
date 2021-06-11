#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OOSLetter_ExclusionEntitlementCampaign019_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OOSLetter_ExclusionEntitlementCampaign019.OOSLetter_ExclusionEntitlementCampaign019_C
// 0x0000 (0x00D8 - 0x00D8)
class UOOSLetter_ExclusionEntitlementCampaign019_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass OOSLetter_ExclusionEntitlementCampaign019.OOSLetter_ExclusionEntitlementCampaign019_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
