// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bp_vfx_onboarding_lightning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_vfx_onboarding_lightning_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Abp_vfx_onboarding_lightning_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.TriggerParticles
// (BlueprintCallable, BlueprintEvent)

void Abp_vfx_onboarding_lightning_C::TriggerParticles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.TriggerParticles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.ExecuteUbergraph_bp_vfx_onboarding_lightning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_vfx_onboarding_lightning_C::ExecuteUbergraph_bp_vfx_onboarding_lightning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function bp_vfx_onboarding_lightning.bp_vfx_onboarding_lightning_C.ExecuteUbergraph_bp_vfx_onboarding_lightning"));

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
