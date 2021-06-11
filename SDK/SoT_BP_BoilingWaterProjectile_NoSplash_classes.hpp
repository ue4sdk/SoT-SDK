#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BoilingWaterProjectile_NoSplash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BoilingWaterProjectile_NoSplash.BP_BoilingWaterProjectile_NoSplash_C
// 0x0000 (0x0770 - 0x0770)
class ABP_BoilingWaterProjectile_NoSplash_C : public ABP_BoilingWaterProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BoilingWaterProjectile_NoSplash.BP_BoilingWaterProjectile_NoSplash_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
