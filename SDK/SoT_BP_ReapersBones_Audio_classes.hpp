#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ReapersBones_Audio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReapersBones_Audio.BP_ReapersBones_Audio_C
// 0x0028 (0x0488 - 0x0460)
class ABP_ReapersBones_Audio_C : public AActor
{
public:
	class UAudioPortalComponent*                       AudioPortal;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceComponent*                        AudioSpace;                                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TavernFire_Play;                                          // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 TavernFire_Stop;                                          // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ReapersBones_Audio.BP_ReapersBones_Audio_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
