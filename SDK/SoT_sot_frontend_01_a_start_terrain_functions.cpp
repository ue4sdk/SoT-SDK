// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_start_terrain_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_start_terrain_C::LeaveMapTableAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.LeaveMapTableAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* CameraComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_start_terrain_C::GetFrontendCamera(class UFrontendCameraComponent** CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.GetFrontendCamera");

	struct
	{
		class UFrontendCameraComponent* CameraComponent;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CameraComponent != nullptr)
		*CameraComponent = params.CameraComponent;
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished
// (BlueprintEvent)

void Asot_frontend_01_a_start_terrain_C::K2Node_MatineeController_10_MatineeSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_MatineeSequenceFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished
// (BlueprintEvent)

void Asot_frontend_01_a_start_terrain_C::K2Node_MatineeController_10_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.K2Node_MatineeController_10_Finished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_start_terrain_C::PlayIntroMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.PlayIntroMatinee");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_start_terrain_C::EnteredEngageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.EnteredEngageState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlaybackRate                   (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_start_terrain_C::SetMatineePlaybackRate(float PlaybackRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.SetMatineePlaybackRate");

	struct
	{
		float                          PlaybackRate;
	} params;

	params.PlaybackRate = PlaybackRate;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_a_start_terrain_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_a_start_terrain_C::ExitIntroMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExitIntroMatinee");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_a_start_terrain_C::ExecuteUbergraph_sot_frontend_01_a_start_terrain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_start_terrain.sot_frontend_01_a_start_terrain_C.ExecuteUbergraph_sot_frontend_01_a_start_terrain");

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
