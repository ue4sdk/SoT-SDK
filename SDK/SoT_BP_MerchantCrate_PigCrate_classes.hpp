#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_PigCrate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_PigCrate.BP_MerchantCrate_PigCrate_C
// 0x0010 (0x07F8 - 0x07E8)
class ABP_MerchantCrate_PigCrate_C : public AStaticMerchantCrate
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_PigCrate.BP_MerchantCrate_PigCrate_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
