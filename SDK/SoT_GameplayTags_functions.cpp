// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            TagToCheck                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag"));

	struct
	{
		struct FGameplayTag            TagToCheck;
		bool                           ReturnValue;
	} params;

	params.TagToCheck = TagToCheck;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCountEmptyAsMatch             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		bool                           bCountEmptyAsMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCountEmptyAsMatch             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		bool                           bCountEmptyAsMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm)

void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag            Value                          (Parm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(const struct FGameplayTag& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag"));

	struct
	{
		struct FGameplayTag            Value;
		struct FGameplayTag            ReturnValue;
	} params;

	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery       TagQuery                       (Parm)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery"));

	struct
	{
		struct FGameplayTagQuery       TagQuery;
		struct FGameplayTagQuery       ReturnValue;
	} params;

	params.TagQuery = TagQuery;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCountEmptyAsMatch             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags"));

	struct
	{
		TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;
		struct FGameplayTagContainer   OtherContainer;
		bool                           bCountEmptyAsMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainerInterface = TagContainerInterface;
	params.OtherContainer = OtherContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		int                            ReturnValue;
	} params;

	params.TagContainer = TagContainer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag            TagOne                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            TagTwo                         (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EGameplayTagMatchType> TagOneMatchType                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTagMatchType> TagTwoMatchType                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, TEnumAsByte<EGameplayTagMatchType> TagOneMatchType, TEnumAsByte<EGameplayTagMatchType> TagTwoMatchType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch"));

	struct
	{
		struct FGameplayTag            TagOne;
		struct FGameplayTag            TagTwo;
		TEnumAsByte<EGameplayTagMatchType> TagOneMatchType;
		TEnumAsByte<EGameplayTagMatchType> TagTwoMatchType;
		bool                           ReturnValue;
	} params;

	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.TagOneMatchType = TagOneMatchType;
	params.TagTwoMatchType = TagTwoMatchType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EGameplayTagMatchType> TagMatchType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(const TScriptInterface<class UGameplayTagAssetInterface>& TagContainerInterface, TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagMatchType> TagMatchType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag"));

	struct
	{
		TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;
		TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType;
		struct FGameplayTag            Tag;
		TEnumAsByte<EGameplayTagMatchType> TagMatchType;
		bool                           ReturnValue;
	} params;

	params.TagContainerInterface = TagContainerInterface;
	params.ContainerTagsMatchType = ContainerTagsMatchType;
	params.Tag = Tag;
	params.TagMatchType = TagMatchType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagQuery       TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTagQuery       TagQuery;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCountEmptyAsMatch             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTagContainer   OtherContainer;
		bool                           bCountEmptyAsMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bCountEmptyAsMatch             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		struct FGameplayTagContainer   OtherContainer;
		bool                           bCountEmptyAsMatch;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EGameplayTagMatchType> TagMatchType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<EGameplayTagMatchType> TagMatchType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag"));

	struct
	{
		struct FGameplayTagContainer   TagContainer;
		TEnumAsByte<EGameplayTagMatchType> ContainerTagsMatchType;
		struct FGameplayTag            Tag;
		TEnumAsByte<EGameplayTagMatchType> TagMatchType;
		bool                           ReturnValue;
	} params;

	params.TagContainer = TagContainer;
	params.ContainerTagsMatchType = ContainerTagsMatchType;
	params.Tag = Tag;
	params.TagMatchType = TagMatchType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   InTagContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   InOutTagContainer              (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers"));

	struct
	{
		struct FGameplayTagContainer   InTagContainer;
		struct FGameplayTagContainer   InOutTagContainer;
		bool                           ReturnValue;
	} params;

	params.InTagContainer = InTagContainer;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagsManager.RequestGameplayTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   TagName                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ErrorIfNotFound                (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UGameplayTagsManager::RequestGameplayTag(const struct FName& TagName, bool ErrorIfNotFound)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagsManager.RequestGameplayTag"));

	struct
	{
		struct FName                   TagName;
		bool                           ErrorIfNotFound;
		struct FGameplayTag            ReturnValue;
	} params;

	params.TagName = TagName;
	params.ErrorIfNotFound = ErrorIfNotFound;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
