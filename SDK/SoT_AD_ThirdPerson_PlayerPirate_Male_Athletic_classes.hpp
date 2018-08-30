#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_PlayerPirate_Male_Athletic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Athletic.AD_ThirdPerson_PlayerPirate_Male_Athletic_C
// 0x0000 (0x06E0 - 0x06E0)
class UAD_ThirdPerson_PlayerPirate_Male_Athletic_C : public UAD_ThirdPerson_PlayerPirate_Male_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Male_Athletic.AD_ThirdPerson_PlayerPirate_Male_Athletic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
