#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FaunaSpecies_Snake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FaunaSpecies_Snake.FaunaSpecies_Snake_C
// 0x0000 (0x0028 - 0x0028)
class UFaunaSpecies_Snake_C : public UFaunaSpecies
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass FaunaSpecies_Snake.FaunaSpecies_Snake_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
