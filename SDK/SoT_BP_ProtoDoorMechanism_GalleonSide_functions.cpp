// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ProtoDoorMechanism_GalleonSide_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonSide_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonSide_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStarted
// (Event, Protected, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStopped
// (Event, Protected, BlueprintEvent)

void ABP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStopped()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.Blueprint_OnStopped"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_ProtoDoorMechanism_GalleonSide_C::BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__ClosedVolume_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_ProtoDoorMechanism_GalleonSide_C::BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.BndEvt__OpenVolume_K2Node_ComponentBoundEvent_50_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProtoDoorMechanism_GalleonSide_C::ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ProtoDoorMechanism_GalleonSide.BP_ProtoDoorMechanism_GalleonSide_C.ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide"));

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
