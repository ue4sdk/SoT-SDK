// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Wind_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wind.WindInterface.UnregisterWindZone
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UWindZoneInterface> InWindZone                     (Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::UnregisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.UnregisterWindZone");

	UWindInterface_UnregisterWindZone_Params params;
	params.InWindZone = InWindZone;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.TriggerChange
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ChangeInstantly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::TriggerChange(bool ChangeInstantly)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.TriggerChange");

	UWindInterface_TriggerChange_Params params;
	params.ChangeInstantly = ChangeInstantly;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetParams
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWindServiceParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UWindInterface::SetParams(const struct FWindServiceParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetParams");

	UWindInterface_SetParams_Params params;
	params.Params = Params;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindVector
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWindVector                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWindInterface::SetGlobalWindVector(const struct FVector& InWindVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindVector");

	UWindInterface_SetGlobalWindVector_Params params;
	params.InWindVector = InWindVector;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindMagnitude
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          InWindMagnitude                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::SetGlobalWindMagnitude(float InWindMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindMagnitude");

	UWindInterface_SetGlobalWindMagnitude_Params params;
	params.InWindMagnitude = InWindMagnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindDirection
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWindDirection                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWindInterface::SetGlobalWindDirection(const struct FVector& InWindDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindDirection");

	UWindInterface_SetGlobalWindDirection_Params params;
	params.InWindDirection = InWindDirection;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                          InAngle                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::SetGlobalWindAngle(float InAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.SetGlobalWindAngle");

	UWindInterface_SetGlobalWindAngle_Params params;
	params.InAngle = InAngle;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.RegisterWindZone
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UWindZoneInterface> InWindZone                     (Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::RegisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.RegisterWindZone");

	UWindInterface_RegisterWindZone_Params params;
	params.InWindZone = InWindZone;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.GetWindZoneAtLocation
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TScriptInterface<class UWindZoneInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UWindZoneInterface> UWindInterface::GetWindZoneAtLocation(const struct FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindZoneAtLocation");

	UWindInterface_GetWindZoneAtLocation_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWindInterface::GetWindVector(const struct FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindVector");

	UWindInterface_GetWindVector_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindMagnitude
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWindInterface::GetWindMagnitude(const struct FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindMagnitude");

	UWindInterface_GetWindMagnitude_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindDirection
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWindInterface::GetWindDirection(const struct FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindDirection");

	UWindInterface_GetWindDirection_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindAngle
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWindInterface::GetWindAngle(const struct FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetWindAngle");

	UWindInterface_GetWindAngle_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetTurbulenceForTrees
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWindZoneTurbulence     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWindZoneTurbulence UWindInterface::GetTurbulenceForTrees(const struct FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetTurbulenceForTrees");

	UWindInterface_GetTurbulenceForTrees_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetTurbulence
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWindZoneTurbulence     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWindZoneTurbulence UWindInterface::GetTurbulence(const struct FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetTurbulence");

	UWindInterface_GetTurbulence_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetMaxWindMagnitude
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWindInterface::GetMaxWindMagnitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindInterface.GetMaxWindMagnitude");

	UWindInterface_GetMaxWindMagnitude_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetWindZoneParams
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FWindZoneParams         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWindZoneParams UWindZoneInterface::GetWindZoneParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetWindZoneParams");

	UWindZoneInterface_GetWindZoneParams_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetWindZoneLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWindZoneInterface::GetWindZoneLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetWindZoneLocation");

	UWindZoneInterface_GetWindZoneLocation_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetTurbulence
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWindZoneTurbulence     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWindZoneTurbulence UWindZoneInterface::GetTurbulence(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindZoneInterface.GetTurbulence");

	UWindZoneInterface_GetTurbulence_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindFunctions.SetDefaultWindBlowingNorth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UWindFunctions::STATIC_SetDefaultWindBlowingNorth(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindFunctions.SetDefaultWindBlowingNorth");

	UWindFunctions_SetDefaultWindBlowingNorth_Params params;
	params.WorldContextObject = WorldContextObject;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindFunctions.GetWindAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldPosition                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWindFunctions::STATIC_GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindFunctions.GetWindAtLocation");

	UWindFunctions_GetWindAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorldPosition = WorldPosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindService.OnRep_WindMagnitude
// (Final, Native, Private)

void AWindService::OnRep_WindMagnitude()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindService.OnRep_WindMagnitude");

	AWindService_OnRep_WindMagnitude_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindService.OnRep_WindAngle
// (Final, Native, Private)

void AWindService::OnRep_WindAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindService.OnRep_WindAngle");

	AWindService_OnRep_WindAngle_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindService.GetWindParams
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWindServiceParams      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWindServiceParams AWindService::GetWindParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindService.GetWindParams");

	AWindService_GetWindParams_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWindServiceParams      Params1                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FWindServiceParams      Params2                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWindServiceParamsFunctionLibrary::STATIC_AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual");

	UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params params;
	params.Params1 = Params1;
	params.Params2 = Params2;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
