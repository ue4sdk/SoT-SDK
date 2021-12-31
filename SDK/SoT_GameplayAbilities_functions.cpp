// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameplayAbilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)

void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent"));

	UGameplayCueInterface_ForwardGameplayCueToParent_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)

void UGameplayCueInterface::BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler"));

	UGameplayCueInterface_BlueprintCustomHandler_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin"));

	UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle HitResult                      (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(const FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult"));

	UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint"));

	UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(const FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor"));

	UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax"));

	UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params params;
	params.SpecHandle = SpecHandle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// int                            StackCount                     (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const FGameplayEffectSpecHandle& SpecHandle, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount"));

	UAbilitySystemBlueprintLibrary_SetStackCount_Params params;
	params.SpecHandle = SpecHandle;
	params.StackCount = StackCount;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration"));

	UAbilitySystemBlueprintLibrary_SetDuration_Params params;
	params.SpecHandle = SpecHandle;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTag                   EventTag                       (Parm)
// FGameplayEventData             payload                        (Parm)

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(AActor* Actor, const FGameplayTag& EventTag, const FGameplayEventData& payload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor"));

	UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params params;
	params.Actor = Actor;
	params.EventTag = EventTag;
	params.payload = payload;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UGameplayEffect*               InGameplayEffect               (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InEffectCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InLevel                        (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(UGameplayEffect* InGameplayEffect, AActor* InInstigator, AActor* InEffectCauser, float InLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle"));

	UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params params;
	params.InGameplayEffect = InGameplayEffect;
	params.InInstigator = InInstigator;
	params.InEffectCauser = InEffectCauser;
	params.InLevel = InLevel;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayTargetDataFilter      Filter                         (Parm)
// AActor*                        FilterActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTargetDataFilterHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const FGameplayTargetDataFilter& Filter, AActor* FilterActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle"));

	UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params params;
	params.Filter = Filter;
	params.FilterActor = FilterActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer"));

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled"));

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::HasHitResult(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult"));

	UAbilitySystemBlueprintLibrary_HasHitResult_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(const FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin"));

	UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FTransform                     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(const FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform"));

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(const FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint"));

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UAbilitySystemBlueprintLibrary::GetOrigin(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin"));

	UAbilitySystemBlueprintLibrary_GetOrigin_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// FTransform                     ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform"));

	UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor"));

	UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle HitResult                      (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     ReturnValue                    (Parm, OutParm, ReturnParm)

FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(const FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData"));

	UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// FHitResult                     ReturnValue                    (Parm, OutParm, ReturnParm)

FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult"));

	UAbilitySystemBlueprintLibrary_GetHitResult_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// FVector                        Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(AActor* TargetActor, const FGameplayCueParameters& Parameters, FVector* Location, FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal"));

	UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// FVector                        Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(AActor* TargetActor, const FGameplayCueParameters& Parameters, FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection"));

	UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Direction != nullptr)
		*Direction = params.Direction;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAttribute             Attribute                      (Parm)
// bool                           bSuccessfullyFoundAttribute    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(AActor* Actor, const FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute"));

	UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params params;
	params.Actor = Actor;
	params.Attribute = Attribute;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData"));

	UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params params;
	params.TargetData = TargetData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<AActor*>                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData"));

	UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetActorCount(const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount"));

	UAbilitySystemBlueprintLibrary_GetActorCount_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const FGameplayCueParameters& Parameters, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex"));

	UAbilitySystemBlueprintLibrary_GetActorByIndex_Params params;
	params.Parameters = Parameters;
	params.Index = Index;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FActiveGameplayEffectHandle    ActiveHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount"));

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params params;
	params.ActiveHandle = ActiveHandle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// UAbilitySystemComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent"));

	UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params params;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayCueInterface> TargetCueInterface             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget"));

	UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params params;
	params.TargetCueInterface = TargetCueInterface;
	params.EventType = EventType;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetDataHandle               (Parm)
// FGameplayTargetDataFilterHandle ActorFilterClass               (Parm)
// FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(const FGameplayAbilityTargetDataHandle& TargetDataHandle, const FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData"));

	UAbilitySystemBlueprintLibrary_FilterTargetData_Params params;
	params.TargetDataHandle = TargetDataHandle;
	params.ActorFilterClass = ActorFilterClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled"));

	UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult"));

	UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// UObject*                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject"));

	UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor"));

	UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin"));

	UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor"));

	UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// FHitResult                     ReturnValue                    (Parm, OutParm, ReturnParm)

FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult"));

	UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser"));

	UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params params;
	params.EffectContext = EffectContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(const FGameplayAbilityTargetDataHandle& TargetData, int Index, AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor"));

	UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayCueParameters         Parameters                     (Parm)
// FGameplayTagRequirements       SourceTagReqs                  (Parm, OutParm, ReferenceParm)
// FGameplayTagRequirements       TargetTagReqs                  (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const FGameplayCueParameters& Parameters, FGameplayTagRequirements* SourceTagReqs, FGameplayTagRequirements* TargetTagReqs)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements"));

	UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params params;
	params.Parameters = Parameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SourceTagReqs != nullptr)
		*SourceTagReqs = params.SourceTagReqs;
	if (TargetTagReqs != nullptr)
		*TargetTagReqs = params.TargetTagReqs;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// FName                          DataName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const FGameplayEffectSpecHandle& SpecHandle, const FName& DataName, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude"));

	UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.DataName = DataName;
	params.Magnitude = Magnitude;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetHandle                   (Parm)
// FGameplayAbilityTargetDataHandle HandleToAdd                    (Parm)
// FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const FGameplayAbilityTargetDataHandle& TargetHandle, const FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle"));

	UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params params;
	params.TargetHandle = TargetHandle;
	params.HandleToAdd = HandleToAdd;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// FGameplayEffectSpecHandle      LinkedGameplayEffectSpec       (Parm)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec"));

	UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params params;
	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// FGameplayTagContainer          NewGameplayTags                (Parm)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags"));

	UAbilitySystemBlueprintLibrary_AddGrantedTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// FGameplayTag                   NewGameplayTag                 (Parm)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag"));

	UAbilitySystemBlueprintLibrary_AddGrantedTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// FGameplayTagContainer          NewGameplayTags                (Parm)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags"));

	UAbilitySystemBlueprintLibrary_AddAssetTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm)
// FGameplayTag                   NewGameplayTag                 (Parm)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const FGameplayEffectSpecHandle& SpecHandle, const FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag"));

	UAbilitySystemBlueprintLibrary_AddAssetTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetingLocationInfo SourceLocation                 (ConstParm, Parm, OutParm, ReferenceParm)
// FGameplayAbilityTargetingLocationInfo TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm)
// FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(const FGameplayAbilityTargetingLocationInfo& SourceLocation, const FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations"));

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params params;
	params.SourceLocation = SourceLocation;
	params.TargetLocation = TargetLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// FHitResult                     HitResult                      (Parm)
// FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(const FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult"));

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params params;
	params.HitResult = HitResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<AActor*>                ActorArray                     (Parm, ZeroConstructor)
// bool                           OneTargetPerHandle             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(TArray<AActor*> ActorArray, bool OneTargetPerHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray"));

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params params;
	params.ActorArray = ActorArray;
	params.OneTargetPerHandle = OneTargetPerHandle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// AActor*                        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor"));

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params params;
	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldBlockAbilities          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities"));

	UGameplayAbility_SetShouldBlockOtherAbilities_Params params;
	params.bShouldBlockAbilities = bShouldBlockAbilities;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanBeCanceled                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled"));

	UGameplayAbility_SetCanBeCanceled_Params params;
	params.bCanBeCanceled = bCanBeCanceled;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayTag                   EventTag                       (Parm)
// FGameplayEventData             payload                        (Parm)

void UGameplayAbility::SendGameplayEvent(const FGameplayTag& EventTag, const FGameplayEventData& payload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.SendGameplayEvent"));

	UGameplayAbility_SendGameplayEvent_Params params;
	params.EventTag = EventTag;
	params.payload = payload;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          OverrideBlendOutTime           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageStop"));

	UGameplayAbility_MontageStop_Params params;
	params.OverrideBlendOutTime = OverrideBlendOutTime;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FName                          FromSectionName                (Parm, ZeroConstructor, IsPlainOldData)
// FName                          ToSectionName                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageSetNextSectionName(const FName& FromSectionName, const FName& ToSectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName"));

	UGameplayAbility_MontageSetNextSectionName_Params params;
	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FName                          SectionName                    (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageJumpToSection(const FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MontageJumpToSection"));

	UGameplayAbility_MontageJumpToSection_Params params;
	params.SectionName = SectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// FName                          SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilityTargetingLocationInfo ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent"));

	UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params params;
	params.SocketName = SocketName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// FGameplayAbilityTargetingLocationInfo ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor"));

	UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(UClass* GameplayEffectClass, float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec"));

	UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// FGameplayAbilityActorInfo      ActorInfo                      (Parm)
// FGameplayEventData             payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const FGameplayAbilityActorInfo& ActorInfo, const FGameplayEventData& payload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent"));

	UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.payload = payload;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (Parm)

void UGameplayAbility::K2_RemoveGameplayCue(const FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue"));

	UGameplayAbility_K2_RemoveGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void UGameplayAbility::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility"));

	UGameplayAbility_K2_OnEndAbility_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (Parm)
// FGameplayCueParameters         GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const FGameplayTag& GameplayCueTag, const FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams"));

	UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (Parm)
// FGameplayEffectContextHandle   Context                        (Parm)

void UGameplayAbility::K2_ExecuteGameplayCue(const FGameplayTag& GameplayCueTag, const FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue"));

	UGameplayAbility_K2_ExecuteGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (Native, Protected, BlueprintCallable)

void UGameplayAbility::K2_EndAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_EndAbility"));

	UGameplayAbility_K2_EndAbility_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGameplayAbility::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitExecute"));

	UGameplayAbility_K2_CommitExecute_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost"));

	UGameplayAbility_K2_CommitAbilityCost_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown"));

	UGameplayAbility_K2_CommitAbilityCooldown_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CommitAbility"));

	UGameplayAbility_K2_CommitAbility_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost"));

	UGameplayAbility_K2_CheckAbilityCost_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown"));

	UGameplayAbility_K2_CheckAbilityCooldown_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// FGameplayAbilityActorInfo      ActorInfo                      (Parm)
// FGameplayTagContainer          RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CanActivateAbility(const FGameplayAbilityActorInfo& ActorInfo, FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility"));

	UGameplayAbility_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	UObject::ProcessEvent(fn, &params);

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// UGameplayEffect*               GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectToTarget(const FGameplayAbilityTargetDataHandle& TargetData, UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget"));

	UGameplayAbility_K2_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// UGameplayEffect*               GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectToOwner(UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner"));

	UGameplayAbility_K2_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      EffectSpecHandle               (ConstParm, Parm)
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// TArray<FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const FGameplayEffectSpecHandle& EffectSpecHandle, const FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget"));

	UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params params;
	params.EffectSpecHandle = EffectSpecHandle;
	params.TargetData = TargetData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      EffectSpecHandle               (ConstParm, Parm)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner"));

	UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params params;
	params.EffectSpecHandle = EffectSpecHandle;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (Parm)
// FGameplayEffectContextHandle   Context                        (Parm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::K2_AddGameplayCue(const FGameplayTag& GameplayCueTag, const FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue"));

	UGameplayAbility_K2_AddGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// FGameplayEventData             EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayAbility::K2_ActivateAbilityFromEvent(const FGameplayEventData& EventData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent"));

	UGameplayAbility_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGameplayAbility::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility"));

	UGameplayAbility_K2_ActivateAbility_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// USkeletalMeshComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo"));

	UGameplayAbility_GetOwningComponentFromActorInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo"));

	UGameplayAbility_GetOwningActorFromActorInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UGameplayEffect*               GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UGameplayAbility::GetOutgoingGameplayEffectSpec(UGameplayEffect* GameplayEffect, float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec"));

	UGameplayAbility_GetOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UObject*                       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject"));

	UGameplayAbility_GetCurrentSourceObject_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UAnimMontage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetCurrentMontage"));

	UGameplayAbility_GetCurrentMontage_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FGameplayAbilityTargetDataHandle OptionalTargetData             (Parm)
// FGameplayEffectContextHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetContextFromOwner"));

	UGameplayAbility_GetContextFromOwner_Params params;
	params.OptionalTargetData = OptionalTargetData;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo"));

	UGameplayAbility_GetAvatarActorFromActorInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FGameplayAbilityActorInfo      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetActorInfo"));

	UGameplayAbility_GetActorInfo_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayAbility::GetAbilityLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.GetAbilityLevel"));

	UGameplayAbility_GetAbilityLevel_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FName                          InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::EndTaskByInstanceName(const FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName"));

	UGameplayAbility_EndTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FName                          OptionalStateNameToEnd         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::EndAbilityState(const FName& OptionalStateNameToEnd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.EndAbilityState"));

	UGameplayAbility_EndAbilityState_Params params;
	params.OptionalStateNameToEnd = OptionalStateNameToEnd;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FName                          InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndTask                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::ConfirmTaskByInstanceName(const FName& InstanceName, bool bEndTask)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName"));

	UGameplayAbility_ConfirmTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;
	params.bEndTask = bEndTask;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FName                          InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::CancelTaskByInstanceName(const FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName"));

	UGameplayAbility_CancelTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayTagContainer          WithGrantedTags                (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const FGameplayTagContainer& WithGrantedTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags"));

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params params;
	params.WithGrantedTags = WithGrantedTags;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayTagContainer          WithAssetTags                  (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const FGameplayTagContainer& WithAssetTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags"));

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params params;
	params.WithAssetTags = WithAssetTags;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// UClass*                        GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// TArray<FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const FGameplayAbilityTargetDataHandle& TargetData, UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget"));

	UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// UClass*                        GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner"));

	UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        InAbilityToActivate            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilityByClass(UClass* InAbilityToActivate, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass"));

	UAbilitySystemComponent_TryActivateAbilityByClass_Params params;
	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameplayTagContainer          GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag"));

	UAbilitySystemComponent_TryActivateAbilitiesByTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (Final, Native, Public, BlueprintCallable)

void UAbilitySystemComponent::TargetConfirm()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm"));

	UAbilitySystemComponent_TargetConfirm_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (Final, Native, Public, BlueprintCallable)

void UAbilitySystemComponent::TargetCancel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.TargetCancel"));

	UAbilitySystemComponent_TargetCancel_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewInhibit                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited"));

	UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params params;
	params.NewInhibit = NewInhibit;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// FActiveGameplayEffectHandle    ActiveHandle                   (Parm)
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const FActiveGameplayEffectHandle& ActiveHandle, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel"));

	UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params params;
	params.ActiveHandle = ActiveHandle;
	params.NewLevel = NewLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToActivate              (Parm)
// bool                           InputPressed                   (Parm, ZeroConstructor, IsPlainOldData)
// FPredictionKey                 PredictionKey                  (Parm)
// FGameplayEventData             TriggerEventData               (Parm)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData"));

	UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToActivate              (Parm)
// bool                           InputPressed                   (Parm, ZeroConstructor, IsPlainOldData)
// FPredictionKey                 PredictionKey                  (Parm)

void UAbilitySystemComponent::ServerTryActivateAbility(const FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility"));

	UAbilitySystemComponent_ServerTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityHandle                  (Parm)
// FPredictionKey                 AbilityOriginalPredictionKey   (Parm)
// FPredictionKey                 CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey, const FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled"));

	UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityHandle                  (Parm)
// FPredictionKey                 AbilityOriginalPredictionKey   (Parm)
// FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle     (Parm)
// FGameplayTag                   ApplicationTag                 (Parm)
// FPredictionKey                 CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey, const FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const FGameplayTag& ApplicationTag, const FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData"));

	UAbilitySystemComponent_ServerSetReplicatedTargetData_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	params.ApplicationTag = ApplicationTag;
	params.CurrentPredictionKey = CurrentPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilitySpecHandle     AbilityHandle                  (Parm)
// FPredictionKey                 AbilityOriginalPredictionKey   (Parm)
// FPredictionKey                 CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey, const FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent"));

	UAbilitySystemComponent_ServerSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityHandle                  (Parm)

void UAbilitySystemComponent::ServerSetInputReleased(const FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased"));

	UAbilitySystemComponent_ServerSetInputReleased_Params params;
	params.AbilityHandle = AbilityHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityHandle                  (Parm)

void UAbilitySystemComponent::ServerSetInputPressed(const FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed"));

	UAbilitySystemComponent_ServerSetInputPressed_Params params;
	params.AbilityHandle = AbilityHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToEnd                   (Parm)
// FGameplayAbilityActivationInfo ActivationInfo                 (Parm)
// FPredictionKey                 PredictionKey                  (Parm)

void UAbilitySystemComponent::ServerEndAbility(const FGameplayAbilitySpecHandle& AbilityToEnd, const FGameplayAbilityActivationInfo& ActivationInfo, const FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility"));

	UAbilitySystemComponent_ServerEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// UAnimMontage*                  ClientAnimMontage              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClientPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// FName                          NextSectionName                (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, const FName& SectionName, const FName& NextSectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName"));

	UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.ClientPosition = ClientPosition;
	params.SectionName = SectionName;
	params.NextSectionName = NextSectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// UAnimMontage*                  ClientAnimMontage              (Parm, ZeroConstructor, IsPlainOldData)
// FName                          SectionName                    (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, const FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName"));

	UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.SectionName = SectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToCancel                (Parm)
// FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ServerCancelAbility(const FGameplayAbilitySpecHandle& AbilityToCancel, const FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility"));

	UAbilitySystemComponent_ServerCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData)
// UAbilitySystemComponent*       InstigatorAbilitySystemComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(UClass* GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect"));

	UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params params;
	params.GameplayEffect = GameplayEffect;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// FActiveGameplayEffectHandle    Handle                         (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect"));

	UAbilitySystemComponent_RemoveActiveGameplayEffect_Params params;
	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FGameplayTagContainer          Tags                           (Parm)

void UAbilitySystemComponent::RemoveActiveEffectsWithTags(const FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags"));

	UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params params;
	params.Tags = Tags;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage"));

	UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
// (Final, Native, Public)

void UAbilitySystemComponent::OnRep_PredictionKey()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey"));

	UAbilitySystemComponent_OnRep_PredictionKey_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (Final, Native, Public)

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor"));

	UAbilitySystemComponent_OnRep_OwningActor_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_GameplayEffects()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects"));

	UAbilitySystemComponent_OnRep_GameplayEffects_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities"));

	UAbilitySystemComponent_OnRep_ActivateAbilities_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (ConstParm, Parm)
// FPredictionKey                 PredictionKey                  (Parm)
// FGameplayCueParameters         GameplayCueParameters          (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const FGameplayTag& GameplayCueTag, const FPredictionKey& PredictionKey, const FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams"));

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// FGameplayEffectSpecForRPC      Spec                           (ConstParm, Parm)
// FPredictionKey                 PredictionKey                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const FGameplayEffectSpecForRPC& Spec, const FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec"));

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (ConstParm, Parm)
// FPredictionKey                 PredictionKey                  (Parm)
// FGameplayEffectContextHandle   EffectContext                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const FGameplayTag& GameplayCueTag, const FPredictionKey& PredictionKey, const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted"));

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// FGameplayEffectSpecForRPC      Spec                           (ConstParm, Parm, ReferenceParm)
// FPredictionKey                 PredictionKey                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const FGameplayEffectSpecForRPC& Spec, const FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec"));

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (ConstParm, Parm)
// FPredictionKey                 PredictionKey                  (Parm)
// FGameplayEffectContextHandle   EffectContext                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const FGameplayTag& GameplayCueTag, const FPredictionKey& PredictionKey, const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded"));

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UClass*                        GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectContextHandle   Context                        (Parm)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(UClass* GameplayEffectClass, float Level, const FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec"));

	UAbilitySystemComponent_MakeOutgoingSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        Attributes                     (Parm, ZeroConstructor, IsPlainOldData)
// UDataTable*                    DataTable                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::K2_InitStats(UClass* Attributes, UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats"));

	UAbilitySystemComponent_K2_InitStats_Params params;
	params.Attributes = Attributes;
	params.DataTable = DataTable;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UGameplayEffect*               GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData)
// UAbilitySystemComponent*       Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectContextHandle   Context                        (Parm)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToTarget(UGameplayEffect* GameplayEffect, UAbilitySystemComponent* Target, float Level, const FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget"));

	UAbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UGameplayEffect*               GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToSelf(UGameplayEffect* GameplayEffect, float Level, const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf"));

	UAbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FGameplayTag                   GameplayCueTag                 (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::IsGameplayCueActive(const FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive"));

	UAbilitySystemComponent_IsGameplayCueActive_Params params;
	params.GameplayCueTag = GameplayCueTag;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited"));

	UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// UGameplayEffect*               GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectSpecHandle      ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectSpecHandle UAbilitySystemComponent::GetOutgoingSpec(UGameplayEffect* GameplayEffect, float Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec"));

	UAbilitySystemComponent_GetOutgoingSpec_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FActiveGameplayEffectHandle    Handle                         (Parm)
// FGameplayAttribute             Attribute                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const FActiveGameplayEffectHandle& Handle, const FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude"));

	UAbilitySystemComponent_GetGameplayEffectMagnitude_Params params;
	params.Handle = Handle;
	params.Attribute = Attribute;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// UClass*                        SourceGameplayEffect           (Parm, ZeroConstructor, IsPlainOldData)
// UAbilitySystemComponent*       OptionalInstigatorFilterComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemComponent::GetGameplayEffectCount(UClass* SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount"));

	UAbilitySystemComponent_GetGameplayEffectCount_Params params;
	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FGameplayEffectContextHandle   ReturnValue                    (Parm, OutParm, ReturnParm)

FGameplayEffectContextHandle UAbilitySystemComponent::GetEffectContext()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.GetEffectContext"));

	UAbilitySystemComponent_GetEffectContext_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToActivate              (Parm)

void UAbilitySystemComponent::ClientTryActivateAbility(const FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility"));

	UAbilitySystemComponent_ClientTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilitySpecHandle     AbilityHandle                  (Parm)
// FPredictionKey                 AbilityOriginalPredictionKey   (Parm)

void UAbilitySystemComponent::ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const FGameplayAbilitySpecHandle& AbilityHandle, const FPredictionKey& AbilityOriginalPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent"));

	UAbilitySystemComponent_ClientSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToEnd                   (Parm)
// FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ClientEndAbility(const FGameplayAbilitySpecHandle& AbilityToEnd, const FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility"));

	UAbilitySystemComponent_ClientEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToCancel                (Parm)
// FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ClientCancelAbility(const FGameplayAbilitySpecHandle& AbilityToCancel, const FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility"));

	UAbilitySystemComponent_ClientCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToActivate              (Parm)
// FPredictionKey                 PredictionKey                  (Parm)
// FGameplayEventData             TriggerEventData               (Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const FGameplayAbilitySpecHandle& AbilityToActivate, const FPredictionKey& PredictionKey, const FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData"));

	UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToActivate              (Parm)
// FPredictionKey                 PredictionKey                  (Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const FGameplayAbilitySpecHandle& AbilityToActivate, const FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed"));

	UAbilitySystemComponent_ClientActivateAbilitySucceed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// FGameplayAbilitySpecHandle     AbilityToActivate              (Parm)
// int16_t                        PredictionKey                  (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed"));

	UAbilitySystemComponent_ClientActivateAbilityFailed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// UAbilitySystemComponent*       Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectContextHandle   Context                        (Parm)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(UClass* GameplayEffectClass, UAbilitySystemComponent* Target, float Level, const FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget"));

	UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UClass*                        GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayEffectContextHandle   EffectContext                  (Parm)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(UClass* GameplayEffectClass, float Level, const FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf"));

	UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.EffectContext = EffectContext;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm, OutParm, ReferenceParm)
// UAbilitySystemComponent*       Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(UAbilitySystemComponent* Target, FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget"));

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params params;
	params.Target = Target;

	UObject::ProcessEvent(fn, &params);

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGameplayEffectSpecHandle      SpecHandle                     (Parm, OutParm, ReferenceParm)
// FActiveGameplayEffectHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf"));

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params params;

	UObject::ProcessEvent(fn, &params);

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature"));

	UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            InputID                        (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int InputID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature"));

	UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params params;
	params.InputID = InputID;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (Exec, Native, Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts"));

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (Exec, Native, Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns"));

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// UCurveFloat*                   OptionalInterpolationCurve     (Parm, ZeroConstructor, IsPlainOldData)
// UCurveVector*                  OptionalVectorInterpolationCurve (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_MoveToLocation*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(UObject* WorldContextObject, const FName& TaskInstanceName, const FVector& Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation"));

	UAbilityTask_MoveToLocation_MoveToLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.Duration = Duration;
	params.OptionalInterpolationCurve = OptionalInterpolationCurve;
	params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAbilityTaskNetSyncType> SyncType                       (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_NetworkSyncPoint* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(UObject* WorldContextObject, TEnumAsByte<EAbilityTaskNetSyncType> SyncType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync"));

	UAbilityTask_NetworkSyncPoint_WaitNetSync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SyncType = SyncType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (Final, Native, Public)

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback"));

	UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (Final, Native, Public)

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted"));

	UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (Final, Native, Public)
// Parameters:
// UAnimMontage*                  Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut"));

	UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// UAnimMontage*                  MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// FName                          StartSection                   (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_PlayMontageAndWait* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(UObject* WorldContextObject, const FName& TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, const FName& StartSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy"));

	UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeBetweenActions             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalActionCount               (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_Repeat*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction"));

	UAbilityTask_Repeat_RepeatAction_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TimeBetweenActions = TimeBetweenActions;
	params.TotalActionCount = TotalActionCount;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_SpawnActor*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(UObject* WorldContextObject, const FGameplayAbilityTargetDataHandle& TargetData, UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor"));

	UAbilityTask_SpawnActor_SpawnActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// AActor*                        SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_SpawnActor::FinishSpawningActor(UObject* WorldContextObject, const FGameplayAbilityTargetDataHandle& TargetData, AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor"));

	UAbilityTask_SpawnActor_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_SpawnActor::BeginSpawningActor(UObject* WorldContextObject, const FGameplayAbilityTargetDataHandle& TargetData, UClass* Class, AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor"));

	UAbilityTask_SpawnActor_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FName                          StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndCurrentState               (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_StartAbilityState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(UObject* WorldContextObject, const FName& StateName, bool bEndCurrentState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState"));

	UAbilityTask_StartAbilityState_StartAbilityState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StateName = StateName;
	params.bEndCurrentState = bEndCurrentState;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// FName                          ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const FName& ParamName, const FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector"));

	AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (Event, Public, BlueprintEvent)
// Parameters:
// FName                          ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat"));

	AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged"));

	AGameplayAbilityWorldReticle_OnValidTargetChanged_Params params;
	params.bNewValue = bNewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor"));

	AGameplayAbilityWorldReticle_OnTargetingAnActor_Params params;
	params.bNewValue = bNewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (Event, Public, BlueprintEvent)

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized"));

	AGameplayAbilityWorldReticle_OnParametersInitialized_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFaceIn2D                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource"));

	AGameplayAbilityWorldReticle_FaceTowardSource_Params params;
	params.bFaceIn2D = bFaceIn2D;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (Native, Public)

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting"));

	AGameplayAbilityTargetActor_ConfirmTargeting_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (Native, Public)

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting"));

	AGameplayAbilityTargetActor_CancelTargeting_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// AGameplayAbilityTargetActor*   TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_VisualizeTargeting* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(UObject* WorldContextObject, AGameplayAbilityTargetActor* TargetActor, const FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor"));

	UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetActor = TargetActor;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_VisualizeTargeting* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(UObject* WorldContextObject, UClass* Class, const FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting"));

	UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// AGameplayAbilityTargetActor*   SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(UObject* WorldContextObject, AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor"));

	UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// AGameplayAbilityTargetActor*   SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(UObject* WorldContextObject, UClass* Class, AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor"));

	UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTag                   WithTag                        (Parm)
// FGameplayTag                   WithoutTag                     (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(UObject* WorldContextObject, const FGameplayTag& WithTag, const FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate"));

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (Final, Native, Public)
// Parameters:
// UGameplayAbility*              ActivatedAbility               (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate"));

	UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params params;
	params.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTag                   WithTag                        (Parm)
// FGameplayTag                   WithoutTage                    (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitAbilityCommit* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(UObject* WorldContextObject, const FGameplayTag& WithTag, const FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit"));

	UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTage = WithoutTage;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (Final, Native, Public)
// Parameters:
// UGameplayAbility*              ActivatedAbility               (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit"));

	UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params params;
	params.ActivatedAbility = ActivatedAbility;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAttribute             InAttribute                    (Parm)
// FGameplayTag                   InWithTag                      (Parm)
// FGameplayTag                   InWithoutTag                   (Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InComparisonValue              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitAttributeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(UObject* WorldContextObject, const FGameplayAttribute& InAttribute, const FGameplayTag& InWithTag, const FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison"));

	UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InAttribute = InAttribute;
	params.InWithTag = InWithTag;
	params.InWithoutTag = InWithoutTag;
	params.InComparisonType = InComparisonType;
	params.InComparisonValue = InComparisonValue;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayAttribute             Attribute                      (Parm)
// FGameplayTag                   WithSrcTag                     (Parm)
// FGameplayTag                   WithoutSrcTag                  (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitAttributeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(UObject* WorldContextObject, const FGameplayAttribute& Attribute, const FGameplayTag& WithSrcTag, const FGameplayTag& WithoutSrcTag, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange"));

	UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Attribute = Attribute;
	params.WithSrcTag = WithSrcTag;
	params.WithoutSrcTag = WithoutSrcTag;
	params.TriggerOnce = TriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitCancel*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel"));

	UAbilityTask_WaitCancel_WaitCancel_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback"));

	UAbilityTask_WaitCancel_OnLocalCancelCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback"));

	UAbilityTask_WaitCancel_OnCancelCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitConfirm*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm"));

	UAbilityTask_WaitConfirm_WaitConfirm_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (Final, Native, Public)
// Parameters:
// UGameplayAbility*              Ability                        (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitConfirm::OnConfirmCallback(UGameplayAbility* Ability)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback"));

	UAbilityTask_WaitConfirm_OnConfirmCallback_Params params;
	params.Ability = Ability;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitConfirmCancel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel"));

	UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback"));

	UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback"));

	UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback"));

	UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback"));

	UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitDelay*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(UObject* WorldContextObject, float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay"));

	UAbilityTask_WaitDelay_WaitDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Time = Time;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// UAbilitySystemComponent*       Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FGameplayEffectSpec            SpecApplied                    (ConstParm, Parm, OutParm, ReferenceParm)
// FActiveGameplayEffectHandle    ActiveHandle                   (Parm)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, const FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback"));

	UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params params;
	params.Target = Target;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTargetDataFilterHandle SourceFilter                   (ConstParm, Parm)
// FGameplayTagRequirements       SourceTagRequirements          (Parm)
// FGameplayTagRequirements       TargetTagRequirements          (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(UObject* WorldContextObject, const FGameplayTargetDataFilterHandle& SourceFilter, const FGameplayTagRequirements& SourceTagRequirements, const FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf"));

	UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTargetDataFilterHandle TargetFilter                   (ConstParm, Parm)
// FGameplayTagRequirements       SourceTagRequirements          (Parm)
// FGameplayTagRequirements       TargetTagRequirements          (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(UObject* WorldContextObject, const FGameplayTargetDataFilterHandle& TargetFilter, const FGameplayTagRequirements& SourceTagRequirements, const FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget"));

	UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetFilter = TargetFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FActiveGameplayEffectHandle    Handle                         (Parm)
// UAbilityTask_WaitGameplayEffectRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(UObject* WorldContextObject, const FActiveGameplayEffectHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved"));

	UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (Final, Native, Public)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved"));

	UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (Native, Public)
// Parameters:
// FGameplayTag                   Tag                            (ConstParm, Parm)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const FGameplayTag& Tag, int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback"));

	UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTag                   Tag                            (Parm)
// AActor*                        OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(UObject* WorldContextObject, const FGameplayTag& Tag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd"));

	UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayTag                   Tag                            (Parm)
// AActor*                        OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(UObject* WorldContextObject, const FGameplayTag& Tag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove"));

	UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestAlreadyPressed            (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitInputPress*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(UObject* WorldContextObject, bool bTestAlreadyPressed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress"));

	UAbilityTask_WaitInputPress_WaitInputPress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyPressed = bTestAlreadyPressed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (Final, Native, Public)

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback"));

	UAbilityTask_WaitInputPress_OnPressCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestAlreadyReleased           (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitInputRelease* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(UObject* WorldContextObject, bool bTestAlreadyReleased)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease"));

	UAbilityTask_WaitInputRelease_WaitInputRelease_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyReleased = bTestAlreadyReleased;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (Final, Native, Public)

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback"));

	UAbilityTask_WaitInputRelease_OnReleaseCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// ACharacter*                    Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange"));

	UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitMovementModeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(UObject* WorldContextObject, TEnumAsByte<EMovementMode> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange"));

	UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewMode = NewMode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitOverlap*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap"));

	UAbilityTask_WaitOverlap_WaitForOverlap_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilityTask_WaitOverlap::OnOverlapCallback(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback"));

	UAbilityTask_WaitOverlap_OnOverlapCallback_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// UPrimitiveComponent*           OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FVector                        NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// FHitResult                     Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilityTask_WaitOverlap::OnHitCallback(AActor* OtherActor, UPrimitiveComponent* OtherComp, const FVector& NormalImpulse, const FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback"));

	UAbilityTask_WaitOverlap_OnHitCallback_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (Parm, ZeroConstructor, IsPlainOldData)
// AGameplayAbilityTargetActor*   TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitTargetData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(UObject* WorldContextObject, const FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, AGameplayAbilityTargetActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor"));

	UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FName                          TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitTargetData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(UObject* WorldContextObject, const FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData"));

	UAbilityTask_WaitTargetData_WaitTargetData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.Class = Class;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (Final, Native, Public)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback"));

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Public)
// Parameters:
// FGameplayAbilityTargetDataHandle Data                           (Parm)
// FGameplayTag                   ActivationTag                  (Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, const FGameplayTag& ActivationTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback"));

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params params;
	params.Data = Data;
	params.ActivationTag = ActivationTag;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (Final, Native, Public)
// Parameters:
// FGameplayAbilityTargetDataHandle Data                           (Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback"));

	UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (Final, Native, Public)
// Parameters:
// FGameplayAbilityTargetDataHandle Data                           (Parm)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback"));

	UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// AGameplayAbilityTargetActor*   SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitTargetData::FinishSpawningActor(UObject* WorldContextObject, AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor"));

	UAbilityTask_WaitTargetData_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        Class                          (Parm, ZeroConstructor, IsPlainOldData)
// AGameplayAbilityTargetActor*   SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(UObject* WorldContextObject, UClass* Class, AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor"));

	UAbilityTask_WaitTargetData_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumMagnitude               (Parm, ZeroConstructor, IsPlainOldData)
// UAbilityTask_WaitVelocityChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(UObject* WorldContextObject, const FVector& Direction, float MinimumMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange"));

	UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Direction = Direction;
	params.MinimumMagnitude = MinimumMagnitude;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive"));

	AGameplayCueNotify_Actor_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove"));

	AGameplayCueNotify_Actor_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (Native, Public)

void AGameplayCueNotify_Actor::OnOwnerDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed"));

	AGameplayCueNotify_Actor_OnOwnerDestroyed_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute"));

	AGameplayCueNotify_Actor_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive"));

	AGameplayCueNotify_Actor_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue"));

	AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::WhileActive(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive"));

	UGameplayCueNotify_Static_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnRemove(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove"));

	UGameplayCueNotify_Static_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnExecute(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute"));

	UGameplayCueNotify_Static_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnActive(AActor* MyTarget, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.OnActive"));

	UGameplayCueNotify_Static_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// AActor*                        MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// FGameplayCueParameters         Parameters                     (Parm)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue"));

	UGameplayCueNotify_Static_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	UObject::ProcessEvent(fn, &params);
}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// FGameplayEffectCustomExecutionParameters ExecutionParams                (ConstParm, Parm, OutParm, ReferenceParm)
// FGameplayEffectCustomExecutionOutput OutExecutionOutput             (Parm, OutParm)

void UGameplayEffectExecutionCalculation::Execute(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute"));

	UGameplayEffectExecutionCalculation_Execute_Params params;
	params.ExecutionParams = ExecutionParams;

	UObject::ProcessEvent(fn, &params);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = params.OutExecutionOutput;
}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// FGameplayEffectSpec            Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const FGameplayEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude"));

	UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params params;
	params.Spec = Spec;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (Final, Native, Protected)
// Parameters:
// FGameplayTag                   Tag                            (ConstParm, Parm)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)
// UAbilitySystemComponent*       ASC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTagReponseTable::TagResponseEvent(const FGameplayTag& Tag, int NewCount, UAbilitySystemComponent* ASC, int Idx)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent"));

	UGameplayTagReponseTable_TagResponseEvent_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;
	params.ASC = ASC;
	params.Idx = Idx;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
