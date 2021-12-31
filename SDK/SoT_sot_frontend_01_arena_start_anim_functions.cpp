// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_arena_start_anim_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.LeaveArenaTutorialAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_arena_start_anim_C::LeaveArenaTutorialAnimation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.LeaveArenaTutorialAnimation"));

	Asot_frontend_01_arena_start_anim_C_LeaveArenaTutorialAnimation_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.GetFrontendCameraComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFrontendCameraComponent* Camera_Component               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_arena_start_anim_C::GetFrontendCameraComponent(class UFrontendCameraComponent** Camera_Component)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.GetFrontendCameraComponent"));

	Asot_frontend_01_arena_start_anim_C_GetFrontendCameraComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Camera_Component != nullptr)
		*Camera_Component = params.Camera_Component;
}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.K2Node_MatineeController_35_Finished
// (BlueprintEvent)

void Asot_frontend_01_arena_start_anim_C::K2Node_MatineeController_35_Finished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.K2Node_MatineeController_35_Finished"));

	Asot_frontend_01_arena_start_anim_C_K2Node_MatineeController_35_Finished_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Asot_frontend_01_arena_start_anim_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ReceiveBeginPlay"));

	Asot_frontend_01_arena_start_anim_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.StartArenaTutorial
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_arena_start_anim_C::StartArenaTutorial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.StartArenaTutorial"));

	Asot_frontend_01_arena_start_anim_C_StartArenaTutorial_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.EndArenaTutorial
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_arena_start_anim_C::EndArenaTutorial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.EndArenaTutorial"));

	Asot_frontend_01_arena_start_anim_C_EndArenaTutorial_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.SkipArenaTutorial
// (BlueprintCallable, BlueprintEvent)

void Asot_frontend_01_arena_start_anim_C::SkipArenaTutorial()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.SkipArenaTutorial"));

	Asot_frontend_01_arena_start_anim_C_SkipArenaTutorial_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ExecuteUbergraph_sot_frontend_01_arena_start_anim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Asot_frontend_01_arena_start_anim_C::ExecuteUbergraph_sot_frontend_01_arena_start_anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function sot_frontend_01_arena_start_anim.sot_frontend_01_arena_start_anim_C.ExecuteUbergraph_sot_frontend_01_arena_start_anim"));

	Asot_frontend_01_arena_start_anim_C_ExecuteUbergraph_sot_frontend_01_arena_start_anim_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
