// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaRigging_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaRigging.InstancedRopeComponent.SetUnderwater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Underwater                     (Parm, ZeroConstructor, IsPlainOldData)

void UInstancedRopeComponent::SetUnderwater(bool Underwater)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.InstancedRopeComponent.SetUnderwater"));

	UInstancedRopeComponent_SetUnderwater_Params params;
	params.Underwater = Underwater;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.InstancedRopeComponent.SetRopes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<FInstancedRopeParams>   InRopes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInstancedRopeComponent::SetRopes(TArray<FInstancedRopeParams> InRopes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.InstancedRopeComponent.SetRopes"));

	UInstancedRopeComponent_SetRopes_Params params;
	params.InRopes = InRopes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        InSocketSource                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URiggingSystemComponent::SetSocketLookupSource(AActor* InSocketSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource"));

	URiggingSystemComponent_SetSocketLookupSource_Params params;
	params.InSocketSource = InSocketSource;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FName                          InLineGroupName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InLineOffset                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URiggingSystemComponent::ConvertLineToRopeIndex(const FName& InLineGroupName, int InLineOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex"));

	URiggingSystemComponent_ConvertLineToRopeIndex_Params params;
	params.InLineGroupName = InLineGroupName;
	params.InLineOffset = InLineOffset;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaRigging.RopeInterface.SetRopeUVOffset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InUVOffset                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URopeInterface::SetRopeUVOffset(float InUVOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.RopeInterface.SetRopeUVOffset"));

	URopeInterface_SetRopeUVOffset_Params params;
	params.InUVOffset = InUVOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.RopeInterface.SetRopeEndpoints
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        InWorldSpaceStart              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FVector                        InWorldSpaceEnd                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URopeInterface::SetRopeEndpoints(const FVector& InWorldSpaceStart, const FVector& InWorldSpaceEnd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.RopeInterface.SetRopeEndpoints"));

	URopeInterface_SetRopeEndpoints_Params params;
	params.InWorldSpaceStart = InWorldSpaceStart;
	params.InWorldSpaceEnd = InWorldSpaceEnd;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
