#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Proposal_MercenaryVoyageKeySeekerWSP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proposal_MercenaryVoyageKeySeekerWSP.Proposal_MercenaryVoyageKeySeekerWSP_C
// 0x0000 (0x0138 - 0x0138)
class UProposal_MercenaryVoyageKeySeekerWSP_C : public UVoyageProposalDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Proposal_MercenaryVoyageKeySeekerWSP.Proposal_MercenaryVoyageKeySeekerWSP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
