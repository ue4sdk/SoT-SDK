// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EnemyVFXComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_EnemyVFXComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveBeginPlay"));

	UBP_EnemyVFXComponent_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyVFXComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ReceiveEndPlay"));

	UBP_EnemyVFXComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ExecuteUbergraph_BP_EnemyVFXComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_EnemyVFXComponent_C::ExecuteUbergraph_BP_EnemyVFXComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EnemyVFXComponent.BP_EnemyVFXComponent_C.ExecuteUbergraph_BP_EnemyVFXComponent"));

	UBP_EnemyVFXComponent_C_ExecuteUbergraph_BP_EnemyVFXComponent_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
