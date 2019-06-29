#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_red_ladder_12_steps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_red_ladder_12_steps.BP_red_ladder_12_steps_C
// 0x0000 (0x0718 - 0x0718)
class ABP_red_ladder_12_steps_C : public ABP_CustomisableLadder_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_red_ladder_12_steps.BP_red_ladder_12_steps_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
