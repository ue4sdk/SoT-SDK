// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumShip_StandardHull_Art_Interior_Lower_Deck_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MediumShip_StandardHull_Art_Interior_Lower_Deck.BP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MediumShip_StandardHull_Art_Interior_Lower_Deck.BP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C.UserConstructionScript"));

	ABP_MediumShip_StandardHull_Art_Interior_Lower_Deck_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
