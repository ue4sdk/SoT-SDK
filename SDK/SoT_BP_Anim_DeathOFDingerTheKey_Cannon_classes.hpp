#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_DeathOFDingerTheKey_Cannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_DeathOFDingerTheKey_Cannon.BP_Anim_DeathOFDingerTheKey_Cannon_C
// 0x0000 (0x0831 - 0x0831)
class UBP_Anim_DeathOFDingerTheKey_Cannon_C : public URevealable_cannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_DeathOFDingerTheKey_Cannon.BP_Anim_DeathOFDingerTheKey_Cannon_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
