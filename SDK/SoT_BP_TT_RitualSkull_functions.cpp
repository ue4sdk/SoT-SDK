// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_RitualSkull_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_RitualSkull_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TT_RitualSkull_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.SetEmissiveGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          EmissiveScale                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualSkull_C::SetEmissiveGlow(float EmissiveScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.SetEmissiveGlow"));

	struct
	{
		float                          EmissiveScale;
	} params;

	params.EmissiveScale = EmissiveScale;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.ExecuteUbergraph_BP_TT_RitualSkull
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualSkull_C::ExecuteUbergraph_BP_TT_RitualSkull(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualSkull.BP_TT_RitualSkull_C.ExecuteUbergraph_BP_TT_RitualSkull"));

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
