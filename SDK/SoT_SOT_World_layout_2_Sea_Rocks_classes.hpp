#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SOT_World_layout_2_Sea_Rocks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SOT_World_layout_2_Sea_Rocks.SOT_World_layout_2_Sea_Rocks_C
// 0x0000 (0x03D8 - 0x03D8)
class ASOT_World_layout_2_Sea_Rocks_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SOT_World_layout_2_Sea_Rocks.SOT_World_layout_2_Sea_Rocks_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
