#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MALetter_ExclusionEntitlement_Campaign029a_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MALetter_ExclusionEntitlement_Campaign029a.MALetter_ExclusionEntitlement_Campaign029a_C
// 0x0000 (0x00D8 - 0x00D8)
class UMALetter_ExclusionEntitlement_Campaign029a_C : public UEntitlementDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MALetter_ExclusionEntitlement_Campaign029a.MALetter_ExclusionEntitlement_Campaign029a_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
