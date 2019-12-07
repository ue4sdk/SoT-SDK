// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResettableIslandCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ResettableIslandCannon.BP_ResettableIslandCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ResettableIslandCannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResettableIslandCannon.BP_ResettableIslandCannon_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ResettableIslandCannon.BP_ResettableIslandCannon_C.BndEvt__BlueprintMechanismReset_K2Node_ComponentBoundEvent_12_ResetMechanismEventInBlueprint__DelegateSignature
// (BlueprintEvent)

void ABP_ResettableIslandCannon_C::BndEvt__BlueprintMechanismReset_K2Node_ComponentBoundEvent_12_ResetMechanismEventInBlueprint__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResettableIslandCannon.BP_ResettableIslandCannon_C.BndEvt__BlueprintMechanismReset_K2Node_ComponentBoundEvent_12_ResetMechanismEventInBlueprint__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ResettableIslandCannon.BP_ResettableIslandCannon_C.ExecuteUbergraph_BP_ResettableIslandCannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ResettableIslandCannon_C::ExecuteUbergraph_BP_ResettableIslandCannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ResettableIslandCannon.BP_ResettableIslandCannon_C.ExecuteUbergraph_BP_ResettableIslandCannon"));

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
