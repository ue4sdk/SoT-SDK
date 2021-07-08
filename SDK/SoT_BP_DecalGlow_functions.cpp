// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DecalGlow.BP_DecalGlow_C.StartGlowEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlow_C::StartGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalGlow.BP_DecalGlow_C.StartGlowEffect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DecalGlow_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalGlow.BP_DecalGlow_C.StartReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DecalGlow.BP_DecalGlow_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DecalGlow_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalGlow.BP_DecalGlow_C.StopReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DecalGlow.BP_DecalGlow_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlow_C::CollectDecalMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalGlow.BP_DecalGlow_C.CollectDecalMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalGlow.BP_DecalGlow_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DecalGlow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalGlow.BP_DecalGlow_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.ExecuteUbergraph_BP_DecalGlow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecalGlow_C::ExecuteUbergraph_BP_DecalGlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DecalGlow.BP_DecalGlow_C.ExecuteUbergraph_BP_DecalGlow"));

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
