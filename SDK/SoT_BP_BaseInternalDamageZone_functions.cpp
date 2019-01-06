// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BaseInternalDamageZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.OnRepairMounted
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseInternalDamageZone_C::OnRepairMounted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.OnRepairMounted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.GetRepairMountLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         MountLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   MountSocket                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseInternalDamageZone_C::GetRepairMountLocation(class USceneComponent** MountLocation, struct FName* MountSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.GetRepairMountLocation");

	struct
	{
		class USceneComponent*         MountLocation;
		struct FName                   MountSocket;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (MountLocation != nullptr)
		*MountLocation = params.MountLocation;
	if (MountSocket != nullptr)
		*MountSocket = params.MountSocket;

	return params.ReturnValue;
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ShouldDrawTooltipInWorldSpace
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseInternalDamageZone_C::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ShouldDrawTooltipInWorldSpace");

	struct
	{
		class AActor*                  InInteractor;
		struct FVector                 DesiredTooltipWorldPosition;
		bool                           ReturnValue;
	} params;

	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseInternalDamageZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseInternalDamageZone_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ExecuteUbergraph_BP_BaseInternalDamageZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseInternalDamageZone_C::ExecuteUbergraph_BP_BaseInternalDamageZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseInternalDamageZone.BP_BaseInternalDamageZone_C.ExecuteUbergraph_BP_BaseInternalDamageZone");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
