#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_AncientScale_05_Colour_03_Smoke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_AncientScale_05_Colour_03_Smoke.BP_FishingFish_AncientScale_05_Colour_03_Smoke_C
// 0x0000 (0x08F0 - 0x08F0)
class ABP_FishingFish_AncientScale_05_Colour_03_Smoke_C : public ABP_FishingFish_AncientScale_05_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_AncientScale_05_Colour_03_Smoke.BP_FishingFish_AncientScale_05_Colour_03_Smoke_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
