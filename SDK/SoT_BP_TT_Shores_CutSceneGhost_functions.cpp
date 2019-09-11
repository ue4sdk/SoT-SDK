// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_Shores_CutSceneGhost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_Shores_CutSceneGhost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TT_Shores_CutSceneGhost_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.GhostCutsceneEventHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ShroudOpacity                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_Shores_CutSceneGhost_C::GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom, float ShroudOpacity)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.GhostCutsceneEventHandler"));

	struct
	{
		float                          GhostOpacity;
		float                          GhostBloom;
		float                          ShroudOpacity;
	} params;

	params.GhostOpacity = GhostOpacity;
	params.GhostBloom = GhostBloom;
	params.ShroudOpacity = ShroudOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.ExecuteUbergraph_BP_TT_Shores_CutSceneGhost
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_Shores_CutSceneGhost_C::ExecuteUbergraph_BP_TT_Shores_CutSceneGhost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_Shores_CutSceneGhost.BP_TT_Shores_CutSceneGhost_C.ExecuteUbergraph_BP_TT_Shores_CutSceneGhost"));

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
