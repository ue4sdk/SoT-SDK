#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_Pondie_05_Colour_03_Bronze_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_Pondie_05_Colour_03_Bronze.BP_FishingFish_Pondie_05_Colour_03_Bronze_C
// 0x0000 (0x0920 - 0x0920)
class ABP_FishingFish_Pondie_05_Colour_03_Bronze_C : public ABP_FishingFish_Pondie_05_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_Pondie_05_Colour_03_Bronze.BP_FishingFish_Pondie_05_Colour_03_Bronze_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
