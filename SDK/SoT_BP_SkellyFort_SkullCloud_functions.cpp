// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkellyFort_SkullCloud_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkellyFort_SkullCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.UserConstructionScript");

	ABP_SkellyFort_SkullCloud_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_SkellyFort_SkullCloud_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ReceiveBeginPlay");

	ABP_SkellyFort_SkullCloud_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ExecuteUbergraph_BP_SkellyFort_SkullCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SkellyFort_SkullCloud_C::ExecuteUbergraph_BP_SkellyFort_SkullCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkellyFort_SkullCloud.BP_SkellyFort_SkullCloud_C.ExecuteUbergraph_BP_SkellyFort_SkullCloud");

	ABP_SkellyFort_SkullCloud_C_ExecuteUbergraph_BP_SkellyFort_SkullCloud_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
