// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Telescope_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Telescope.BP_Anim_Telescope_C.ExecuteUbergraph_BP_Anim_Telescope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Telescope_C::ExecuteUbergraph_BP_Anim_Telescope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_Telescope.BP_Anim_Telescope_C.ExecuteUbergraph_BP_Anim_Telescope"));

	UBP_Anim_Telescope_C_ExecuteUbergraph_BP_Anim_Telescope_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
