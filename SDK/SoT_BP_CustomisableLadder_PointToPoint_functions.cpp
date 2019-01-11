// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CustomisableLadder_PointToPoint_classes.hpp"

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

	struct
	{
		struct FVector                 Point_A;
		struct FVector                 Point_B;
	} params;

	params.Point_A = Point_A;
	params.Point_B = Point_B;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CustomisableLadder_PointToPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CustomisableLadder_PointToPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CustomisableLadder_PointToPoint_C::ExecuteUbergraph_BP_CustomisableLadder_PointToPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C.ExecuteUbergraph_BP_CustomisableLadder_PointToPoint");

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
