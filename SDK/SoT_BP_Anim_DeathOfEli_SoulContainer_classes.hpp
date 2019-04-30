#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_DeathOfEli_SoulContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_DeathOfEli_SoulContainer.BP_Anim_DeathOfEli_SoulContainer_C
// 0x0000 (0x07D1 - 0x07D1)
class UBP_Anim_DeathOfEli_SoulContainer_C : public URevealable_Chest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_DeathOfEli_SoulContainer.BP_Anim_DeathOfEli_SoulContainer_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
