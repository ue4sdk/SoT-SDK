// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Lantern_parameters.hpp"

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

	ABP_Lantern_C_CreateLanternDynamicMaterial_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::OnAttachThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.OnAttachThirdPerson"));

	ABP_Lantern_C_OnAttachThirdPerson_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::OnAttachFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.OnAttachFirstPerson"));

	ABP_Lantern_C_OnAttachFirstPerson_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.TurnOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.TurnOff"));

	ABP_Lantern_C_TurnOff_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.TurnOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::TurnOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.TurnOn"));

	ABP_Lantern_C_TurnOn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.UserConstructionScript"));

	ABP_Lantern_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::ReceiveWieldFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveWieldFirstPerson"));

	ABP_Lantern_C_ReceiveWieldFirstPerson_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::ReceiveWieldThirdPerson()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveWieldThirdPerson"));

	ABP_Lantern_C_ReceiveWieldThirdPerson_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Lantern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveBeginPlay"));

	ABP_Lantern_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.ReceiveLightChange
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::ReceiveLightChange()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.ReceiveLightChange"));

	ABP_Lantern_C_ReceiveLightChange_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.TriggerGlow
// (Event, Protected, BlueprintEvent)

void ABP_Lantern_C::TriggerGlow()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.TriggerGlow"));

	ABP_Lantern_C_TriggerGlow_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           SkipFlameColourTransition      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lantern_C::PostMeshChangedBPEvent(bool SkipFlameColourTransition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Lantern.BP_Lantern_C.PostMeshChangedBPEvent"));

	ABP_Lantern_C_PostMeshChangedBPEvent_Params params;
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

	ABP_Lantern_C_ReceiveFlameData_Params params;
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

	ABP_Lantern_C_ExecuteUbergraph_BP_Lantern_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
