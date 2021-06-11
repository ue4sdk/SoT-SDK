// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaRigging_classes.hpp"

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

	struct
	{
		bool                           Underwater;
	} params;

	params.Underwater = Underwater;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.InstancedRopeComponent.SetRopes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FInstancedRopeParams> InRopes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UInstancedRopeComponent::SetRopes(TArray<struct FInstancedRopeParams> InRopes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.InstancedRopeComponent.SetRopes"));

	struct
	{
		TArray<struct FInstancedRopeParams> InRopes;
	} params;

	params.InRopes = InRopes;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InSocketSource                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URiggingSystemComponent::SetSocketLookupSource(class AActor* InSocketSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource"));

	struct
	{
		class AActor*                  InSocketSource;
	} params;

	params.InSocketSource = InSocketSource;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InLineGroupName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            InLineOffset                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int URiggingSystemComponent::ConvertLineToRopeIndex(const struct FName& InLineGroupName, int InLineOffset)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex"));

	struct
	{
		struct FName                   InLineGroupName;
		int                            InLineOffset;
		int                            ReturnValue;
	} params;

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

	struct
	{
		float                          InUVOffset;
	} params;

	params.InUVOffset = InUVOffset;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaRigging.RopeInterface.SetRopeEndpoints
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InWorldSpaceStart              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InWorldSpaceEnd                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void URopeInterface::SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaRigging.RopeInterface.SetRopeEndpoints"));

	struct
	{
		struct FVector                 InWorldSpaceStart;
		struct FVector                 InWorldSpaceEnd;
	} params;

	params.InWorldSpaceStart = InWorldSpaceStart;
	params.InWorldSpaceEnd = InWorldSpaceEnd;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
