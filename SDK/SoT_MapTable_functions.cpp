// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MapTable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapTable.MapTable_C.UpdateBlurEffect
// (Public, BlueprintCallable, BlueprintEvent)

void AMapTable_C::UpdateBlurEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.UpdateBlurEffect");

	AMapTable_C_UpdateBlurEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapTable.MapTable_C.GetClosestInteractionPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMapTable_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.GetClosestInteractionPoint");

	AMapTable_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function MapTable.MapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.UserConstructionScript");

	AMapTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapTable.MapTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMapTable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.ReceiveBeginPlay");

	AMapTable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapTable.MapTable_C.SetEffectActiveWhenClose
// (BlueprintCallable, BlueprintEvent)

void AMapTable_C::SetEffectActiveWhenClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.SetEffectActiveWhenClose");

	AMapTable_C_SetEffectActiveWhenClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapTable.MapTable_C.OnMapActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsMapActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D** Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::OnMapActivate(bool* IsMapActive, class UTextureRenderTarget2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.OnMapActivate");

	AMapTable_C_OnMapActivate_Params params;
	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapTable.MapTable_C.OnMapMove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              CentreLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::OnMapMove(struct FVector2D* CentreLocation, float* ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.OnMapMove");

	AMapTable_C_OnMapMove_Params params;
	params.CentreLocation = CentreLocation;
	params.ZoomLevel = ZoomLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapTable.MapTable_C.ExecuteUbergraph_MapTable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::ExecuteUbergraph_MapTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.ExecuteUbergraph_MapTable");

	AMapTable_C_ExecuteUbergraph_MapTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
