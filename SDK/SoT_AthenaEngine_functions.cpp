// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaEngine.NetDormancyHelpers.SetNetDormancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetDormancy>      DormancyMode                   (Parm, ZeroConstructor, IsPlainOldData)

void UNetDormancyHelpers::STATIC_SetNetDormancy(class AActor* TargetActor, TEnumAsByte<ENetDormancy> DormancyMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.NetDormancyHelpers.SetNetDormancy");

	UNetDormancyHelpers_SetNetDormancy_Params params;
	params.TargetActor = TargetActor;
	params.DormancyMode = DormancyMode;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaEngine.NetDormancyHelpers.FlushNetDormancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetDormancyHelpers::STATIC_FlushNetDormancy(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.NetDormancyHelpers.FlushNetDormancy");

	UNetDormancyHelpers_FlushNetDormancy_Params params;
	params.TargetActor = TargetActor;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
