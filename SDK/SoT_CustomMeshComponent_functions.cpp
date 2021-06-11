// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomMeshComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles"));

	struct
	{
		TArray<struct FCustomMeshTriangle> Triangles;
		bool                           ReturnValue;
	} params;

	params.Triangles = Triangles;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)

void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FCustomMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles"));

	struct
	{
		TArray<struct FCustomMeshTriangle> Triangles;
	} params;

	params.Triangles = Triangles;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
