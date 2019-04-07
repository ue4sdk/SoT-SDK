#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WildRose_RookeEncounter_MusicZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WildRose_RookeEncounter_MusicZone.BP_WildRose_RookeEncounter_MusicZone_C
// 0x0010 (0x04B0 - 0x04A0)
class ABP_WildRose_RookeEncounter_MusicZone_C : public AActor
{
public:
	class UMusicZoneComponent*                         AnticipationMusicZone;                                    // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAISpawnerMusicZoneComponent*                AISpawnerMusicZone;                                       // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WildRose_RookeEncounter_MusicZone.BP_WildRose_RookeEncounter_MusicZone_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
