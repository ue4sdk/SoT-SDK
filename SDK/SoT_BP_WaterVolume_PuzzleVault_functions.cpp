// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_PuzzleVault_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterVolume_PuzzleVault_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_WaterVolume_PuzzleVault_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterVolume_PuzzleVault_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.ExecuteUbergraph_BP_WaterVolume_PuzzleVault
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaterVolume_PuzzleVault_C::ExecuteUbergraph_BP_WaterVolume_PuzzleVault(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WaterVolume_PuzzleVault.BP_WaterVolume_PuzzleVault_C.ExecuteUbergraph_BP_WaterVolume_PuzzleVault"));

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
