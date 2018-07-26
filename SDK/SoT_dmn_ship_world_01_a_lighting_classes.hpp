#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_dmn_ship_world_01_a_lighting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dmn_ship_world_01_a_lighting.dmn_ship_world_01_a_lighting_C
// 0x0000 (0x0488 - 0x0488)
class Admn_ship_world_01_a_lighting_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dmn_ship_world_01_a_lighting.dmn_ship_world_01_a_lighting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
