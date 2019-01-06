// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaEngine_classes.hpp"

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

void UNetDormancyHelpers::SetNetDormancy(class AActor* TargetActor, TEnumAsByte<ENetDormancy> DormancyMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.NetDormancyHelpers.SetNetDormancy");

	struct
	{
		class AActor*                  TargetActor;
		TEnumAsByte<ENetDormancy>      DormancyMode;
	} params;

	params.TargetActor = TargetActor;
	params.DormancyMode = DormancyMode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AthenaEngine.NetDormancyHelpers.FlushNetDormancy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UNetDormancyHelpers::FlushNetDormancy(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaEngine.NetDormancyHelpers.FlushNetDormancy");

	struct
	{
		class AActor*                  TargetActor;
	} params;

	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
