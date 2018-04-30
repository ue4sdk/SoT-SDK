#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableCancelVoyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VotableCancelVoyage.BP_VotableCancelVoyage_C
// 0x0078 (0x0600 - 0x0588)
class ABP_VotableCancelVoyage_C : public AVotableObjectView
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0588(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VotableCancelVoyage.BP_VotableCancelVoyage_C");
		return ptr;
	}


	void PlayShowTokenAnimation(class UPrimitiveComponent* Token);
	void Is_Session_Locked(bool* IsLocked);
	struct FText GetObjectDisplayName();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteAdded(TScriptInterface<class UVoterInterface>* Voter);
	void OnVoteRemoved(TScriptInterface<class UVoterInterface>* Voter);
	void ExecuteUbergraph_BP_VotableCancelVoyage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
