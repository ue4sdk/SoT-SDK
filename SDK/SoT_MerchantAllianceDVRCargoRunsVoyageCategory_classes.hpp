#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MerchantAllianceDVRCargoRunsVoyageCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MerchantAllianceDVRCargoRunsVoyageCategory.MerchantAllianceDVRCargoRunsVoyageCategory_C
// 0x0000 (0x0078 - 0x0078)
class UMerchantAllianceDVRCargoRunsVoyageCategory_C : public UVoyageCategory_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MerchantAllianceDVRCargoRunsVoyageCategory.MerchantAllianceDVRCargoRunsVoyageCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
