// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicDensityFogVolume_classes.hpp"

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

	struct
	{
		float                          BlendAmount;
	} params;

	params.BlendAmount = BlendAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState
// (BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::OnRep_NextState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc
// (BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::StateBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc
// (BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::StateBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_C::UpdateCanvas(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas"));

	struct
	{
		class UCanvas*                 Canvas;
		int                            Width;
		int                            Height;
	} params;

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

	struct
	{
		int                            State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState
// (BlueprintCallable, BlueprintEvent)

void ABP_DynamicDensityFogVolume_C::SetState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicDensityFogVolume_C::ExecuteUbergraph_BP_DynamicDensityFogVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume"));

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
