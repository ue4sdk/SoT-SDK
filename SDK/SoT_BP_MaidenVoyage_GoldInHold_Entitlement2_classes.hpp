#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_GoldInHold_Entitlement2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaidenVoyage_GoldInHold_Entitlement2.BP_MaidenVoyage_GoldInHold_Entitlement2_C
// 0x0000 (0x00D8 - 0x00D8)
class UBP_MaidenVoyage_GoldInHold_Entitlement2_C : public UTaleRankDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MaidenVoyage_GoldInHold_Entitlement2.BP_MaidenVoyage_GoldInHold_Entitlement2_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
