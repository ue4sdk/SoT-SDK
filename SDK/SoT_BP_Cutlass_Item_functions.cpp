// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cutlass_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cutlass_Item.BP_Cutlass_Item_C.DoBlockEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Cutlass_Item_C::DoBlockEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Cutlass_Item.BP_Cutlass_Item_C.DoBlockEffect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Cutlass_Item.BP_Cutlass_Item_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cutlass_Item_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Cutlass_Item.BP_Cutlass_Item_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Cutlass_Item.BP_Cutlass_Item_C.OnBlockedAttack
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FEventBlocked           Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_Cutlass_Item_C::OnBlockedAttack(const struct FEventBlocked& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Cutlass_Item.BP_Cutlass_Item_C.OnBlockedAttack"));

	struct
	{
		struct FEventBlocked           Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Cutlass_Item.BP_Cutlass_Item_C.ExecuteUbergraph_BP_Cutlass_Item
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Cutlass_Item_C::ExecuteUbergraph_BP_Cutlass_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Cutlass_Item.BP_Cutlass_Item_C.ExecuteUbergraph_BP_Cutlass_Item"));

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
