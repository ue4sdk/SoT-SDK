// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueVariants_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText
// (Final, Native, Private)

void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentTitleText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentTitleText"));

	UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentTitleText_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
// (Final, Native, Private)

void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentClueDestination()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination"));

	UAbandonedNoteClueDestinationContainerComponent_OnRep_CurrentClueDestination_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
// (Final, Native, Private)

void AClueSiteCircleMapWieldable::OnRep_MapRadialIconData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData"));

	AClueSiteCircleMapWieldable_OnRep_MapRadialIconData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AItemInfo*                     ItemInfo                       (Parm, ZeroConstructor, IsPlainOldData)
// UClueDescriptor*               Clue                           (Parm, ZeroConstructor, IsPlainOldData)

void UClueVariantsBlueprintFunctionLibrary::GiveClueDescriptorToItem(AItemInfo* ItemInfo, UClueDescriptor* Clue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem"));

	UClueVariantsBlueprintFunctionLibrary_GiveClueDescriptorToItem_Params params;
	params.ItemInfo = ItemInfo;
	params.Clue = Clue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo
// (Native, Public)

void UCompositeClueDestinationDescriptor::OnRep_DestinationInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.CompositeClueDestinationDescriptor.OnRep_DestinationInfo"));

	UCompositeClueDestinationDescriptor_OnRep_DestinationInfo_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UClueDescriptor*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClueDescriptor* UGooseChaseClueBlueprintFunctionLibrary::CreateEndOfGooseChaseClue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue"));

	UGooseChaseClueBlueprintFunctionLibrary_CreateEndOfGooseChaseClue_Params params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// UClueConnectionConfig*         ConnectionConfiguration        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Difficulty                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<UClass*>                AllowedClueTypes               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// UTaleQuestSelectorService*     SelectorService                (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// AShipwreck*                    Shipwreck                      (Parm, ZeroConstructor, IsPlainOldData)
// UClueDescriptor*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClueDescriptor* UShipwreckClueBlueprintFunctionLibrary::CreateCluePointingToShipwreck(UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<UClass*> AllowedClueTypes, UTaleQuestSelectorService* SelectorService, const FVector& SourceLocation, AShipwreck* Shipwreck)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck"));

	UShipwreckClueBlueprintFunctionLibrary_CreateCluePointingToShipwreck_Params params;
	params.ConnectionConfiguration = ConnectionConfiguration;
	params.Difficulty = Difficulty;
	params.AllowedClueTypes = AllowedClueTypes;
	params.SelectorService = SelectorService;
	params.SourceLocation = SourceLocation;
	params.Shipwreck = Shipwreck;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FText                          InTitleText                    (ConstParm, Parm, OutParm, ReferenceParm)

void UTaleQuestClueInventoryService::SetClueTitleText(const FText& InTitleText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText"));

	UTaleQuestClueInventoryService_SetClueTitleText_Params params;
	params.InTitleText = InTitleText;

	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestClueInventoryService::GetCollectedClueCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.GetCollectedClueCount"));

	UTaleQuestClueInventoryService_GetCollectedClueCount_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
