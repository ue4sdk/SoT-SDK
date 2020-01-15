#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_feature_crooks_hollow_design_adventure_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_feature_crooks_hollow_design_adventure.wsp_feature_crooks_hollow_design_adventure_C
// 0x0000 (0x0418 - 0x0418)
class Awsp_feature_crooks_hollow_design_adventure_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_feature_crooks_hollow_design_adventure.wsp_feature_crooks_hollow_design_adventure_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
