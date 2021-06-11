// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tales.TaleQuestCargoRunContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTaleQuestCargoRunContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleQuestCargoRunContract* UTaleQuestCargoRunContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCargoRunContractsService.GetContract"));

	struct
	{
		struct FGuid                   Guid;
		class UTaleQuestCargoRunContract* ReturnValue;
	} params;

	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestCargoRunContractsService.AddContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          InItems                        (Parm, ZeroConstructor)
// class AActor*                  InCollectFromNPC               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InDeliverToNPC                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTimeLimitInMinutes           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCargoRunContractsService.AddContract"));

	struct
	{
		TArray<class UClass*>          InItems;
		class AActor*                  InCollectFromNPC;
		class AActor*                  InDeliverToNPC;
		int                            InTimeLimitInMinutes;
		struct FGuid                   ReturnValue;
	} params;

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
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTaleQuestMerchantContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.GetContract"));

	struct
	{
		struct FGuid                   Guid;
		class UTaleQuestMerchantContract* ReturnValue;
	} params;

	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.AddContract
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FTaleQuestDeliveryRequest> Requests                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   InDeliveryDestination          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeLimit                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestMerchantContractsService::AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.AddContract"));

	struct
	{
		TArray<struct FTaleQuestDeliveryRequest> Requests;
		struct FName                   InDeliveryDestination;
		float                          InTimeLimit;
		struct FGuid                   ReturnValue;
	} params;

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

	struct
	{
		int                            Seed;
	} params;

	params.Seed = Seed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
// (Final, Native, Static, Public, BlueprintCallable)

void UTaleQuestSelectorServiceBlueprintFunctionLibrary::ResetVoyageDebugSeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UCutsceneResponsePlayerInterface> CutsceneResponsePlayer         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ResponseSheetClass             (Parm, ZeroConstructor, IsPlainOldData)
// class UCutsceneResponseSheet*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCutsceneResponseSheet* UCutsceneResponsesTaleService::StartCutsceneResponseSheet(class AActor* TargetActor, const TScriptInterface<class UCutsceneResponsePlayerInterface>& CutsceneResponsePlayer, class UClass* ResponseSheetClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet"));

	struct
	{
		class AActor*                  TargetActor;
		TScriptInterface<class UCutsceneResponsePlayerInterface> CutsceneResponsePlayer;
		class UClass*                  ResponseSheetClass;
		class UCutsceneResponseSheet*  ReturnValue;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCutsceneResponsesTaleService::AddResponseSheetRelevantActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

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

	struct
	{
		int                            Minimum;
		int                            Maximum;
		int                            ReturnValue;
	} params;

	params.Minimum = Minimum;
	params.Maximum = Maximum;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMapService.UpdateMerchantMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTaleQuestDeliverableItem Deliverable                    (Parm)

void UTaleQuestMapService::UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.UpdateMerchantMap"));

	struct
	{
		struct FName                   MapId;
		int                            Index;
		struct FTaleQuestDeliverableItem Deliverable;
	} params;

	params.MapId = MapId;
	params.Index = Index;
	params.Deliverable = Deliverable;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestMapService.AdvanceRiddleMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestMapService::AdvanceRiddleMap(const struct FName& MapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.AdvanceRiddleMap"));

	struct
	{
		struct FName                   MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
