#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_StandardHull_Art_Interior_Map_Deck_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_StandardHull_Art_Interior_Map_Deck.BP_LargeShip_StandardHull_Art_Interior_Map_Deck_C
// 0x0358 (0x07C8 - 0x0470)
class ABP_LargeShip_StandardHull_Art_Interior_Map_Deck_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x0470(0x0358) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_StandardHull_Art_Interior_Map_Deck.BP_LargeShip_StandardHull_Art_Interior_Map_Deck_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
