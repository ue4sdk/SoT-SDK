#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_Devilfish_03_Colour_03_Lava_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_Devilfish_03_Colour_03_Lava.BP_FishingFish_Devilfish_03_Colour_03_Lava_C
// 0x0000 (0x0950 - 0x0950)
class ABP_FishingFish_Devilfish_03_Colour_03_Lava_C : public ABP_FishingFish_Devilfish_03_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_Devilfish_03_Colour_03_Lava.BP_FishingFish_Devilfish_03_Colour_03_Lava_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
