// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DecalGlow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DecalGlow.BP_DecalGlow_C.StartGlowEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlow_C::StartGlowEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow.BP_DecalGlow_C.StartGlowEffect");

	ABP_DecalGlow_C_StartGlowEffect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.StartReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DecalGlow_C::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow.BP_DecalGlow_C.StartReaction");

	ABP_DecalGlow_C_StartReaction_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DecalGlow.BP_DecalGlow_C.StopReaction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_DecalGlow_C::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow.BP_DecalGlow_C.StopReaction");

	ABP_DecalGlow_C_StopReaction_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_DecalGlow.BP_DecalGlow_C.CollectDecalMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlow_C::CollectDecalMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow.BP_DecalGlow_C.CollectDecalMaterials");

	ABP_DecalGlow_C_CollectDecalMaterials_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DecalGlow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow.BP_DecalGlow_C.UserConstructionScript");

	ABP_DecalGlow_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DecalGlow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow.BP_DecalGlow_C.ReceiveBeginPlay");

	ABP_DecalGlow_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DecalGlow.BP_DecalGlow_C.ExecuteUbergraph_BP_DecalGlow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DecalGlow_C::ExecuteUbergraph_BP_DecalGlow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DecalGlow.BP_DecalGlow_C.ExecuteUbergraph_BP_DecalGlow");

	ABP_DecalGlow_C_ExecuteUbergraph_BP_DecalGlow_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
