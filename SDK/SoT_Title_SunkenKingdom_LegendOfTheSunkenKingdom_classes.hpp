#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_SunkenKingdom_LegendOfTheSunkenKingdom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_SunkenKingdom_LegendOfTheSunkenKingdom.Title_SunkenKingdom_LegendOfTheSunkenKingdom_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_SunkenKingdom_LegendOfTheSunkenKingdom_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_SunkenKingdom_LegendOfTheSunkenKingdom.Title_SunkenKingdom_LegendOfTheSunkenKingdom_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
