// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EnemyVFXComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.DeadEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventCharacterDead     EventDead                      (Parm)

void UBP_EnemyVFXComponent_C::DeadEvent(const struct FEventCharacterDead& EventDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.DeadEvent");

	struct
	{
		struct FEventCharacterDead     EventDead;
	} params;

	params.EventDead = EventDead;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_EnemyVFXComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyVFXComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ExecuteUbergraph_BP_EnemyVFXComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyVFXComponent_C::ExecuteUbergraph_BP_EnemyVFXComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ExecuteUbergraph_BP_EnemyVFXComponent");

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
