// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Lantern.BP_Lantern_C.CreateLanternDynamicMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::CreateLanternDynamicMaterial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.CreateLanternDynamicMaterial"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::OnAttachThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::OnAttachFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.TurnOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.TurnOff"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.TurnOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::TurnOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.TurnOn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::ReceiveWieldFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::ReceiveWieldThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Lantern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveLightChange
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::ReceiveLightChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveLightChange"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.TriggerGlow
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::TriggerGlow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.TriggerGlow"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           SkipFlameColourTransition      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_C::PostMeshChangedBPEvent(bool SkipFlameColourTransition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent"));

	struct
	{
		bool                           SkipFlameColourTransition;
	} params;

	params.SkipFlameColourTransition = SkipFlameColourTransition;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveFlameData
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           WantChangeAnimation            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_C::ReceiveFlameData(bool WantChangeAnimation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveFlameData"));

	struct
	{
		bool                           WantChangeAnimation;
	} params;

	params.WantChangeAnimation = WantChangeAnimation;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_C::ExecuteUbergraph_BP_Lantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ExecuteUbergraph_BP_Lantern"));

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
