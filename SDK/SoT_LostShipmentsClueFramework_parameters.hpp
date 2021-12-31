#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo
struct UClueDestinationDescriptor_OnRep_DestinationInfo_Params
{
};

// Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
struct UClueConnectionBlueprintFunctionLibrary_CreateCluePointingToSite_Params
{
	UClueConnectionConfig*                             ConnectionConfiguration;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Difficulty;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<UClass*>                                    AllowedClueTypes;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	UTaleQuestSelectorService*                         SelectorService;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            SourceLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	FClueSite                                          TargetSite;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	UClueDescriptor*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
struct UClueLifetimeBlueprintFunctionLibrary_GiveClueToParticipant_Params
{
	AActor*                                            Participant;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	UClueDescriptor*                                   Clue;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UClass*                                            ClueSite;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
struct UTaleQuestClueSiteService_GetClueSites_Params
{
	TArray<FClueSite>                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
