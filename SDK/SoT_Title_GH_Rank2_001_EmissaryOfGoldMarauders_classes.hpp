#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_GH_Rank2_001_EmissaryOfGoldMarauders_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_GH_Rank2_001_EmissaryOfGoldMarauders.Title_GH_Rank2_001_EmissaryOfGoldMarauders_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_GH_Rank2_001_EmissaryOfGoldMarauders_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_GH_Rank2_001_EmissaryOfGoldMarauders.Title_GH_Rank2_001_EmissaryOfGoldMarauders_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
