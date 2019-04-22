// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy.BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy.BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy.BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C.ExecuteUbergraph_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C::ExecuteUbergraph_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy.BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy_C.ExecuteUbergraph_BP_FaiteOfTheMorningstar_CreatePlayerTriggerProxy"));

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
