#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign017_DarkRelics_KrakenLeg_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Campaign017_DarkRelics_KrakenLeg.BP_Campaign017_DarkRelics_KrakenLeg_C
// 0x0000 (0x0830 - 0x0830)
class ABP_Campaign017_DarkRelics_KrakenLeg_C : public ABP_BountyRewardSkull_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Campaign017_DarkRelics_KrakenLeg.BP_Campaign017_DarkRelics_KrakenLeg_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
