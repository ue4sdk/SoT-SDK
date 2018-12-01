#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FaunaSpecies_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FaunaSpecies_Chicken.FaunaSpecies_Chicken_C
// 0x0000 (0x0028 - 0x0028)
class UFaunaSpecies_Chicken_C : public UFaunaSpecies
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass FaunaSpecies_Chicken.FaunaSpecies_Chicken_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
