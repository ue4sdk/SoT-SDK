#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_EndMusicZone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaidenVoyage_EndMusicZone.BP_MaidenVoyage_EndMusicZone_C
// 0x0010 (0x0470 - 0x0460)
class ABP_MaidenVoyage_EndMusicZone_C : public AActor
{
public:
	class UMusicZoneComponent*                         MusicZone;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MaidenVoyage_EndMusicZone.BP_MaidenVoyage_EndMusicZone_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
