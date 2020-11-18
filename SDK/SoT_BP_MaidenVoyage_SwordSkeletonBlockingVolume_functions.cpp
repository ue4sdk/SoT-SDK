// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_SwordSkeletonBlockingVolume_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.Initialise
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AAthenaCharacter*> QuestParticipants              (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_MaidenVoyage_SwordSkeletonBlockingVolume_C::Initialise(TArray<class AAthenaCharacter*>* QuestParticipants)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.Initialise"));

	struct
	{
		TArray<class AAthenaCharacter*> QuestParticipants;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (QuestParticipants != nullptr)
		*QuestParticipants = params.QuestParticipants;
}


// Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.CastToAthenaPlayerCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AAthenaPlayerCharacter*  AthenaPlayerCharacter          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_SwordSkeletonBlockingVolume_C::CastToAthenaPlayerCharacter(class AActor* Actor, bool* Successful, class AAthenaPlayerCharacter** AthenaPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.CastToAthenaPlayerCharacter"));

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


// Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_SwordSkeletonBlockingVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_53_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_MaidenVoyage_SwordSkeletonBlockingVolume_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_53_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_53_ComponentBeginOverlapSignature__DelegateSignature"));

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


// Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.ExecuteUbergraph_BP_MaidenVoyage_SwordSkeletonBlockingVolume
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_SwordSkeletonBlockingVolume_C::ExecuteUbergraph_BP_MaidenVoyage_SwordSkeletonBlockingVolume(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.ExecuteUbergraph_BP_MaidenVoyage_SwordSkeletonBlockingVolume"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.OnPlayerEnteredTrigger1__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_SwordSkeletonBlockingVolume_C::OnPlayerEnteredTrigger1__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SwordSkeletonBlockingVolume.BP_MaidenVoyage_SwordSkeletonBlockingVolume_C.OnPlayerEnteredTrigger1__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
