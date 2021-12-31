// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Chicken_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Chicken.BP_Chicken_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Chicken_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Chicken.BP_Chicken_C.UserConstructionScript"));

	ABP_Chicken_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Chicken.BP_Chicken_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// AActor*                        OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chicken_C::ReceiveActorBeginOverlap(AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Chicken.BP_Chicken_C.ReceiveActorBeginOverlap"));

	ABP_Chicken_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Chicken_C::ExecuteUbergraph_BP_Chicken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Chicken.BP_Chicken_C.ExecuteUbergraph_BP_Chicken"));

	ABP_Chicken_C_ExecuteUbergraph_BP_Chicken_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
