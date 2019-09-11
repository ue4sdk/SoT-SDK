#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ChooseCoMLocation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ChooseCoMLocation.BP_ChooseCoMLocation_C
// 0x0000 (0x0098 - 0x0098)
class UBP_ChooseCoMLocation_C : public UBlueprintStepBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ChooseCoMLocation.BP_ChooseCoMLocation_C"));
		return ptr;
	}


	void OnBeginCustom(TArray<struct FDS_Puzzle>* PossibleLocations, class AActor** Location, class UQuestBookPageBundle** Pages, TAssetPtr<class AActor>* LocationAssetID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
