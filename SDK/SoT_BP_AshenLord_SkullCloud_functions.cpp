// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AshenLord_SkullCloud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.CollectMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AshenLord_SkullCloud_C::CollectMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.CollectMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AshenLord_SkullCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AshenLord_SkullCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UpdateMaterialVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            SignalVisibilityLerpValue      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AshenLord_SkullCloud_C::UpdateMaterialVisibility(const struct FLinearColor& SignalVisibilityLerpValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.UpdateMaterialVisibility"));

	struct
	{
		struct FLinearColor            SignalVisibilityLerpValue;
	} params;

	params.SignalVisibilityLerpValue = SignalVisibilityLerpValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ExecuteUbergraph_BP_AshenLord_SkullCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AshenLord_SkullCloud_C::ExecuteUbergraph_BP_AshenLord_SkullCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AshenLord_SkullCloud.BP_AshenLord_SkullCloud_C.ExecuteUbergraph_BP_AshenLord_SkullCloud"));

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
