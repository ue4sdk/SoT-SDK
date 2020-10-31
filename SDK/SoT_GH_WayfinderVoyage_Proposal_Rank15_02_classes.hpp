#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GH_WayfinderVoyage_Proposal_Rank15_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GH_WayfinderVoyage_Proposal_Rank15_02.GH_WayfinderVoyage_Proposal_Rank15_02_C
// 0x0000 (0x0138 - 0x0138)
class UGH_WayfinderVoyage_Proposal_Rank15_02_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GH_WayfinderVoyage_Proposal_Rank15_02.GH_WayfinderVoyage_Proposal_Rank15_02_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
