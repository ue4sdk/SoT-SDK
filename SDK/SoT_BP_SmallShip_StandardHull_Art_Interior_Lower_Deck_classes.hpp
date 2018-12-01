#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShip_StandardHull_Art_Interior_Lower_Deck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShip_StandardHull_Art_Interior_Lower_Deck.BP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C
// 0x0020 (0x04B0 - 0x0490)
class ABP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C : public AActor
{
public:
	class UStaticMeshComponent*                        shp_small_brig_01_a;                                      // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_lower_deck_rope_01_a;                           // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_lower_deck_01_a;                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SmallShip_StandardHull_Art_Interior_Lower_Deck.BP_SmallShip_StandardHull_Art_Interior_Lower_Deck_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
