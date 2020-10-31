// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueVariants_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentDestination
// (Final, Native, Private)

void UAbandonedNoteClueDestinationContainerComponent::OnRep_CurrentDestination()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueVariants.AbandonedNoteClueDestinationContainerComponent.OnRep_CurrentDestination"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
