// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tutorial_Tavern_Stranger_NPC_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UnhidePlayerPrompts
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Tutorial_Tavern_Stranger_NPC_C::UnhidePlayerPrompts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UnhidePlayerPrompts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Tutorial_Tavern_Stranger_NPC_C::CanInteract(class AActor* InInteractor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.CanInteract"));

	struct
	{
		class AActor*                  InInteractor;
		bool                           ReturnValue;
	} params;

	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.StartOnboardingCutscene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Tutorial_Tavern_Stranger_NPC_C::StartOnboardingCutscene()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.StartOnboardingCutscene"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Tutorial_Tavern_Stranger_NPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.QueueCutsceneActorDestruction
// (BlueprintCallable, BlueprintEvent)

void ABP_Tutorial_Tavern_Stranger_NPC_C::QueueCutsceneActorDestruction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.QueueCutsceneActorDestruction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tutorial_Tavern_Stranger_NPC_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tutorial_Tavern_Stranger_NPC_C::ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Tutorial_Tavern_Stranger_NPC.BP_Tutorial_Tavern_Stranger_NPC_C.ExecuteUbergraph_BP_Tutorial_Tavern_Stranger_NPC"));

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
