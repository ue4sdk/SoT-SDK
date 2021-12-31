// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FogVolume_Undersea_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FogVolume_Undersea_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.UserConstructionScript"));

	ABP_FogVolume_Undersea_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogVolume_Undersea_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ReceiveTick"));

	ABP_FogVolume_Undersea_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ExecuteUbergraph_BP_FogVolume_Undersea
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogVolume_Undersea_C::ExecuteUbergraph_BP_FogVolume_Undersea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ExecuteUbergraph_BP_FogVolume_Undersea"));

	ABP_FogVolume_Undersea_C_ExecuteUbergraph_BP_FogVolume_Undersea_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
