#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShip_StandardHull_Damage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShip_StandardHull_Damage.BP_LargeShip_StandardHull_Damage_C
// 0x0114 (0x0750 - 0x063C)
class ABP_LargeShip_StandardHull_Damage_C : public ABP_HullDamage_C
{
public:
	unsigned char                                      UnknownData00[0x114];                                     // 0x063C(0x0114) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeShip_StandardHull_Damage.BP_LargeShip_StandardHull_Damage_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
