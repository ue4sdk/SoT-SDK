#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin.BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C
// 0x0150 (0x05C0 - 0x0470)
class ABP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0470(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin.BP_LargeShip_StandardHull_Art_Interior_Captains_Cabin_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
