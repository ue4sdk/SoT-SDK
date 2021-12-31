// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DistantLightProxy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FString                        Name                           (Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DistantLightProxy_C::FindExistingLight(const FString& Name, bool* Result, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight"));

	ABP_DistantLightProxy_C_FindExistingLight_Params params;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DistantLightProxy_C::Create_Lights()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.Create Lights"));

	ABP_DistantLightProxy_C_Create_Lights_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DistantLightProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript"));

	ABP_DistantLightProxy_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// UMaterialInterface*            Material                       (Parm, ZeroConstructor, IsPlainOldData)
// FString                        Name                           (Parm, ZeroConstructor)

void ABP_DistantLightProxy_C::Add_Light(const FVector& Location, float Size, UMaterialInterface* Material, const FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light"));

	ABP_DistantLightProxy_C_Add_Light_Params params;
	params.Location = Location;
	params.Size = Size;
	params.Material = Material;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DistantLightProxy_C::ExecuteUbergraph_BP_DistantLightProxy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.ExecuteUbergraph_BP_DistantLightProxy"));

	ABP_DistantLightProxy_C_ExecuteUbergraph_BP_DistantLightProxy_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
