// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureRoomBrazier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasureRoomBrazier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TreasureRoomBrazier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.IntensityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NormalizedScale                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureRoomBrazier_C::IntensityChanged(float NormalizedScale)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.IntensityChanged"));

	struct
	{
		float                          NormalizedScale;
	} params;

	params.NormalizedScale = NormalizedScale;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.LightColourChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LerpAmount                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureRoomBrazier_C::LightColourChanged(float LerpAmount)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.LightColourChanged"));

	struct
	{
		float                          LerpAmount;
	} params;

	params.LerpAmount = LerpAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.PlayFireLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureRoomBrazier_C::PlayFireLoop(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.PlayFireLoop"));

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.PlayFireOn
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasureRoomBrazier_C::PlayFireOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.PlayFireOn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.PlayWwiseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*             EventToPlay                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureRoomBrazier_C::PlayWwiseEvent(class UWwiseEvent* EventToPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.PlayWwiseEvent"));

	struct
	{
		class UWwiseEvent*             EventToPlay;
	} params;

	params.EventToPlay = EventToPlay;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.ExecuteUbergraph_BP_TreasureRoomBrazier
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TreasureRoomBrazier_C::ExecuteUbergraph_BP_TreasureRoomBrazier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TreasureRoomBrazier.BP_TreasureRoomBrazier_C.ExecuteUbergraph_BP_TreasureRoomBrazier"));

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
