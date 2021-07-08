#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SDLetter_ExclusionEntitlementCampaign018_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SDLetter_ExclusionEntitlementCampaign018.SDLetter_ExclusionEntitlementCampaign018_C
// 0x0000 (0x00D8 - 0x00D8)
class USDLetter_ExclusionEntitlementCampaign018_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SDLetter_ExclusionEntitlementCampaign018.SDLetter_ExclusionEntitlementCampaign018_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
