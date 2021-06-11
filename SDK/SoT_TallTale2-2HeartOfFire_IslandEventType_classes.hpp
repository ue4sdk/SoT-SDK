#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TallTale2-2HeartOfFire_IslandEventType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TallTale2-2HeartOfFire_IslandEventType.TallTale2-2HeartOfFire_IslandEventType_C
// 0x0000 (0x0048 - 0x0048)
class UTallTale2_2HeartOfFire_IslandEventType_C : public UTallTaleIslandEventType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TallTale2-2HeartOfFire_IslandEventType.TallTale2-2HeartOfFire_IslandEventType_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
