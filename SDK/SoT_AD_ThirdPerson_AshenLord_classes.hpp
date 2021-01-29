#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_AshenLord_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_AshenLord.AD_ThirdPerson_AshenLord_C
// 0x0000 (0x0740 - 0x0740)
class UAD_ThirdPerson_AshenLord_C : public UAD_ThirdPerson_Skeleton_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AD_ThirdPerson_AshenLord.AD_ThirdPerson_AshenLord_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
