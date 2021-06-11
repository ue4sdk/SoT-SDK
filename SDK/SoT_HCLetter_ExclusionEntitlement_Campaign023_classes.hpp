#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_HCLetter_ExclusionEntitlement_Campaign023_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HCLetter_ExclusionEntitlement_Campaign023.HCLetter_ExclusionEntitlement_Campaign023_C
// 0x0000 (0x00D8 - 0x00D8)
class UHCLetter_ExclusionEntitlement_Campaign023_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass HCLetter_ExclusionEntitlement_Campaign023.HCLetter_ExclusionEntitlement_Campaign023_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
