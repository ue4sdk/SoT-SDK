// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumMapTable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumMapTable.BP_MediumMapTable_C.UpdateBlurEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumMapTable_C::UpdateBlurEffect()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.UpdateBlurEffect"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumMapTable.BP_MediumMapTable_C.GetClosestInteractionPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABP_MediumMapTable_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.GetClosestInteractionPoint"));

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


// Function BP_MediumMapTable.BP_MediumMapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumMapTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumMapTable.BP_MediumMapTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_MediumMapTable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumMapTable.BP_MediumMapTable_C.SetEffectActiveWhenClose
// (BlueprintCallable, BlueprintEvent)

void ABP_MediumMapTable_C::SetEffectActiveWhenClose()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.SetEffectActiveWhenClose"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsMapActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumMapTable_C::OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapActivate"));

	struct
	{
		bool                           IsMapActive;
		class UTextureRenderTarget2D*  Texture;
	} params;

	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapMove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D               CentreLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumMapTable_C::OnMapMove(const struct FVector2D& CentreLocation, const struct FVector2D& ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapMove"));

	struct
	{
		struct FVector2D               CentreLocation;
		struct FVector2D               ZoomLevel;
	} params;

	params.CentreLocation = CentreLocation;
	params.ZoomLevel = ZoomLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MediumMapTable.BP_MediumMapTable_C.ExecuteUbergraph_BP_MediumMapTable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MediumMapTable_C::ExecuteUbergraph_BP_MediumMapTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumMapTable.BP_MediumMapTable_C.ExecuteUbergraph_BP_MediumMapTable"));

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
