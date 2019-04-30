// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ActorGlow_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ActorGlow_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.StartReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


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

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorGlow_C::CollectDecalMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.CollectDecalMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActorGlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ActorGlow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActorGlow_C::ExecuteUbergraph_BP_ActorGlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ActorGlow.BP_ActorGlow_C.ExecuteUbergraph_BP_ActorGlow"));

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
