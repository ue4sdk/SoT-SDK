// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GlitterbeardLoreBook_FeatheredFriends_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GlitterbeardLoreBook_FeatheredFriends.BP_GlitterbeardLoreBook_FeatheredFriends_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GlitterbeardLoreBook_FeatheredFriends_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GlitterbeardLoreBook_FeatheredFriends.BP_GlitterbeardLoreBook_FeatheredFriends_C.UserConstructionScript"));

	ABP_GlitterbeardLoreBook_FeatheredFriends_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
