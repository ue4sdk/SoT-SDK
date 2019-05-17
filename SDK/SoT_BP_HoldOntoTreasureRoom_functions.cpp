// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HoldOntoTreasureRoom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.FailTaleOnTimeout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_HoldOntoTreasureRoom_C::FailTaleOnTimeout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.FailTaleOnTimeout"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.GetTreasureRoom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATreasureRoom*           Object                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HoldOntoTreasureRoom_C::GetTreasureRoom(class ATreasureRoom** Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.GetTreasureRoom"));

	struct
	{
		class ATreasureRoom*           Object;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Object != nullptr)
		*Object = params.Object;
}


// Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HoldOntoTreasureRoom_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.OnEnd
// (Event, Protected, BlueprintEvent)

void UBP_HoldOntoTreasureRoom_C::OnEnd()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.OnEnd"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.FailTreasureRoomEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_HoldOntoTreasureRoom_C::FailTreasureRoomEvent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.FailTreasureRoomEvent"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.ExecuteUbergraph_BP_HoldOntoTreasureRoom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_HoldOntoTreasureRoom_C::ExecuteUbergraph_BP_HoldOntoTreasureRoom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_HoldOntoTreasureRoom.BP_HoldOntoTreasureRoom_C.ExecuteUbergraph_BP_HoldOntoTreasureRoom"));

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
