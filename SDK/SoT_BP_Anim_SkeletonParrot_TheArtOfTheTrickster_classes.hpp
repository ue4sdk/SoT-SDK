#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_SkeletonParrot_TheArtOfTheTrickster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_SkeletonParrot_TheArtOfTheTrickster.BP_Anim_SkeletonParrot_TheArtOfTheTrickster_C
// 0x0000 (0x1454 - 0x1454)
class UBP_Anim_SkeletonParrot_TheArtOfTheTrickster_C : public UBP_Anim_NPCParrot_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_SkeletonParrot_TheArtOfTheTrickster.BP_Anim_SkeletonParrot_TheArtOfTheTrickster_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
