#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_StormFish_03_Colour_03_Wild_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_StormFish_03_Colour_03_Wild.BP_FishingFish_StormFish_03_Colour_03_Wild_C
// 0x0000 (0x0920 - 0x0920)
class ABP_FishingFish_StormFish_03_Colour_03_Wild_C : public ABP_FishingFish_StormFish_03_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_StormFish_03_Colour_03_Wild.BP_FishingFish_StormFish_03_Colour_03_Wild_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
