// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ObjectlGhost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ObjectlGhost.BP_ObjectlGhost_C.StartGlowEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ObjectlGhost_C::StartGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObjectlGhost.BP_ObjectlGhost_C.StartGlowEffect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ObjectlGhost.BP_ObjectlGhost_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ObjectlGhost_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObjectlGhost.BP_ObjectlGhost_C.StartReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_ObjectlGhost.BP_ObjectlGhost_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ObjectlGhost_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObjectlGhost.BP_ObjectlGhost_C.StopReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_ObjectlGhost.BP_ObjectlGhost_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ObjectlGhost_C::CollectDecalMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObjectlGhost.BP_ObjectlGhost_C.CollectDecalMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ObjectlGhost.BP_ObjectlGhost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ObjectlGhost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObjectlGhost.BP_ObjectlGhost_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ObjectlGhost.BP_ObjectlGhost_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ObjectlGhost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObjectlGhost.BP_ObjectlGhost_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ObjectlGhost.BP_ObjectlGhost_C.ExecuteUbergraph_BP_ObjectlGhost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ObjectlGhost_C::ExecuteUbergraph_BP_ObjectlGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ObjectlGhost.BP_ObjectlGhost_C.ExecuteUbergraph_BP_ObjectlGhost"));

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
