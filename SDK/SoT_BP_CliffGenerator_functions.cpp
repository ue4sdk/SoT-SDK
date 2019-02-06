// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CliffGenerator_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers"));

	struct
	{
		int                            CurrentIndex;
		int                            NextIndex;
		struct FVector                 StartLocation;
		struct FVector                 EndLocation;
		struct FVector                 StartTangent;
	} params;

	params.CurrentIndex = CurrentIndex;
	params.NextIndex = NextIndex;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.StartTangent = StartTangent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CliffGenerator_C::Deform_Terrain()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             ElementMesh                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CliffGenerator_C::Build_Element(int Index, class UStaticMesh* ElementMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element"));

	struct
	{
		int                            Index;
		class UStaticMesh*             ElementMesh;
	} params;

	params.Index = Index;
	params.ElementMesh = ElementMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CliffGenerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
