#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CS_VolcanoRock_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_VolcanoRock_Large.CS_VolcanoRock_Large_C
// 0x0000 (0x0140 - 0x0140)
class UCS_VolcanoRock_Large_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CS_VolcanoRock_Large.CS_VolcanoRock_Large_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
