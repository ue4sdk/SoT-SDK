#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_WildSplash_05_Colour_03_Ocean_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_WildSplash_05_Colour_03_Ocean.BP_FishingFish_WildSplash_05_Colour_03_Ocean_C
// 0x0000 (0x0910 - 0x0910)
class ABP_FishingFish_WildSplash_05_Colour_03_Ocean_C : public ABP_FishingFish_WildSplash_05_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_WildSplash_05_Colour_03_Ocean.BP_FishingFish_WildSplash_05_Colour_03_Ocean_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
