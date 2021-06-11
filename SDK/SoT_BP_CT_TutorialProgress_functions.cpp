// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CT_TutorialProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   CompanyName                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UBP_CT_VoyageProgress_C*> CompanyTutorials               (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetCompanyTutorials(const struct FName& CompanyName, TArray<class UBP_CT_VoyageProgress_C*>* CompanyTutorials)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetCompanyTutorials"));

	struct
	{
		struct FName                   CompanyName;
		TArray<class UBP_CT_VoyageProgress_C*> CompanyTutorials;
	} params;

	params.CompanyName = CompanyName;

	UObject::ProcessEvent(fn, &params);

	if (CompanyTutorials != nullptr)
		*CompanyTutorials = params.CompanyTutorials;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_CT_VoyageProgress_C*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetOrderOfSoulsTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetOrderOfSoulsTutorials"));

	struct
	{
		TArray<class UBP_CT_VoyageProgress_C*> Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_CT_VoyageProgress_C*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetMerchantAllianceTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetMerchantAllianceTutorials"));

	struct
	{
		TArray<class UBP_CT_VoyageProgress_C*> Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_CT_VoyageProgress_C*> Result                         (Parm, OutParm, ZeroConstructor)

void UBP_CT_TutorialProgress_C::GetGoldhoarderTutorials(TArray<class UBP_CT_VoyageProgress_C*>* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.GetGoldhoarderTutorials"));

	struct
	{
		TArray<class UBP_CT_VoyageProgress_C*> Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::AreAllTutorialsOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.AreAllTutorialsOnState"));

	struct
	{
		TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState;
		bool                           Result;
	} params;

	params.QueryVoyageState = QueryVoyageState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::IsAnyTutorialOnState(TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.IsAnyTutorialOnState"));

	struct
	{
		TEnumAsByte<ETutorialVoyageInternalState> QueryVoyageState;
		bool                           Result;
	} params;

	params.QueryVoyageState = QueryVoyageState;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   VoyageName                     (Parm)
// class UBP_CT_VoyageProgress_C* Voyage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::FindTutorialProgressObject(const struct FText& VoyageName, class UBP_CT_VoyageProgress_C** Voyage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.FindTutorialProgressObject"));

	struct
	{
		struct FText                   VoyageName;
		class UBP_CT_VoyageProgress_C* Voyage;
	} params;

	params.VoyageName = VoyageName;

	UObject::ProcessEvent(fn, &params);

	if (Voyage != nullptr)
		*Voyage = params.Voyage;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  VoyageProposalDesc             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TaleRankDesc                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ExclusionRank                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Disable                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBP_CT_VoyageProgress_C* Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::CreateTutorialProgressTracker(class UClass* VoyageProposalDesc, class UClass* TaleRankDesc, class UClass* ExclusionRank, bool Disable, class UBP_CT_VoyageProgress_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.CreateTutorialProgressTracker"));

	struct
	{
		class UClass*                  VoyageProposalDesc;
		class UClass*                  TaleRankDesc;
		class UClass*                  ExclusionRank;
		bool                           Disable;
		class UBP_CT_VoyageProgress_C* Result;
	} params;

	params.VoyageProposalDesc = VoyageProposalDesc;
	params.TaleRankDesc = TaleRankDesc;
	params.ExclusionRank = ExclusionRank;
	params.Disable = Disable;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start
// (BlueprintCallable, BlueprintEvent)

void UBP_CT_TutorialProgress_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Start"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   VoyageName                     (Parm)
// TEnumAsByte<ETutorialVoyageInternalState> New_Progress_State             (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::Change_Voyage_Progress(const struct FText& VoyageName, TEnumAsByte<ETutorialVoyageInternalState> New_Progress_State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.Change Voyage Progress"));

	struct
	{
		struct FText                   VoyageName;
		TEnumAsByte<ETutorialVoyageInternalState> New_Progress_State;
	} params;

	params.VoyageName = VoyageName;
	params.New_Progress_State = New_Progress_State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CT_TutorialProgress_C::ExecuteUbergraph_BP_CT_TutorialProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CT_TutorialProgress.BP_CT_TutorialProgress_C.ExecuteUbergraph_BP_CT_TutorialProgress"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
