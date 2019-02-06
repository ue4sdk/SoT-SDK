// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_campfire_a_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_campfire_a.bsp_campfire_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_campfire_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_campfire_a.bsp_campfire_a_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bsp_campfire_a.bsp_campfire_a_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Absp_campfire_a_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_campfire_a.bsp_campfire_a_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bsp_campfire_a.bsp_campfire_a_C.ExecuteUbergraph_bsp_campfire_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Absp_campfire_a_C::ExecuteUbergraph_bsp_campfire_a(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bsp_campfire_a.bsp_campfire_a_C.ExecuteUbergraph_bsp_campfire_a"));

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
