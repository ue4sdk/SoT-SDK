#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_Battlegill_05_Colour_04_Sand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_Battlegill_05_Colour_04_Sand.BP_FishingFish_Battlegill_05_Colour_04_Sand_C
// 0x0000 (0x0920 - 0x0920)
class ABP_FishingFish_Battlegill_05_Colour_04_Sand_C : public ABP_FishingFish_Battlegill_05_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_Battlegill_05_Colour_04_Sand.BP_FishingFish_Battlegill_05_Colour_04_Sand_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
