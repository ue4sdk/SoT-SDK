// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ActorGlow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ActorGlow.BP_ActorGlow_C.StartGlowEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorGlow_C::StartGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.StartGlowEffect"));

	ABP_ActorGlow_C_StartGlowEffect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ActorGlow_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.StartReaction"));

	ABP_ActorGlow_C_StartReaction_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_ActorGlow.BP_ActorGlow_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ActorGlow_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.StopReaction"));

	ABP_ActorGlow_C_StopReaction_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorGlow_C::CollectDecalMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials"));

	ABP_ActorGlow_C_CollectDecalMaterials_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorGlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript"));

	ABP_ActorGlow_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ActorGlow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay"));

	ABP_ActorGlow_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorGlow_C::ExecuteUbergraph_BP_ActorGlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow"));

	ABP_ActorGlow_C_ExecuteUbergraph_BP_ActorGlow_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
