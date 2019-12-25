#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_outpost_2_terrainLOD1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bsp_outpost_2_terrainLOD1.bsp_outpost_2_terrainLOD1_C
// 0x0000 (0x0418 - 0x0418)
class Absp_outpost_2_terrainLOD1_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass bsp_outpost_2_terrainLOD1.bsp_outpost_2_terrainLOD1_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
