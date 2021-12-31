// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Harpoon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Harpoon.BP_Harpoon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Harpoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Harpoon.BP_Harpoon_C.UserConstructionScript"));

	ABP_Harpoon_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Harpoon.BP_Harpoon_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Harpoon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Harpoon.BP_Harpoon_C.ReceiveBeginPlay"));

	ABP_Harpoon_C_ReceiveBeginPlay_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Harpoon.BP_Harpoon_C.ExecuteUbergraph_BP_Harpoon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Harpoon_C::ExecuteUbergraph_BP_Harpoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Harpoon.BP_Harpoon_C.ExecuteUbergraph_BP_Harpoon"));

	ABP_Harpoon_C_ExecuteUbergraph_BP_Harpoon_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
