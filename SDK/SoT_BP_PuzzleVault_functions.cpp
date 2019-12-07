// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PuzzleVault_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PuzzleVault.BP_PuzzleVault_C.PlayVisibilityTransition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           New_Visibility                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PuzzleVault_C::PlayVisibilityTransition(bool New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.PlayVisibilityTransition"));

	struct
	{
		bool                           New_Visibility;
	} params;

	params.New_Visibility = New_Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.GetObjectDisplayName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABP_PuzzleVault_C::GetObjectDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.GetObjectDisplayName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PuzzleVault_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PuzzleVault_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PuzzleVault_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.TriggerRevealVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PuzzleVault_C::TriggerRevealVFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.TriggerRevealVFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.SetTableMaterialInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       New_Material                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PuzzleVault_C::SetTableMaterialInstance(class UMaterialInstance* New_Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.SetTableMaterialInstance"));

	struct
	{
		class UMaterialInstance*       New_Material;
	} params;

	params.New_Material = New_Material;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.SetVaultTableTextureVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PuzzleVault_C::SetVaultTableTextureVisibility(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.SetVaultTableTextureVisibility"));

	struct
	{
		bool                           Visibility;
	} params;

	params.Visibility = Visibility;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.ExecuteUbergraph_BP_PuzzleVault
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PuzzleVault_C::ExecuteUbergraph_BP_PuzzleVault(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.ExecuteUbergraph_BP_PuzzleVault"));

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
