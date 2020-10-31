#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CompanyOnboardingStarter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C
// 0x0000 (0x0060 - 0x0060)
class UBP_CompanyOnboardingStarter_C : public UCompanyOnboardingStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C"));
		return ptr;
	}


	bool HasPrerequisites();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
