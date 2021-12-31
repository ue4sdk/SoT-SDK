#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CT_TutorialProgress_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CT_TutorialProgress.BP_CT_TutorialProgress_C
// 0x0048 (0x0070 - 0x0028)
class UBP_CT_TutorialProgress_C : public UObject
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	AAthenaPlayerController*                           AthenaPlayerController;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<UBP_CT_VoyageProgress_C*>                   TutorialVoyageProgressTrackers;                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UBP_CT_VoyageProgress_C*                           XMarksTutorialProgress;                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBP_CT_VoyageProgress_C*                           RiddleTutorialProgress;                                   // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBP_CT_VoyageProgress_C*                           FaunaTutorialProgress;                                    // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBP_CT_VoyageProgress_C*                           CargoTutorialProgress;                                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UBP_CT_VoyageProgress_C*                           BootyTutorialProgress;                                    // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CT_TutorialProgress.BP_CT_TutorialProgress_C"));
		return ptr;
	}


	void GetCompanyTutorials(const FName& CompanyName, TArray<UBP_CT_VoyageProgress_C*>* CompanyTutorials);
	void GetOrderOfSoulsTutorials(TArray<UBP_CT_VoyageProgress_C*>* Result);
	void GetMerchantAllianceTutorials(TArray<UBP_CT_VoyageProgress_C*>* Result);
	void GetGoldhoarderTutorials(TArray<UBP_CT_VoyageProgress_C*>* Result);
	void AreAllTutorialsOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result);
	void IsAnyTutorialOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result);
	void FindTutorialProgressObject(const FText& VoyageName, UBP_CT_VoyageProgress_C** Voyage);
	void CreateTutorialProgressTracker(UClass* VoyageProposalDesc, UClass* TaleRankDesc, UClass* ExclusionRank, bool Disable, UBP_CT_VoyageProgress_C** Result);
	void Start();
	void Change_Voyage_Progress(const FText& VoyageName, TEnumAsByte<ETutorialVoyageInternalState> New_Progress_State);
	void ExecuteUbergraph_BP_CT_TutorialProgress(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
