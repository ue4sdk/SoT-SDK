#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_ForsakenShores_LegendaryCargoRunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_ForsakenShores_LegendaryCargoRunner.Title_ForsakenShores_LegendaryCargoRunner_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_ForsakenShores_LegendaryCargoRunner_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_ForsakenShores_LegendaryCargoRunner.Title_ForsakenShores_LegendaryCargoRunner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
