#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CannonProjectileHittingPlayers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CannonProjectileHittingPlayers.CannonProjectileHittingPlayers_C
// 0x0000 (0x0030 - 0x0030)
class UCannonProjectileHittingPlayers_C : public UConditionalStatsTriggerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CannonProjectileHittingPlayers.CannonProjectileHittingPlayers_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
