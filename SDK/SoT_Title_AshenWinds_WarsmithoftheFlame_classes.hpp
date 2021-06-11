#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_AshenWinds_WarsmithoftheFlame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_AshenWinds_WarsmithoftheFlame.Title_AshenWinds_WarsmithOfTheFlame_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_AshenWinds_WarsmithOfTheFlame_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_AshenWinds_WarsmithoftheFlame.Title_AshenWinds_WarsmithOfTheFlame_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
