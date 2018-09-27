// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterVFXComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 WindInterface                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::GetWindService(class UObject** WindInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService");

	UBP_CharacterVFXComponent_C_GetWindService_Params params;

	UObject::ProcessEvent(fn, &params);

	if (WindInterface != nullptr)
		*WindInterface = params.WindInterface;
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_CanProcessWind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanProcess                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::WindVFX_CanProcessWind(bool* CanProcess)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_CanProcessWind");

	UBP_CharacterVFXComponent_C_WindVFX_CanProcessWind_Params params;

	UObject::ProcessEvent(fn, &params);

	if (CanProcess != nullptr)
		*CanProcess = params.CanProcess;
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_DebugTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick");

	UBP_CharacterVFXComponent_C_WindVFX_DebugTick_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy");

	UBP_CharacterVFXComponent_C_WindVFX_Destroy_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Create()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create");

	UBP_CharacterVFXComponent_C_WindVFX_Create_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Update");

	UBP_CharacterVFXComponent_C_WindVFX_Update_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate");

	UBP_CharacterVFXComponent_C_WindVFX_Deactivate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Activate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Activate");

	UBP_CharacterVFXComponent_C_WindVFX_Activate_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Event                          (Parm)

void UBP_CharacterVFXComponent_C::Play_View_Under_Water_FX(const struct FEventPlayerViewUnderWaterStateChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX");

	UBP_CharacterVFXComponent_C_Play_View_Under_Water_FX_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FallingSpeed                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::Play_Falling_Splash(float FallingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash");

	UBP_CharacterVFXComponent_C_Play_Falling_Splash_Params params;
	params.FallingSpeed = FallingSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::Play_Foot_Splash(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash");

	UBP_CharacterVFXComponent_C_Play_Foot_Splash_Params params;
	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay");

	UBP_CharacterVFXComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveTick");

	UBP_CharacterVFXComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CharacterVFXComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay");

	UBP_CharacterVFXComponent_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Event                          (Parm)

void UBP_CharacterVFXComponent_C::PlayerViewUnderWaterEvent(const struct FEventPlayerViewUnderWaterStateChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent");

	UBP_CharacterVFXComponent_C_PlayerViewUnderWaterEvent_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FFallingIntoWaterEvent Event                          (Parm)

void UBP_CharacterVFXComponent_C::FallingIntoWaterEvent(const struct FAthena_FFallingIntoWaterEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent");

	UBP_CharacterVFXComponent_C_FallingIntoWaterEvent_Params params;
	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Under_water_state_changed      (Parm)

void UBP_CharacterVFXComponent_C::WaterStateChanged(const struct FEventPlayerViewUnderWaterStateChanged& Under_water_state_changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged");

	UBP_CharacterVFXComponent_C_WaterStateChanged_Params params;
	params.Under_water_state_changed = Under_water_state_changed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterFootEnterWater Enter_Water                    (Parm)

void UBP_CharacterVFXComponent_C::On_Foot_Enter_Water(const struct FEventCharacterFootEnterWater& Enter_Water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water");

	UBP_CharacterVFXComponent_C_On_Foot_Enter_Water_Params params;
	params.Enter_Water = Enter_Water;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.DeadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterDead     EventDead                      (Parm)

void UBP_CharacterVFXComponent_C::DeadEvent(const struct FEventCharacterDead& EventDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.DeadEvent");

	UBP_CharacterVFXComponent_C_DeadEvent_Params params;
	params.EventDead = EventDead;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::ExecuteUbergraph_BP_CharacterVFXComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent");

	UBP_CharacterVFXComponent_C_ExecuteUbergraph_BP_CharacterVFXComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
