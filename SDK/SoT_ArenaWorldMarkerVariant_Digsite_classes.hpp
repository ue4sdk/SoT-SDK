#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ArenaWorldMarkerVariant_Digsite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArenaWorldMarkerVariant_Digsite.ArenaWorldMarkerVariant_Digsite_C
// 0x0000 (0x0028 - 0x0028)
class UArenaWorldMarkerVariant_Digsite_C : public UWorldMarkerVariant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ArenaWorldMarkerVariant_Digsite.ArenaWorldMarkerVariant_Digsite_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
