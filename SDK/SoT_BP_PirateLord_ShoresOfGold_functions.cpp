// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateLord_ShoresOfGold_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_ShoresOfGold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PirateLord_ShoresOfGold_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.GhostCutsceneEventHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateLord_ShoresOfGold_C::GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.GhostCutsceneEventHandler"));

	struct
	{
		float                          GhostOpacity;
		float                          GhostBloom;
	} params;

	params.GhostOpacity = GhostOpacity;
	params.GhostBloom = GhostBloom;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.ExecuteUbergraph_BP_PirateLord_ShoresOfGold
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateLord_ShoresOfGold_C::ExecuteUbergraph_BP_PirateLord_ShoresOfGold(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_ShoresOfGold.BP_PirateLord_ShoresOfGold_C.ExecuteUbergraph_BP_PirateLord_ShoresOfGold"));

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
