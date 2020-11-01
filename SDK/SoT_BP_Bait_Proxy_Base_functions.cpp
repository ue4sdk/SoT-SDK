// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Bait_Proxy_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char ABP_Bait_Proxy_Base_C::GetPxActorCapacityForPhysXAggregate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C.GetPxActorCapacityForPhysXAggregate"));

	struct
	{
		unsigned char                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Bait_Proxy_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Bait_Proxy_Base.BP_Bait_Proxy_Base_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
