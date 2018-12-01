#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_XMarksTheSpot_TheJourneyForBuriedTreasure_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass XMarksTheSpot_TheJourneyForBuriedTreasure.XMarksTheSpot_TheJourneyForBuriedTreasure_C
// 0x0000 (0x0138 - 0x0138)
class UXMarksTheSpot_TheJourneyForBuriedTreasure_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass XMarksTheSpot_TheJourneyForBuriedTreasure.XMarksTheSpot_TheJourneyForBuriedTreasure_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
