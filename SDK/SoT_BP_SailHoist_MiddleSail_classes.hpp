#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SailHoist_MiddleSail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SailHoist_MiddleSail.BP_SailHoist_MiddleSail_C
// 0x0000 (0x0850 - 0x0850)
class ABP_SailHoist_MiddleSail_C : public ABP_SailHoist_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SailHoist_MiddleSail.BP_SailHoist_MiddleSail_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
