#pragma once

// Sea of Thieves (2.0) SDK

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
// 0x0050 (0x0590 - 0x0540)
class ABP_VotableCancelVoyage_C : public AVotableObjectView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Token_2;                                                  // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_4;                                                  // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_3;                                                  // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Token_1;                                                  // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                Tokens;                                                   // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 Token_Asset;                                              // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VoteCount;                                                // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Show_Token_Animation_Time;                                // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          Token_Material;                                           // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VotableCancelVoyage.BP_VotableCancelVoyage_C"));
		return ptr;
	}


	void PlayShowTokenAnimation(class UPrimitiveComponent* Token);
	void Is_Session_Locked(bool* IsLocked);
	struct FText GetObjectDisplayName();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVoteAdded(const TScriptInterface<class UVoterInterface>& Voter);
	void OnVoteRemoved(const TScriptInterface<class UVoterInterface>& Voter);
	void ExecuteUbergraph_BP_VotableCancelVoyage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
