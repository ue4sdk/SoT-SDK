#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VotableTaleProposal_Vertical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C
// 0x0078 (0x0630 - 0x05B8)
class ABP_VotableTaleProposal_Vertical_C : public AVotableObjectView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Token_1;                                                  // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_4;                                                  // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_3;                                                  // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_2;                                                  // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Tokens;                                                   // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 Token_Asset;                                              // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoteCount;                                                // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05FC(0x0004) MISSED OFFSET
	struct FWwiseEmitter                               Sound_Emitter;                                            // 0x0600(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Show_Token_Animation_Time;                                // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Token_Material;                                           // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C"));
		return ptr;
	}


	void PlayShowTokenAnimation(class UPrimitiveComponent* Token);
	void Is_Session_Locked(bool* IsLocked);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter);
	void OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter);
	void ExecuteUbergraph_BP_VotableTaleProposal_Vertical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
