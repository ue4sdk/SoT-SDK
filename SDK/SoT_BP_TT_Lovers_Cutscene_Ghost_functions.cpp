// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Lovers_Cutscene_Ghost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.BindToAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_Lovers_Cutscene_Ghost_C::BindToAnimNotify()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.BindToAnimNotify"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_Lovers_Cutscene_Ghost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TT_Lovers_Cutscene_Ghost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.GhostCutsceneEventHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShroudAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_Lovers_Cutscene_Ghost_C::GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom, float ShroudAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.GhostCutsceneEventHandler"));

	struct
	{
		float                          GhostOpacity;
		float                          GhostBloom;
		float                          ShroudAmount;
	} params;

	params.GhostOpacity = GhostOpacity;
	params.GhostBloom = GhostBloom;
	params.ShroudAmount = ShroudAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.ExecuteUbergraph_BP_TT_Lovers_Cutscene_Ghost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_Lovers_Cutscene_Ghost_C::ExecuteUbergraph_BP_TT_Lovers_Cutscene_Ghost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Lovers_Cutscene_Ghost.BP_TT_Lovers_Cutscene_Ghost_C.ExecuteUbergraph_BP_TT_Lovers_Cutscene_Ghost"));

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
