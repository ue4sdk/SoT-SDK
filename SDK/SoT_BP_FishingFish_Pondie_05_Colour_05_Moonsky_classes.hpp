#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_Pondie_05_Colour_05_Moonsky_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_Pondie_05_Colour_05_Moonsky.BP_FishingFish_Pondie_05_Colour_05_Moonsky_C
// 0x0000 (0x0960 - 0x0960)
class ABP_FishingFish_Pondie_05_Colour_05_Moonsky_C : public ABP_FishingFish_Pondie_05_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_Pondie_05_Colour_05_Moonsky.BP_FishingFish_Pondie_05_Colour_05_Moonsky_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
