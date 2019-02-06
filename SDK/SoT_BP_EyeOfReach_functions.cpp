// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_EyeOfReach_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEmitterRelationship> Relationship                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EyeOfReach_C::determine_sfx_relationship(TEnumAsByte<EEmitterRelationship>* Relationship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.determine sfx relationship"));

	struct
	{
		TEnumAsByte<EEmitterRelationship> Relationship;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Relationship != nullptr)
		*Relationship = params.Relationship;
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EyeOfReach_C::DoFireEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.DoFireEffect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EyeOfReach_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired
// (Event, Protected, BlueprintEvent)

void ABP_EyeOfReach_C::OnWeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.OnWeaponFired"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn
// (Event, Protected, BlueprintEvent)

void ABP_EyeOfReach_C::ScopeOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff
// (Event, Protected, BlueprintEvent)

void ABP_EyeOfReach_C::ScopeOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOff"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_EyeOfReach_C::ScopeTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate
// (Event, Protected, BlueprintEvent)

void ABP_EyeOfReach_C::ScopeOffImmediate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.ScopeOffImmediate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn
// (Event, Protected, BlueprintEvent)

void ABP_EyeOfReach_C::GlintOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff
// (Event, Protected, BlueprintEvent)

void ABP_EyeOfReach_C::GlintOff()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.GlintOff"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_EyeOfReach_C::ExecuteUbergraph_BP_EyeOfReach(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EyeOfReach.BP_EyeOfReach_C.ExecuteUbergraph_BP_EyeOfReach"));

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
