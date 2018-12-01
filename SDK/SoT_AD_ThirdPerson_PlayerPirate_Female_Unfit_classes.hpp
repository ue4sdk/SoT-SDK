#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_ThirdPerson_PlayerPirate_Female_Unfit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Unfit.AD_ThirdPerson_PlayerPirate_Female_Unfit_C
// 0x0000 (0x07A8 - 0x07A8)
class UAD_ThirdPerson_PlayerPirate_Female_Unfit_C : public UAD_ThirdPerson_PlayerPirate_Female_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AD_ThirdPerson_PlayerPirate_Female_Unfit.AD_ThirdPerson_PlayerPirate_Female_Unfit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
