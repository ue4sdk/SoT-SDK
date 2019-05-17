#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Shipwright_RevengeOfThemorningstar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Shipwright_RevengeOfThemorningstar.BP_Anim_Shipwright_RevengeOfThemorningstar_C
// 0x0000 (0x18A5 - 0x18A5)
class UBP_Anim_Shipwright_RevengeOfThemorningstar_C : public UBP_Anim_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_Shipwright_RevengeOfThemorningstar.BP_Anim_Shipwright_RevengeOfThemorningstar_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
