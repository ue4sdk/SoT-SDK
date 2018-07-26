#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_wld_Garden_pebbles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wld_Garden_pebbles.BP_wld_Garden_pebbles_C
// 0x0000 (0x0525 - 0x0525)
class ABP_wld_Garden_pebbles_C : public ABP_Placement_Garden_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_wld_Garden_pebbles.BP_wld_Garden_pebbles_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
