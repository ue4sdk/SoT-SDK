// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CharacterVFXComponent_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.GetWindService"));

	struct
	{
		class UObject*                 WindInterface;
	} params;


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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_CanProcessWind"));

	struct
	{
		bool                           CanProcess;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanProcess != nullptr)
		*CanProcess = params.CanProcess;
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_DebugTick()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_DebugTick"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Destroy"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Create()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Create"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Update
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Update()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Update"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Deactivate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Activate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_CharacterVFXComponent_C::WindVFX_Activate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WindVFX_Activate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Event                          (Parm)

void UBP_CharacterVFXComponent_C::Play_View_Under_Water_FX(const struct FEventPlayerViewUnderWaterStateChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play View Under Water FX"));

	struct
	{
		struct FEventPlayerViewUnderWaterStateChanged Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FallingSpeed                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::Play_Falling_Splash(float FallingSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Falling Splash"));

	struct
	{
		float                          FallingSpeed;
	} params;

	params.FallingSpeed = FallingSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::Play_Foot_Splash(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.Play Foot Splash"));

	struct
	{
		struct FVector                 Location;
	} params;

	params.Location = Location;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_CharacterVFXComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Event                          (Parm)

void UBP_CharacterVFXComponent_C::PlayerViewUnderWaterEvent(const struct FEventPlayerViewUnderWaterStateChanged& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.PlayerViewUnderWaterEvent"));

	struct
	{
		struct FEventPlayerViewUnderWaterStateChanged Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthena_FFallingIntoWaterEvent Event                          (Parm)

void UBP_CharacterVFXComponent_C::FallingIntoWaterEvent(const struct FAthena_FFallingIntoWaterEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.FallingIntoWaterEvent"));

	struct
	{
		struct FAthena_FFallingIntoWaterEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerViewUnderWaterStateChanged Under_water_state_changed      (Parm)

void UBP_CharacterVFXComponent_C::WaterStateChanged(const struct FEventPlayerViewUnderWaterStateChanged& Under_water_state_changed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.WaterStateChanged"));

	struct
	{
		struct FEventPlayerViewUnderWaterStateChanged Under_water_state_changed;
	} params;

	params.Under_water_state_changed = Under_water_state_changed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterFootEnterWater Enter_Water                    (Parm)

void UBP_CharacterVFXComponent_C::On_Foot_Enter_Water(const struct FEventCharacterFootEnterWater& Enter_Water)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.On Foot Enter Water"));

	struct
	{
		struct FEventCharacterFootEnterWater Enter_Water;
	} params;

	params.Enter_Water = Enter_Water;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.DeadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterDead     EventDead                      (Parm)

void UBP_CharacterVFXComponent_C::DeadEvent(const struct FEventCharacterDead& EventDead)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.DeadEvent"));

	struct
	{
		struct FEventCharacterDead     EventDead;
	} params;

	params.EventDead = EventDead;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CharacterVFXComponent_C::ExecuteUbergraph_BP_CharacterVFXComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CharacterVFXComponent.BP_CharacterVFXComponent_C.ExecuteUbergraph_BP_CharacterVFXComponent"));

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
