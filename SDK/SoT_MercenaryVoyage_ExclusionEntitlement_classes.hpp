#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MercenaryVoyage_ExclusionEntitlement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MercenaryVoyage_ExclusionEntitlement.MercenaryVoyage_ExclusionEntitlement_C
// 0x0000 (0x00D8 - 0x00D8)
class UMercenaryVoyage_ExclusionEntitlement_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MercenaryVoyage_ExclusionEntitlement.MercenaryVoyage_ExclusionEntitlement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
