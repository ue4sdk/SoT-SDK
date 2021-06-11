// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Seagull01_8POI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Seagull_Material               (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstance*       Seagull_MT_LOD                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Seagull01_8POI_C::seagull_Fade(class UMaterialInstance* Seagull_Material, class UMaterialInstance* Seagull_MT_LOD)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade"));

	struct
	{
		class UMaterialInstance*       Seagull_Material;
		class UMaterialInstance*       Seagull_MT_LOD;
	} params;

	params.Seagull_Material = Seagull_Material;
	params.Seagull_MT_LOD = Seagull_MT_LOD;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Seagull01_8POI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Seagull01_8POI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn
// (Event, Protected, BlueprintEvent)

void ABP_Seagull01_8POI_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut
// (Event, Protected, BlueprintEvent)

void ABP_Seagull01_8POI_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Seagull01_8POI_C::ExecuteUbergraph_BP_Seagull01_8POI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI"));

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
