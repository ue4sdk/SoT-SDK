// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Wind_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wind.WindZoneInterface.GetWindZoneParams
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FWindZoneParams         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWindZoneParams UWindZoneInterface::GetWindZoneParams()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetWindZoneParams"));

	struct
	{
		struct FWindZoneParams         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindZoneInterface.GetWindZoneLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UWindZoneInterface::GetWindZoneLocation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetWindZoneLocation"));

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindZoneInterface.GetTurbulence"));

	struct
	{
		struct FVector                 Location;
		struct FWindZoneTurbulence     ReturnValue;
	} params;

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

	struct
	{
		TScriptInterface<class UWindZoneInterface> InWindZone;
	} params;

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

	struct
	{
		bool                           ChangeInstantly;
	} params;

	params.ChangeInstantly = ChangeInstantly;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetParams
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FWindServiceParams      Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UWindInterface::SetParams(const struct FWindServiceParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetParams"));

	struct
	{
		struct FWindServiceParams      Params;
	} params;

	params.Params = Params;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindVector
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWindVector                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWindInterface::SetGlobalWindVector(const struct FVector& InWindVector)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindVector"));

	struct
	{
		struct FVector                 InWindVector;
	} params;

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

	struct
	{
		float                          InWindMagnitude;
	} params;

	params.InWindMagnitude = InWindMagnitude;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.SetGlobalWindDirection
// (BlueprintAuthorityOnly, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InWindDirection                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWindInterface::SetGlobalWindDirection(const struct FVector& InWindDirection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.SetGlobalWindDirection"));

	struct
	{
		struct FVector                 InWindDirection;
	} params;

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

	struct
	{
		float                          InAngle;
	} params;

	params.InAngle = InAngle;

	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindInterface.RegisterWindZone
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UWindZoneInterface> InWindZone                     (Parm, ZeroConstructor, IsPlainOldData)

void UWindInterface::RegisterWindZone(const TScriptInterface<class UWindZoneInterface>& InWindZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.RegisterWindZone"));

	struct
	{
		TScriptInterface<class UWindZoneInterface> InWindZone;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindZoneAtLocation"));

	struct
	{
		struct FVector                 SamplePosition;
		TScriptInterface<class UWindZoneInterface> ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindVector"));

	struct
	{
		struct FVector                 SamplePosition;
		struct FVector                 ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindMagnitude"));

	struct
	{
		struct FVector                 SamplePosition;
		float                          ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindDirection"));

	struct
	{
		struct FVector                 SamplePosition;
		struct FVector                 ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetWindAngle"));

	struct
	{
		struct FVector                 SamplePosition;
		float                          ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetTurbulenceForTrees"));

	struct
	{
		struct FVector                 SamplePosition;
		struct FWindZoneTurbulence     ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindInterface.GetTurbulence"));

	struct
	{
		struct FVector                 SamplePosition;
		struct FWindZoneTurbulence     ReturnValue;
	} params;

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

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindFunctions.SetDefaultWindBlowingNorth
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UWindFunctions::SetDefaultWindBlowingNorth(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindFunctions.SetDefaultWindBlowingNorth"));

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Wind.WindFunctions.GetWindAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldPosition                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UWindFunctions::GetWindAtLocation(class UObject* WorldContextObject, const struct FVector& WorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindFunctions.GetWindAtLocation"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 WorldPosition;
		struct FVector                 ReturnValue;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindService.OnRep_WindAngle
// (Final, Native, Private)

void AWindService::OnRep_WindAngle()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.OnRep_WindAngle"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Wind.WindService.GetWindParams
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWindServiceParams      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWindServiceParams AWindService::GetWindParams()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindService.GetWindParams"));

	struct
	{
		struct FWindServiceParams      ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWindServiceParams      Params1                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FWindServiceParams      Params2                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWindServiceParamsFunctionLibrary::AreWindServiceParamsEqual(const struct FWindServiceParams& Params1, const struct FWindServiceParams& Params2)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Wind.WindServiceParamsFunctionLibrary.AreWindServiceParamsEqual"));

	struct
	{
		struct FWindServiceParams      Params1;
		struct FWindServiceParams      Params2;
		bool                           ReturnValue;
	} params;

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
