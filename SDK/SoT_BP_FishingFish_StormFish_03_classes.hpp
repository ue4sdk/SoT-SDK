#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FishingFish_StormFish_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FishingFish_StormFish_03.BP_FishingFish_StormFish_03_C
// 0x0000 (0x0910 - 0x0910)
class ABP_FishingFish_StormFish_03_C : public ABP_FishingFish_StormFish_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FishingFish_StormFish_03.BP_FishingFish_StormFish_03_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
