#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantAllianceEmissaryEntitlementDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantAllianceEmissaryEntitlementDesc.BP_MerchantAllianceEmissaryEntitlementDesc_C
// 0x0000 (0x00D8 - 0x00D8)
class UBP_MerchantAllianceEmissaryEntitlementDesc_C : public UBP_EmissaryEntitlementDesc_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MerchantAllianceEmissaryEntitlementDesc.BP_MerchantAllianceEmissaryEntitlementDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
