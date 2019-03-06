#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_SD_SailorOfSilveredWaters_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_SD_SailorOfSilveredWaters.Title_SD_SailorOfSilveredWaters_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_SD_SailorOfSilveredWaters_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_SD_SailorOfSilveredWaters.Title_SD_SailorOfSilveredWaters_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
