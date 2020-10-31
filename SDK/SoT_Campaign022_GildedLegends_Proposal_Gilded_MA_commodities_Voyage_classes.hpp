#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Campaign022_GildedLegends_Proposal_Gilded_MA_commodities_Voyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Campaign022_GildedLegends_Proposal_Gilded_MA_commodities_Voyage.Campaign022_GildedLegends_Proposal_Gilded_MA_commodities_Voyage_C
// 0x0000 (0x0138 - 0x0138)
class UCampaign022_GildedLegends_Proposal_Gilded_MA_commodities_Voyage_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Campaign022_GildedLegends_Proposal_Gilded_MA_commodities_Voyage.Campaign022_GildedLegends_Proposal_Gilded_MA_commodities_Voyage_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
