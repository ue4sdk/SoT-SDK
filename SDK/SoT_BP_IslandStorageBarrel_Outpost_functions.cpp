// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_IslandStorageBarrel_Outpost_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_IslandStorageBarrel_Outpost.BP_IslandStorageBarrel_Outpost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_IslandStorageBarrel_Outpost_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_IslandStorageBarrel_Outpost.BP_IslandStorageBarrel_Outpost_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif