#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
	FGameplayTag                                       TagToCheck;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (Parm, OutParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
	FGameplayTag                                       Value;                                                    // (Parm)
	FGameplayTag                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
	FGameplayTagQuery                                  TagQuery;                                                 // (Parm)
	FGameplayTagQuery                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTagContainer                              OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
struct UBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params
{
	FGameplayTag                                       TagOne;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayTag                                       TagTwo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EGameplayTagMatchType>                 TagOneMatchType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTagMatchType>                 TagTwoMatchType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTagMatchType>                 ContainerTagsMatchType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EGameplayTagMatchType>                 TagMatchType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayTagQuery                                  TagQuery;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
struct UBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayTagContainer                              OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
struct UBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayTagContainer                              OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
struct UBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params
{
	FGameplayTagContainer                              TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EGameplayTagMatchType>                 ContainerTagsMatchType;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EGameplayTagMatchType>                 TagMatchType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
	FGameplayTagContainer                              InTagContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	FGameplayTagContainer                              InOutTagContainer;                                        // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagsManager.RequestGameplayTag
struct UGameplayTagsManager_RequestGameplayTag_Params
{
	FName                                              TagName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ErrorIfNotFound;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	FGameplayTag                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
