#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tales.TaleQuestStep.Signal
struct UTaleQuestStep_Signal_Params
{
};

// Function Tales.TaleQuestCargoRunContractsService.GetContract
struct UTaleQuestCargoRunContractsService_GetContract_Params
{
	FGuid                                              Guid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UTaleQuestCargoRunContract*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestCargoRunContractsService.AddContract
struct UTaleQuestCargoRunContractsService_AddContract_Params
{
	TArray<UClass*>                                    InItems;                                                  // (Parm, ZeroConstructor)
	AActor*                                            InCollectFromNPC;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	AActor*                                            InDeliverToNPC;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTimeLimitInMinutes;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	FGuid                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestMerchantContractsService.GetContract
struct UTaleQuestMerchantContractsService_GetContract_Params
{
	FGuid                                              Guid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UTaleQuestMerchantContract*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestMerchantContractsService.AddContract
struct UTaleQuestMerchantContractsService_AddContract_Params
{
	TArray<FTaleQuestDeliveryRequest>                  Requests;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	FName                                              InDeliveryDestination;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTimeLimit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FGuid                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_SetDebugVoyageSeed_Params
{
	int                                                Seed;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
struct UTaleQuestSelectorServiceBlueprintFunctionLibrary_ResetVoyageDebugSeed_Params
{
};

// Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
struct UCutsceneResponsesTaleService_TrackResponseCoordinator_Params
{
	UCutsceneResponseCoordinator*                      Coordinator;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
struct UCutsceneResponsesTaleService_StartCutsceneResponseSheet_Params
{
	AActor*                                            TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UCutsceneResponsePlayerInterface> CutsceneResponsePlayer;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ResponseSheetClass;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UCutsceneResponseSheet*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
struct UCutsceneResponsesTaleService_ClearAllActiveResponseSheets_Params
{
};

// Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
struct UCutsceneResponsesTaleService_AddResponseSheetRelevantActor_Params
{
	AActor*                                            Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
struct UTaleQuestSelectorService_GetRandomIntegerInRange_Params
{
	int                                                Minimum;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Maximum;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Tales.TaleQuestMapService.UpdateMerchantMap
struct UTaleQuestMapService_UpdateMerchantMap_Params
{
	FName                                              MapId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FTaleQuestDeliverableItem                          Deliverable;                                              // (Parm)
};

// Function Tales.TaleQuestMapService.AdvanceRiddleMap
struct UTaleQuestMapService_AdvanceRiddleMap_Params
{
	FName                                              MapId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
