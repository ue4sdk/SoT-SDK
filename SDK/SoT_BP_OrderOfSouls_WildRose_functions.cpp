// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OrderOfSouls_WildRose_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OrderOfSouls_WildRose_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_OrderOfSouls_WildRose_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C.ExecuteUbergraph_BP_OrderOfSouls_WildRose
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OrderOfSouls_WildRose_C::ExecuteUbergraph_BP_OrderOfSouls_WildRose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_OrderOfSouls_WildRose.BP_OrderOfSouls_WildRose_C.ExecuteUbergraph_BP_OrderOfSouls_WildRose"));

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
