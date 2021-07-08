// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BSP_cannon_emplacement_02_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BSP_cannon_emplacement_02.BSP_cannon_emplacement_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABSP_cannon_emplacement_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BSP_cannon_emplacement_02.BSP_cannon_emplacement_02_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
