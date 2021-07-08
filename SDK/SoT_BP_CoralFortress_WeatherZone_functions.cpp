// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CoralFortress_WeatherZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity
// (BlueprintCallable, BlueprintEvent)

void ABP_CoralFortress_WeatherZone_C::OnRep_Opacity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.OnRep_Opacity"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Primitive                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CoralFortress_WeatherZone_C::CreateDynamicMaterialAtSlot0(class UPrimitiveComponent* Primitive, class UMaterialInstanceDynamic** Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.CreateDynamicMaterialAtSlot0"));

	struct
	{
		class UPrimitiveComponent*     Primitive;
		class UMaterialInstanceDynamic* Material;
	} params;

	params.Primitive = Primitive;

	UObject::ProcessEvent(fn, &params);

	if (Material != nullptr)
		*Material = params.Material;
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CoralFortress_WeatherZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc
// (BlueprintEvent)

void ABP_CoralFortress_WeatherZone_C::RainBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc
// (BlueprintEvent)

void ABP_CoralFortress_WeatherZone_C::RainBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.RainBlend__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CoralFortress_WeatherZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend
// (BlueprintCallable, BlueprintEvent)

void ABP_CoralFortress_WeatherZone_C::StartRainBlend()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StartRainBlend"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoralFortress_WeatherZone_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend
// (BlueprintCallable, BlueprintEvent)

void ABP_CoralFortress_WeatherZone_C::StopRainBlend()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.StopRainBlend"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CoralFortress_WeatherZone_C::ExecuteUbergraph_BP_CoralFortress_WeatherZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CoralFortress_WeatherZone.BP_CoralFortress_WeatherZone_C.ExecuteUbergraph_BP_CoralFortress_WeatherZone"));

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
