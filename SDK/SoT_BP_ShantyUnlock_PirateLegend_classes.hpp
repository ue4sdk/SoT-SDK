#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShantyUnlock_PirateLegend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShantyUnlock_PirateLegend.BP_ShantyUnlock_PirateLegend_C
// 0x0000 (0x00D8 - 0x00D8)
class UBP_ShantyUnlock_PirateLegend_C : public UShantyUnlockDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShantyUnlock_PirateLegend.BP_ShantyUnlock_PirateLegend_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
