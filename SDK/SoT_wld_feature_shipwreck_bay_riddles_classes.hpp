#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wld_feature_shipwreck_bay_riddles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wld_feature_shipwreck_bay_riddles.wld_feature_shipwreck_bay_riddles_C
// 0x0000 (0x03D8 - 0x03D8)
class Awld_feature_shipwreck_bay_riddles_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wld_feature_shipwreck_bay_riddles.wld_feature_shipwreck_bay_riddles_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
