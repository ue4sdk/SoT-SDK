// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tales.TaleQuestStep.Signal
// (Final, Native, Public)

void UTaleQuestStep::Signal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestStep.Signal"));

	UTaleQuestStep_Signal_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestCargoRunContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FGuid                          Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// UTaleQuestCargoRunContract*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UTaleQuestCargoRunContract* UTaleQuestCargoRunContractsService::GetContract(const FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCargoRunContractsService.GetContract"));

	UTaleQuestCargoRunContractsService_GetContract_Params params;
	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestCargoRunContractsService.AddContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<UClass*>                InItems                        (Parm, ZeroConstructor)
// AActor*                        InCollectFromNPC               (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InDeliverToNPC                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTimeLimitInMinutes           (Parm, ZeroConstructor, IsPlainOldData)
// FGuid                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<UClass*> InItems, AActor* InCollectFromNPC, AActor* InDeliverToNPC, int InTimeLimitInMinutes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCargoRunContractsService.AddContract"));

	UTaleQuestCargoRunContractsService_AddContract_Params params;
	params.InItems = InItems;
	params.InCollectFromNPC = InCollectFromNPC;
	params.InDeliverToNPC = InDeliverToNPC;
	params.InTimeLimitInMinutes = InTimeLimitInMinutes;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// FGuid                          Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// UTaleQuestMerchantContract*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.GetContract"));

	UTaleQuestMerchantContractsService_GetContract_Params params;
	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.AddContract
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<FTaleQuestDeliveryRequest> Requests                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FName                          InDeliveryDestination          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeLimit                    (Parm, ZeroConstructor, IsPlainOldData)
// FGuid                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FGuid UTaleQuestMerchantContractsService::AddContract(TArray<FTaleQuestDeliveryRequest> Requests, const FName& InDeliveryDestination, float InTimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.AddContract"));

	UTaleQuestMerchantContractsService_AddContract_Params params;
	params.Requests = Requests;
	params.InDeliveryDestination = InDeliveryDestination;
	params.InTimeLimit = InTimeLimit;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestSelectorServiceBlueprintFunctionLibrary::SetDebugVoyageSeed(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed"));

	UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params params;
	params.Seed = Seed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
// (Final, Native, Static, Public, BlueprintCallable)

void UTaleQuestSelectorServiceBlueprintFunctionLibrary::ResetVoyageDebugSeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed"));

	UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// UCutsceneResponseCoordinator*  Coordinator                    (Parm, ZeroConstructor, IsPlainOldData)

void UCutsceneResponsesTaleService::TrackResponseCoordinator(UCutsceneResponseCoordinator* Coordinator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator"));

	UCutsceneResponsesTaleService_TrackResponseCoordinator_Params params;
	params.Coordinator = Coordinator;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UCutsceneResponsePlayerInterface> CutsceneResponsePlayer         (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ResponseSheetClass             (Parm, ZeroConstructor, IsPlainOldData)
// UCutsceneResponseSheet*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UCutsceneResponseSheet* UCutsceneResponsesTaleService::StartCutsceneResponseSheet(AActor* TargetActor, const TScriptInterface<class UCutsceneResponsePlayerInterface>& CutsceneResponsePlayer, UClass* ResponseSheetClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet"));

	UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params params;
	params.TargetActor = TargetActor;
	params.CutsceneResponsePlayer = CutsceneResponsePlayer;
	params.ResponseSheetClass = ResponseSheetClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UCutsceneResponsesTaleService::ClearAllActiveResponseSheets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets"));

	UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCutsceneResponsesTaleService::AddResponseSheetRelevantActor(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor"));

	UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params params;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Minimum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Maximum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestSelectorService::GetRandomIntegerInRange(int Minimum, int Maximum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange"));

	UTaleQuestSelectorService_GetRandomIntegerInRange_Params params;
	params.Minimum = Minimum;
	params.Maximum = Maximum;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMapService.UpdateMerchantMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FName                          MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FTaleQuestDeliverableItem      Deliverable                    (Parm)

void UTaleQuestMapService::UpdateMerchantMap(const FName& MapId, int Index, const FTaleQuestDeliverableItem& Deliverable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.UpdateMerchantMap"));

	UTaleQuestMapService_UpdateMerchantMap_Params params;
	params.MapId = MapId;
	params.Index = Index;
	params.Deliverable = Deliverable;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestMapService.AdvanceRiddleMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FName                          MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestMapService::AdvanceRiddleMap(const FName& MapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.AdvanceRiddleMap"));

	UTaleQuestMapService_AdvanceRiddleMap_Params params;
	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
