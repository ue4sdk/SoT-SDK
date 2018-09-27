// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FlintlockPistol_parameters.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.SetScopeEffectOn");

	ABP_FlintlockPistol_C_SetScopeEffectOn_Params params;
	params.IsOn = IsOn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FlintlockPistol_C::determine_sfx_relationship(TEnumAsByte<EEmitterRelationship>* Relationship)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.determine sfx relationship");

	ABP_FlintlockPistol_C_determine_sfx_relationship_Params params;

	UObject::ProcessEvent(fn, &params);

	if (Relationship != nullptr)
		*Relationship = params.Relationship;
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FlintlockPistol_C::DoFireEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.DoFireEffect");

	ABP_FlintlockPistol_C_DoFireEffect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FlintlockPistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.UserConstructionScript");

	ABP_FlintlockPistol_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired
// (Event, Protected, BlueprintEvent)

void ABP_FlintlockPistol_C::OnWeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.OnWeaponFired");

	ABP_FlintlockPistol_C_OnWeaponFired_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn
// (Event, Protected, BlueprintEvent)

void ABP_FlintlockPistol_C::RadialBlurOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOn");

	ABP_FlintlockPistol_C_RadialBlurOn_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff
// (Event, Protected, BlueprintEvent)

void ABP_FlintlockPistol_C::RadialBlurOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.RadialBlurOff");

	ABP_FlintlockPistol_C_RadialBlurOff_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FlintlockPistol_C::ExecuteUbergraph_BP_FlintlockPistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FlintlockPistol.BP_FlintlockPistol_C.ExecuteUbergraph_BP_FlintlockPistol");

	ABP_FlintlockPistol_C_ExecuteUbergraph_BP_FlintlockPistol_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
