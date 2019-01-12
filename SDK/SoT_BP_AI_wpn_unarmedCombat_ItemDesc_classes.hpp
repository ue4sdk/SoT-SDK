#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AI_wpn_unarmedCombat_ItemDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AI_wpn_unarmedCombat_ItemDesc.BP_AI_wpn_unarmedCombat_ItemDesc_C
// 0x0000 (0x0120 - 0x0120)
class UBP_AI_wpn_unarmedCombat_ItemDesc_C : public UItemWithoutIconsDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AI_wpn_unarmedCombat_ItemDesc.BP_AI_wpn_unarmedCombat_ItemDesc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
