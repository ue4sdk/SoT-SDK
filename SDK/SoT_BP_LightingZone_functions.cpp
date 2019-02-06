// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LightingZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightingZone_C::Update_Lighting_Zone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightingZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LightingZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightingZone_C::ExecuteUbergraph_BP_LightingZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone"));

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
