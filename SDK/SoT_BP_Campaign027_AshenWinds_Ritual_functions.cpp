// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Campaign027_AshenWinds_Ritual_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Campaign027_AshenWinds_Ritual_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.Timeline_vfx_FireLoop__FinishedFunc
// (BlueprintEvent)

void ABP_Campaign027_AshenWinds_Ritual_C::Timeline_vfx_FireLoop__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.Timeline_vfx_FireLoop__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.Timeline_vfx_FireLoop__UpdateFunc
// (BlueprintEvent)

void ABP_Campaign027_AshenWinds_Ritual_C::Timeline_vfx_FireLoop__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.Timeline_vfx_FireLoop__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.vfx_Timeline_FadeOut__FinishedFunc
// (BlueprintEvent)

void ABP_Campaign027_AshenWinds_Ritual_C::vfx_Timeline_FadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.vfx_Timeline_FadeOut__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.vfx_Timeline_FadeOut__UpdateFunc
// (BlueprintEvent)

void ABP_Campaign027_AshenWinds_Ritual_C::vfx_Timeline_FadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.vfx_Timeline_FadeOut__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Campaign027_AshenWinds_Ritual_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Campaign027_AshenWinds_Ritual_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.ExecuteUbergraph_BP_Campaign027_AshenWinds_Ritual
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Campaign027_AshenWinds_Ritual_C::ExecuteUbergraph_BP_Campaign027_AshenWinds_Ritual(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Campaign027_AshenWinds_Ritual.BP_Campaign027_AshenWinds_Ritual_C.ExecuteUbergraph_BP_Campaign027_AshenWinds_Ritual"));

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
