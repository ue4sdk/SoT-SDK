#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueVariants_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText
struct UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentTitleText_Params
{
};

// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
struct UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentClueDestination_Params
{
};

// Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
struct AClueSiteCircleMapWieldable_OnRep_MapRadialIconData_Params
{
};

// Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
struct UClueVariantsBlueprintFunctionLibrary_GiveClueDescriptorToItem_Params
{
	AItemInfo*                                         ItemInfo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	UClueDescriptor*                                   Clue;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo
struct UCompositeClueDestinationDescriptor_OnRep_DestinationInfo_Params
{
};

// Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
struct UGooseChaseClueBlueprintFunctionLibrary_CreateEndOfGooseChaseClue_Params
{
	UClueDescriptor*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
struct UShipwreckClueBlueprintFunctionLibrary_CreateCluePointingToShipwreck_Params
{
	UClueConnectionConfig*                             ConnectionConfiguration;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Difficulty;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<UClass*>                                    AllowedClueTypes;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	UTaleQuestSelectorService*                         SelectorService;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FVector                                            SourceLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	AShipwreck*                                        Shipwreck;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	UClueDescriptor*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText
struct UTaleQuestClueInventoryService_SetClueTitleText_Params
{
	FText                                              InTitleText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount
struct UTaleQuestClueInventoryService_GetCollectedClueCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
