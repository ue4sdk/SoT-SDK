// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaDebug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaDebug.DrawDebugService.OnRep_ReplicatedItems
// (Final, Native, Private)

void ADrawDebugService::OnRep_ReplicatedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.OnRep_ReplicatedItems");

	ADrawDebugService_OnRep_ReplicatedItems_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
