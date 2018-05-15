#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_FrontendPirate_FemaleLarge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FrontendPirate_FemaleLarge.AD_FrontendPirate_FemaleLarge_C
// 0x0000 (0x0038 - 0x0038)
class UAD_FrontendPirate_FemaleLarge_C : public UAD_FrontendPirate_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AD_FrontendPirate_FemaleLarge.AD_FrontendPirate_FemaleLarge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
