#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GHLetter_ExclusionEntitlement_Campaign020_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GHLetter_ExclusionEntitlement_Campaign020.GHLetter_ExclusionEntitlement_Campaign020_C
// 0x0000 (0x00D8 - 0x00D8)
class UGHLetter_ExclusionEntitlement_Campaign020_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GHLetter_ExclusionEntitlement_Campaign020.GHLetter_ExclusionEntitlement_Campaign020_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
