#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PlayerGenderInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerGenderInterface.PlayerGenderInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPlayerGenderInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerGenderInterface.PlayerGenderInterface_C"));
		return ptr;
	}


	void CheckIsFemale(bool* IsFemale);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
