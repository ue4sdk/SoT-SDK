#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GildedVoyage_ExclusionEntitlement_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GildedVoyage_ExclusionEntitlement_02.GildedVoyage_ExclusionEntitlement_02_C
// 0x0000 (0x00D8 - 0x00D8)
class UGildedVoyage_ExclusionEntitlement_02_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GildedVoyage_ExclusionEntitlement_02.GildedVoyage_ExclusionEntitlement_02_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
