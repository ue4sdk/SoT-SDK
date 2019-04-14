#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_AncientScale_05_Colour_01_Almond_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_AncientScale_05_Colour_01_Almond.BP_FishingFish_AncientScale_05_Colour_01_Almond_C
// 0x0000 (0x0AA0 - 0x0AA0)
class ABP_FishingFish_AncientScale_05_Colour_01_Almond_C : public ABP_FishingFish_AncientScale_05_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_AncientScale_05_Colour_01_Almond.BP_FishingFish_AncientScale_05_Colour_01_Almond_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
