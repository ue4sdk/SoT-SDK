// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CosmeticOar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CosmeticOar.BP_CosmeticOar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CosmeticOar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CosmeticOar.BP_CosmeticOar_C.UserConstructionScript");

	ABP_CosmeticOar_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
