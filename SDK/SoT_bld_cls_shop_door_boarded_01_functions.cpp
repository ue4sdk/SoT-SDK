// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bld_cls_shop_door_boarded_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bld_cls_shop_door_boarded_01.bld_cls_shop_door_boarded_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abld_cls_shop_door_boarded_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bld_cls_shop_door_boarded_01.bld_cls_shop_door_boarded_01_C.UserConstructionScript");

	Abld_cls_shop_door_boarded_01_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
