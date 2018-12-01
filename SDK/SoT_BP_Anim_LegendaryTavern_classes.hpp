#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_LegendaryTavern_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_LegendaryTavern.BP_Anim_LegendaryTavern_C
// 0x0000 (0x14AD - 0x14AD)
class UBP_Anim_LegendaryTavern_C : public UBP_Anim_NPC_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass BP_Anim_LegendaryTavern.BP_Anim_LegendaryTavern_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
