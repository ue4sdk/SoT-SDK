// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DistantLightProxy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_DistantLightProxy_C::FindExistingLight(const class FString& Name, bool* Result, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.FindExistingLight"));

	struct
	{
		class FString                  Name;
		bool                           Result;
		int                            Index;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DistantLightProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Name                           (Parm, ZeroConstructor)

void ABP_DistantLightProxy_C::Add_Light(const struct FVector& Location, float Size, class UMaterialInterface* Material, const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DistantLightProxy.BP_DistantLightProxy_C.Add Light"));

	struct
	{
		struct FVector                 Location;
		float                          Size;
		class UMaterialInterface*      Material;
		class FString                  Name;
	} params;

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
