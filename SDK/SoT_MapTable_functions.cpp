// Sea of Thieves (2) SDK

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.UpdateBlurEffect"));

	AMapTable_C_UpdateBlurEffect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.GetClosestInteractionPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector AMapTable_C::GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.GetClosestInteractionPoint"));

	AMapTable_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function MapTable.MapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.UserConstructionScript"));

	AMapTable_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMapTable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.ReceiveBeginPlay"));

	AMapTable_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.SetEffectActiveWhenClose
// (BlueprintCallable, BlueprintEvent)

void AMapTable_C::SetEffectActiveWhenClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.SetEffectActiveWhenClose"));

	AMapTable_C_SetEffectActiveWhenClose_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.OnMapActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsMapActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UTextureRenderTarget2D*        Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::OnMapActivate(bool IsMapActive, UTextureRenderTarget2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.OnMapActivate"));

	AMapTable_C_OnMapActivate_Params params;
	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.OnMapMove
// (Event, Public, BlueprintEvent)
// Parameters:
// FVector2D                      CentreLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::OnMapMove(const FVector2D& CentreLocation, const FVector2D& ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.OnMapMove"));

	AMapTable_C_OnMapMove_Params params;
	params.CentreLocation = CentreLocation;
	params.ZoomLevel = ZoomLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.ExecuteUbergraph_MapTable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::ExecuteUbergraph_MapTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MapTable.MapTable_C.ExecuteUbergraph_MapTable"));

	AMapTable_C_ExecuteUbergraph_MapTable_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
