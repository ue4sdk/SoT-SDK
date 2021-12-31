// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallMapTable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallMapTable.BP_SmallMapTable_C.UpdateBlurEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallMapTable_C::UpdateBlurEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.UpdateBlurEffect"));

	ABP_SmallMapTable_C_UpdateBlurEffect_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.GetClosestInteractionPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// FVector                        ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FVector                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

FVector ABP_SmallMapTable_C::GetClosestInteractionPoint(const FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.GetClosestInteractionPoint"));

	ABP_SmallMapTable_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	UObject::ProcessEvent(fn, &params);

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;

	return params.ReturnValue;
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallMapTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.UserConstructionScript"));

	ABP_SmallMapTable_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SmallMapTable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.ReceiveBeginPlay"));

	ABP_SmallMapTable_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.SetEffectActiveWhenClose
// (BlueprintCallable, BlueprintEvent)

void ABP_SmallMapTable_C::SetEffectActiveWhenClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.SetEffectActiveWhenClose"));

	ABP_SmallMapTable_C_SetEffectActiveWhenClose_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsMapActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// UTextureRenderTarget2D*        Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallMapTable_C::OnMapActivate(bool IsMapActive, UTextureRenderTarget2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapActivate"));

	ABP_SmallMapTable_C_OnMapActivate_Params params;
	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapMove
// (Event, Public, BlueprintEvent)
// Parameters:
// FVector2D                      CentreLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// FVector2D                      ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallMapTable_C::OnMapMove(const FVector2D& CentreLocation, const FVector2D& ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapMove"));

	ABP_SmallMapTable_C_OnMapMove_Params params;
	params.CentreLocation = CentreLocation;
	params.ZoomLevel = ZoomLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.ExecuteUbergraph_BP_SmallMapTable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SmallMapTable_C::ExecuteUbergraph_BP_SmallMapTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SmallMapTable.BP_SmallMapTable_C.ExecuteUbergraph_BP_SmallMapTable"));

	ABP_SmallMapTable_C_ExecuteUbergraph_BP_SmallMapTable_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
