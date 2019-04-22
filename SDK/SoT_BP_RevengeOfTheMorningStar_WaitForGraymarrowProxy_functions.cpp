// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C.OnParticipantBeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::OnParticipantBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C.OnParticipantBeginOverlap"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C.ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy.BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C.ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy"));

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
