// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicDensityFogVolume_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_C::BlendParams(float BlendAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams"));

	ABP_DynamicDensityFogVolume_C_BlendParams_Params params;
	params.BlendAmount = BlendAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState
// (BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::OnRep_NextState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState"));

	ABP_DynamicDensityFogVolume_C_OnRep_NextState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript"));

	ABP_DynamicDensityFogVolume_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc
// (BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::StateBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc"));

	ABP_DynamicDensityFogVolume_C_StateBlend__FinishedFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc
// (BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::StateBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc"));

	ABP_DynamicDensityFogVolume_C_StateBlend__UpdateFunc_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay"));

	ABP_DynamicDensityFogVolume_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// UCanvas*                       Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_C::UpdateCanvas(UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas"));

	ABP_DynamicDensityFogVolume_C_UpdateCanvas_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_C::ChangeState(int State)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState"));

	ABP_DynamicDensityFogVolume_C_ChangeState_Params params;
	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState
// (BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::SetState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState"));

	ABP_DynamicDensityFogVolume_C_SetState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_C::ExecuteUbergraph_BP_DynamicDensityFogVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume"));

	ABP_DynamicDensityFogVolume_C_ExecuteUbergraph_BP_DynamicDensityFogVolume_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
