#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Amin_DeathOfFontaine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Amin_DeathOfFontaine.BP_Amin_DeathOfFontaine_C
// 0x0000 (0x07D1 - 0x07D1)
class UBP_Amin_DeathOfFontaine_C : public URevealable_NPCGenericSkeleton_AnimInstance_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Amin_DeathOfFontaine.BP_Amin_DeathOfFontaine_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
