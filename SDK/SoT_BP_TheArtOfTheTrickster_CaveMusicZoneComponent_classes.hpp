#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TheArtOfTheTrickster_CaveMusicZoneComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TheArtOfTheTrickster_CaveMusicZoneComponent.BP_TheArtOfTheTrickster_CaveMusicZoneComponent_C
// 0x0000 (0x0350 - 0x0350)
class UBP_TheArtOfTheTrickster_CaveMusicZoneComponent_C : public UMusicZoneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TheArtOfTheTrickster_CaveMusicZoneComponent.BP_TheArtOfTheTrickster_CaveMusicZoneComponent_C"));
		return ptr;
	}


	bool CanPlayForPlayer(class AActor* Player);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
