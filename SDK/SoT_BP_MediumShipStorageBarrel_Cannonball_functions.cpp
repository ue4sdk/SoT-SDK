// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShipStorageBarrel_Cannonball_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumShipStorageBarrel_Cannonball.BP_MediumShipStorageBarrel_Cannonball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumShipStorageBarrel_Cannonball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShipStorageBarrel_Cannonball.BP_MediumShipStorageBarrel_Cannonball_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
