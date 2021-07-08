// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicFogVolume_Tale2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DynamicFogVolume_Tale2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicFogVolume_Tale2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ExecuteUbergraph_BP_DynamicFogVolume_Tale2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DynamicFogVolume_Tale2_C::ExecuteUbergraph_BP_DynamicFogVolume_Tale2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C.ExecuteUbergraph_BP_DynamicFogVolume_Tale2"));

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
