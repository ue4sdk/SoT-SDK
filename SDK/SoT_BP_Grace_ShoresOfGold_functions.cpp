// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Grace_ShoresOfGold_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Grace_ShoresOfGold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Grace_ShoresOfGold_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grace_ShoresOfGold_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.ExecuteUbergraph_BP_Grace_ShoresOfGold
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Grace_ShoresOfGold_C::ExecuteUbergraph_BP_Grace_ShoresOfGold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Grace_ShoresOfGold.BP_Grace_ShoresOfGold_C.ExecuteUbergraph_BP_Grace_ShoresOfGold"));

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
