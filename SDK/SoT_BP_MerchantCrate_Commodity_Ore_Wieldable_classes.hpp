#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_Commodity_Ore_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_Commodity_Ore_Wieldable.BP_MerchantCrate_Commodity_Ore_Wieldable_C
// 0x0000 (0x0808 - 0x0808)
class ABP_MerchantCrate_Commodity_Ore_Wieldable_C : public AMerchantCrate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_Commodity_Ore_Wieldable.BP_MerchantCrate_Commodity_Ore_Wieldable_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
