// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.IsQuestParticipant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaPlayerCharacter*  PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsQuestParticipant             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C::IsQuestParticipant(class AAthenaPlayerCharacter* PlayerCharacter, bool* IsQuestParticipant)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.IsQuestParticipant"));

	struct
	{
		class AAthenaPlayerCharacter*  PlayerCharacter;
		bool                           IsQuestParticipant;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);

	if (IsQuestParticipant != nullptr)
		*IsQuestParticipant = params.IsQuestParticipant;
}


// Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.CastToAthenaPlayerCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AAthenaPlayerCharacter*  AthenaPlayerCharacter          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C::CastToAthenaPlayerCharacter(class AActor* Actor, bool* Successful, class AAthenaPlayerCharacter** AthenaPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.CastToAthenaPlayerCharacter"));

	struct
	{
		class AActor*                  Actor;
		bool                           Successful;
		class AAthenaPlayerCharacter*  AthenaPlayerCharacter;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Successful != nullptr)
		*Successful = params.Successful;
	if (AthenaPlayerCharacter != nullptr)
		*AthenaPlayerCharacter = params.AthenaPlayerCharacter;
}


// Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.Initialise
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AAthenaCharacter*> QuestParticipants              (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C::Initialise(TArray<class AAthenaCharacter*>* QuestParticipants)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.Initialise"));

	struct
	{
		TArray<class AAthenaCharacter*> QuestParticipants;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (QuestParticipants != nullptr)
		*QuestParticipants = params.QuestParticipants;
}


// Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_39_ComponentBeginOverlapSignature__DelegateSignature"));

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


// Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.ExecuteUbergraph_BP_FateOfTheMorningstar_QuestParicipantTriggerVolume
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C::ExecuteUbergraph_BP_FateOfTheMorningstar_QuestParicipantTriggerVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.ExecuteUbergraph_BP_FateOfTheMorningstar_QuestParicipantTriggerVolume"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.OnPlayerEnteredTrigger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAthenaPlayerCharacter*  PlayerCharacter                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C::OnPlayerEnteredTrigger__DelegateSignature(class AAthenaPlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FateOfTheMorningstar_QuestParicipantTriggerVolume.BP_FateOfTheMorningstar_QuestParicipantTriggerVolume_C.OnPlayerEnteredTrigger__DelegateSignature"));

	struct
	{
		class AAthenaPlayerCharacter*  PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
