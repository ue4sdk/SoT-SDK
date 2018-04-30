#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_CannonballCrateProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_CannonballCrateProxy.BP_MerchantCrate_CannonballCrateProxy_C
// 0x0018 (0x08A8 - 0x0890)
class ABP_MerchantCrate_CannonballCrateProxy_C : public AMerchantCrateItemProxy
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0890(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_CannonballCrateProxy.BP_MerchantCrate_CannonballCrateProxy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
