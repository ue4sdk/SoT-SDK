#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SOT_World_layout_Rome_Design_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SOT_World_layout_Rome_Design.SOT_World_layout_Rome_Design_C
// 0x0000 (0x0430 - 0x0430)
class ASOT_World_layout_Rome_Design_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass SOT_World_layout_Rome_Design.SOT_World_layout_Rome_Design_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
