// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_RitualBox_WildRose_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C.Get World OOS Magic Box to Replace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABP_shop_oos_01_a_C*     Magic_Box_to_Replace           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_WildRose_C::Get_World_OOS_Magic_Box_to_Replace(class ABP_shop_oos_01_a_C** Magic_Box_to_Replace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C.Get World OOS Magic Box to Replace"));

	struct
	{
		class ABP_shop_oos_01_a_C*     Magic_Box_to_Replace;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Magic_Box_to_Replace != nullptr)
		*Magic_Box_to_Replace = params.Magic_Box_to_Replace;
}


// Function BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_RitualBox_WildRose_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox_WildRose.BP_TT_RitualBox_WildRose_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
