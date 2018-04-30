#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_GunPowderBarrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C
// 0x0030 (0x0818 - 0x07E8)
class ABP_MerchantCrate_GunpowderBarrel_C : public AStaticMerchantCrate
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x07E8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_GunPowderBarrel.BP_MerchantCrate_GunpowderBarrel_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
