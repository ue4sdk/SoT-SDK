#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_ChickenCrateProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_ChickenCrateProxy.BP_MerchantCrate_ChickenCrateProxy_C
// 0x0010 (0x08A0 - 0x0890)
class ABP_MerchantCrate_ChickenCrateProxy_C : public AMerchantCrateItemProxy
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0890(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_ChickenCrateProxy.BP_MerchantCrate_ChickenCrateProxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
