#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_FrontendPirate_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FrontendPirate_Large.AD_FrontendPirate_Large_C
// 0x0000 (0x0038 - 0x0038)
class UAD_FrontendPirate_Large_C : public UAD_FrontendPirate_Default_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AD_FrontendPirate_Large.AD_FrontendPirate_Large_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
