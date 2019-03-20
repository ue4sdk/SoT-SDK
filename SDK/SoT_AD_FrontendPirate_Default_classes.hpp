#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_FrontendPirate_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FrontendPirate_Default.AD_FrontendPirate_Default_C
// 0x0010 (0x0038 - 0x0028)
class UAD_FrontendPirate_Default_C : public UAnimationData
{
public:
	struct FADS_FrontendPiratePoses                    PiratePoses;                                              // 0x0028(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AD_FrontendPirate_Default.AD_FrontendPirate_Default_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
