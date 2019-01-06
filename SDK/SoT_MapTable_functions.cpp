// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MapTable_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
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

	struct
	{
		struct FVector                 ReferencePosition;
		float                          OutInteractionPointRadius;
		struct FVector                 ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMapTable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.SetEffectActiveWhenClose
// (BlueprintCallable, BlueprintEvent)

void AMapTable_C::SetEffectActiveWhenClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.SetEffectActiveWhenClose");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.OnMapActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsMapActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.OnMapActivate");

	struct
	{
		bool                           IsMapActive;
		class UTextureRenderTarget2D*  Texture;
	} params;

	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function MapTable.MapTable_C.OnMapMove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D               CentreLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void AMapTable_C::OnMapMove(const struct FVector2D& CentreLocation, const struct FVector2D& ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.OnMapMove");

	struct
	{
		struct FVector2D               CentreLocation;
		struct FVector2D               ZoomLevel;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.ExecuteUbergraph_MapTable");

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
