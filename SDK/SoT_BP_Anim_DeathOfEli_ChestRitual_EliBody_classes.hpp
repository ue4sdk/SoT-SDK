#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_DeathOfEli_ChestRitual_EliBody_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_DeathOfEli_ChestRitual_EliBody.BP_Anim_DeathOfEli_ChestRitual_EliBody_C
// 0x0000 (0x07D1 - 0x07D1)
class UBP_Anim_DeathOfEli_ChestRitual_EliBody_C : public URevealable_NPCGenericSkeleton_AnimInstance_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_DeathOfEli_ChestRitual_EliBody.BP_Anim_DeathOfEli_ChestRitual_EliBody_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
