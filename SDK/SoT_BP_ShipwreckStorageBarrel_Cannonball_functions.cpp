// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckStorageBarrel_Cannonball_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipwreckStorageBarrel_Cannonball.BP_ShipwreckStorageBarrel_Cannonball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipwreckStorageBarrel_Cannonball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ShipwreckStorageBarrel_Cannonball.BP_ShipwreckStorageBarrel_Cannonball_C.UserConstructionScript");

	ABP_ShipwreckStorageBarrel_Cannonball_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
