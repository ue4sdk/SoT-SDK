// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CliffGenerator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            NextIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartTangent                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CliffGenerator_C::Draw_Debug_Numbers(int CurrentIndex, int NextIndex, const struct FVector& StartLocation, const struct FVector& EndLocation, const struct FVector& StartTangent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers");

	ABP_CliffGenerator_C_Draw_Debug_Numbers_Params params;
	params.CurrentIndex = CurrentIndex;
	params.NextIndex = NextIndex;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.StartTangent = StartTangent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CliffGenerator_C::Deform_Terrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain");

	ABP_CliffGenerator_C_Deform_Terrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             ElementMesh                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CliffGenerator_C::Build_Element(int Index, class UStaticMesh* ElementMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element");

	ABP_CliffGenerator_C_Build_Element_Params params;
	params.Index = Index;
	params.ElementMesh = ElementMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CliffGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript");

	ABP_CliffGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
