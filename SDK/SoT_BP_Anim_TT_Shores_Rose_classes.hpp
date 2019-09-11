#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Shores_Rose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Rose.BP_Anim_TT_Shores_Rose_C
// 0x0000 (0x05B0 - 0x05B0)
class UBP_Anim_TT_Shores_Rose_C : public UBP_Anim_TT_Shores_Base_Human_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_TT_Shores_Rose.BP_Anim_TT_Shores_Rose_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
