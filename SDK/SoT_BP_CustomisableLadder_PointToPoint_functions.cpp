// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CustomisableLadder_PointToPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.Orientate Ladder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Point_A                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point_B                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CustomisableLadder_PointToPoint_C::Orientate_Ladder(const struct FVector& Point_A, const struct FVector& Point_B)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.Orientate Ladder");

	ABP_CustomisableLadder_PointToPoint_C_Orientate_Ladder_Params params;
	params.Point_A = Point_A;
	params.Point_B = Point_B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CustomisableLadder_PointToPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript");

	ABP_CustomisableLadder_PointToPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CustomisableLadder_PointToPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay");

	ABP_CustomisableLadder_PointToPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CustomisableLadder_PointToPoint_C::ExecuteUbergraph_BP_CustomisableLadder_PointToPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint");

	ABP_CustomisableLadder_PointToPoint_C_ExecuteUbergraph_BP_CustomisableLadder_PointToPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
