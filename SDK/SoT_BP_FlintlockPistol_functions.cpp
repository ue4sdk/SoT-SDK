// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FlintlockPistol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOn                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlintlockPistol_C::SetScopeEffectOn(bool IsOn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn"));

	struct
	{
		bool                           IsOn;
	} params;

	params.IsOn = IsOn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FlintlockPistol_C::determine_sfx_relationship(TEnumAsByte<EEmitterRelationship>* Relationship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship"));

	struct
	{
		TEnumAsByte<EEmitterRelationship> Relationship;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Relationship != nullptr)
		*Relationship = params.Relationship;
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FlintlockPistol_C::DoFireEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FlintlockPistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired
// (Event, Protected, BlueprintEvent)

void ABP_FlintlockPistol_C::OnWeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn
// (Event, Protected, BlueprintEvent)

void ABP_FlintlockPistol_C::RadialBlurOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff
// (Event, Protected, BlueprintEvent)

void ABP_FlintlockPistol_C::RadialBlurOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlintlockPistol_C::ExecuteUbergraph_BP_FlintlockPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol"));

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
