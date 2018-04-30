#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableVoyageProposal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VotableVoyageProposal.BP_VotableVoyageProposal_C
// 0x0078 (0x0600 - 0x0588)
class ABP_VotableVoyageProposal_C : public AVotableObjectView
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0588(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VotableVoyageProposal.BP_VotableVoyageProposal_C");
		return ptr;
	}


	void PlayShowTokenAnimation(class UPrimitiveComponent* Token);
	void Is_Session_Locked(bool* IsLocked);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteAdded(TScriptInterface<class UVoterInterface>* Voter);
	void OnVoteRemoved(TScriptInterface<class UVoterInterface>* Voter);
	void ExecuteUbergraph_BP_VotableVoyageProposal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
