// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Wind_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wind.WindZoneInterface.GetWindZoneParams
// (Native, Public, BlueprintCallable)
// Parameters:
// FWindZoneParams                ReturnValue                    (Parm, OutParm, ReturnParm)

FWindZoneParams UWindZoneInterface::GetWindZoneParams()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetWindZoneParams"));

	UWindZoneInterface_GetWindZoneParams_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetWindZoneLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector2D                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector2D UWindZoneInterface::GetWindZoneLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetWindZoneLocation"));

	UWindZoneInterface_GetWindZoneLocation_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetTurbulence
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FWindZoneTurbulence            ReturnValue                    (Parm, OutParm, ReturnParm)

FWindZoneTurbulence UWindZoneInterface::GetTurbulence(const FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetTurbulence"));

	UWindZoneInterface_GetTurbulence_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.UnregisterWindZone
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UWindZoneInterface> InWindZone                     (Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::UnregisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.UnregisterWindZone"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.TriggerChange"));

	UWindInterface_TriggerChange_Params params;
	params.ChangeInstantly = ChangeInstantly;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetParams
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FWindServiceParams             Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UWindInterface::SetParams(const FWindServiceParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetParams"));

	UWindInterface_SetParams_Params params;
	params.Params = Params;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindVector
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        InWindVector                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWindInterface::SetGlobalWindVector(const FVector& InWindVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindVector"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindMagnitude"));

	UWindInterface_SetGlobalWindMagnitude_Params params;
	params.InWindMagnitude = InWindMagnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindDirection
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// FVector                        InWindDirection                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWindInterface::SetGlobalWindDirection(const FVector& InWindDirection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindDirection"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindAngle"));

	UWindInterface_SetGlobalWindAngle_Params params;
	params.InAngle = InAngle;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetCustomMode
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InCustomMode                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::SetCustomMode(bool InCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetCustomMode"));

	UWindInterface_SetCustomMode_Params params;
	params.InCustomMode = InCustomMode;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.RegisterWindZone
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UWindZoneInterface> InWindZone                     (Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::RegisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.RegisterWindZone"));

	UWindInterface_RegisterWindZone_Params params;
	params.InWindZone = InWindZone;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.GetWindZoneAtLocation
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TScriptInterface<class UWindZoneInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UWindZoneInterface> UWindInterface::GetWindZoneAtLocation(const FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindZoneAtLocation"));

	UWindInterface_GetWindZoneAtLocation_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindVector
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UWindInterface::GetWindVector(const FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindVector"));

	UWindInterface_GetWindVector_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindMagnitude
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWindInterface::GetWindMagnitude(const FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindMagnitude"));

	UWindInterface_GetWindMagnitude_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindDirection
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UWindInterface::GetWindDirection(const FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindDirection"));

	UWindInterface_GetWindDirection_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetWindAngle
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWindInterface::GetWindAngle(const FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindAngle"));

	UWindInterface_GetWindAngle_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetTurbulenceForTrees
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FWindZoneTurbulence            ReturnValue                    (Parm, OutParm, ReturnParm)

FWindZoneTurbulence UWindInterface::GetTurbulenceForTrees(const FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetTurbulenceForTrees"));

	UWindInterface_GetTurbulenceForTrees_Params params;
	params.SamplePosition = SamplePosition;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindInterface.GetTurbulence
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FVector                        SamplePosition                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FWindZoneTurbulence            ReturnValue                    (Parm, OutParm, ReturnParm)

FWindZoneTurbulence UWindInterface::GetTurbulence(const FVector& SamplePosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetTurbulence"));

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetMaxWindMagnitude"));

	UWindInterface_GetMaxWindMagnitude_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindFunctions.SetDefaultWindBlowingNorth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UWindFunctions::SetDefaultWindBlowingNorth(UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindFunctions.SetDefaultWindBlowingNorth"));

	UWindFunctions_SetDefaultWindBlowingNorth_Params params;
	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Wind.WindFunctions.GetWindAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        WorldPosition                  (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector UWindFunctions::GetWindAtLocation(UObject* WorldContextObject, const FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindFunctions.GetWindAtLocation"));

	UWindFunctions_GetWindAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WorldPosition = WorldPosition;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindService.OnRep_WindMagnitude
// (Final, Native, Private)

void AWindService::OnRep_WindMagnitude()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.OnRep_WindMagnitude"));

	AWindService_OnRep_WindMagnitude_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindService.OnRep_WindAngle
// (Final, Native, Private)

void AWindService::OnRep_WindAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.OnRep_WindAngle"));

	AWindService_OnRep_WindAngle_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindService.GetWindParams
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FWindServiceParams             ReturnValue                    (Parm, OutParm, ReturnParm)

FWindServiceParams AWindService::GetWindParams()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.GetWindParams"));

	AWindService_GetWindParams_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FWindServiceParams             Params1                        (ConstParm, Parm, OutParm, ReferenceParm)
// FWindServiceParams             Params2                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWindServiceParamsFunctionLibrary::AreWindServiceParamsEqual(const FWindServiceParams& Params1, const FWindServiceParams& Params2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual"));

	UWindServiceParamsFunctionLibrary_AreWindServiceParamsEqual_Params params;
	params.Params1 = Params1;
	params.Params2 = Params2;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
