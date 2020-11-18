#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_feature_island_01_f_sea_rocks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_feature_island_01_f_sea_rocks.wsp_feature_island_01_f_sea_rocks_C
// 0x0000 (0x0468 - 0x0468)
class Awsp_feature_island_01_f_sea_rocks_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_feature_island_01_f_sea_rocks.wsp_feature_island_01_f_sea_rocks_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
