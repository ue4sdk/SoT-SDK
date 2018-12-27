// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BuoyantStorageBarrel_LockedToWater_CursedSails_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BuoyantStorageBarrel_LockedToWater_CursedSails.BP_BuoyantStorageBarrel_LockedToWater_CursedSails_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BuoyantStorageBarrel_LockedToWater_CursedSails_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuoyantStorageBarrel_LockedToWater_CursedSails.BP_BuoyantStorageBarrel_LockedToWater_CursedSails_C.UserConstructionScript");

	ABP_BuoyantStorageBarrel_LockedToWater_CursedSails_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
