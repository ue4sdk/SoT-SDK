// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cutscene_BagOfGold_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cutscene_BagOfGold.BP_Cutscene_BagOfGold_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Cutscene_BagOfGold_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cutscene_BagOfGold.BP_Cutscene_BagOfGold_C.UserConstructionScript");

	ABP_Cutscene_BagOfGold_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
