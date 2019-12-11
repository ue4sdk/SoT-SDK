#pragma once

// Sea of Thieves (2.0) SDK

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
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AAthenaPlayerController*                     AthenaPlayerController;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UBP_CT_VoyageProgress_C*>             TutorialVoyageProgressTrackers;                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBP_CT_VoyageProgress_C*                     XMarksTutorialProgress;                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_CT_VoyageProgress_C*                     RiddleTutorialProgress;                                   // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_CT_VoyageProgress_C*                     FaunaTutorialProgress;                                    // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_CT_VoyageProgress_C*                     CargoTutorialProgress;                                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_CT_VoyageProgress_C*                     BootyTutorialProgress;                                    // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CT_TutorialProgress.BP_CT_TutorialProgress_C"));
		return ptr;
	}


	void AreAllTutorialsOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result);
	void IsAnyTutorialOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result);
	void FindTutorialProgressObject(const struct FText& VoyageName, class UBP_CT_VoyageProgress_C** Voyage);
	void CreateTutorialProgressTracker(class UClass* VoyageProposalDesc, class UClass* TaleRankDesc, class UClass* ExclusionRank, bool Disable, class UBP_CT_VoyageProgress_C** Result);
	void Start();
	void Change_Voyage_Progress(const struct FText& VoyageName, TEnumAsByte<ETutorialVoyageInternalState> New_Progress_State);
	void ExecuteUbergraph_BP_CT_TutorialProgress(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
