// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PuzzleVault_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PuzzleVault.BP_PuzzleVault_C.OnRep_IsMapVisible
// (BlueprintCallable, BlueprintEvent)

void ABP_PuzzleVault_C::OnRep_IsMapVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.OnRep_IsMapVisible"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
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


// Function BP_PuzzleVault.BP_PuzzleVault_C.Multicast ToggleVaultTableVisible
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PuzzleVault_C::Multicast_ToggleVaultTableVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.Multicast ToggleVaultTableVisible"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.Multicast SetVaultTableMaterial
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PuzzleVault_C::Multicast_SetVaultTableMaterial(class UMaterialInstance* Material)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.Multicast SetVaultTableMaterial"));

	struct
	{
		class UMaterialInstance*       Material;
	} params;

	params.Material = Material;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.Multicast SetVaultTableIsVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PuzzleVault_C::Multicast_SetVaultTableIsVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PuzzleVault.BP_PuzzleVault_C.Multicast SetVaultTableIsVisible"));

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PuzzleVault.BP_PuzzleVault_C.ExecuteUbergraph_BP_PuzzleVault
// ()
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
