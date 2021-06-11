// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueVariants_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination
// (Final, Native, Private)

void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentClueDestination()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentClueDestination"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData
// (Final, Native, Private)

void AClueSiteCircleMapWieldable::OnRep_MapRadialIconData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.ClueSiteCircleMapWieldable.OnRep_MapRadialIconData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AItemInfo*               ItemInfo                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClueDescriptor*         Clue                           (Parm, ZeroConstructor, IsPlainOldData)

void UClueVariantsBlueprintFunctionLibrary::GiveClueDescriptorToItem(class AItemInfo* ItemInfo, class UClueDescriptor* Clue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.ClueVariantsBlueprintFunctionLibrary.GiveClueDescriptorToItem"));

	struct
	{
		class AItemInfo*               ItemInfo;
		class UClueDescriptor*         Clue;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClueDescriptor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClueDescriptor* UGooseChaseClueBlueprintFunctionLibrary::CreateEndOfGooseChaseClue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.GooseChaseClueBlueprintFunctionLibrary.CreateEndOfGooseChaseClue"));

	struct
	{
		class UClueDescriptor*         ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClueConnectionConfig*   ConnectionConfiguration        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Difficulty                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AllowedClueTypes               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTaleQuestSelectorService* SelectorService                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AShipwreck*              Shipwreck                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClueDescriptor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClueDescriptor* UShipwreckClueBlueprintFunctionLibrary::CreateCluePointingToShipwreck(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, class AShipwreck* Shipwreck)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.ShipwreckClueBlueprintFunctionLibrary.CreateCluePointingToShipwreck"));

	struct
	{
		class UClueConnectionConfig*   ConnectionConfiguration;
		int                            Difficulty;
		TArray<class UClass*>          AllowedClueTypes;
		class UTaleQuestSelectorService* SelectorService;
		struct FVector                 SourceLocation;
		class AShipwreck*              Shipwreck;
		class UClueDescriptor*         ReturnValue;
	} params;

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
// struct FText                   InTitleText                    (ConstParm, Parm, OutParm, ReferenceParm)

void UTaleQuestClueInventoryService::SetClueTitleText(const struct FText& InTitleText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.TaleQuestClueInventoryService.SetClueTitleText"));

	struct
	{
		struct FText                   InTitleText;
	} params;

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

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
