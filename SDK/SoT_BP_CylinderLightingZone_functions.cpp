// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CylinderLightingZone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawCylinder
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CylinderLightingZone_C::DrawCylinder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawCylinder"));

	ABP_CylinderLightingZone_C_DrawCylinder_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.Update 3D Lighting Zone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CylinderLightingZone_C::Update_3D_Lighting_Zone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.Update 3D Lighting Zone"));

	ABP_CylinderLightingZone_C_Update_3D_Lighting_Zone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CylinderLightingZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.UserConstructionScript"));

	ABP_CylinderLightingZone_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CylinderLightingZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ReceiveBeginPlay"));

	ABP_CylinderLightingZone_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawDebugCylinder
// (BlueprintCallable, BlueprintEvent)

void ABP_CylinderLightingZone_C::DrawDebugCylinder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.DrawDebugCylinder"));

	ABP_CylinderLightingZone_C_DrawDebugCylinder_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ClearDebugCylinder
// (BlueprintCallable, BlueprintEvent)

void ABP_CylinderLightingZone_C::ClearDebugCylinder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ClearDebugCylinder"));

	ABP_CylinderLightingZone_C_ClearDebugCylinder_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ExecuteUbergraph_BP_CylinderLightingZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CylinderLightingZone_C::ExecuteUbergraph_BP_CylinderLightingZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CylinderLightingZone.BP_CylinderLightingZone_C.ExecuteUbergraph_BP_CylinderLightingZone"));

	ABP_CylinderLightingZone_C_ExecuteUbergraph_BP_CylinderLightingZone_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
