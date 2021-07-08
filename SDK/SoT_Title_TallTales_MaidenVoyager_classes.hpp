#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Title_TallTales_MaidenVoyager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title_TallTales_MaidenVoyager.Title_TallTales_MaidenVoyager_C
// 0x0000 (0x00E0 - 0x00E0)
class UTitle_TallTales_MaidenVoyager_C : public UTitleDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Title_TallTales_MaidenVoyager.Title_TallTales_MaidenVoyager_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
