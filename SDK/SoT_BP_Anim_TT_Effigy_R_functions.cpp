// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_TT_Effigy_R_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TT_Effigy_R.BP_Anim_TT_Effigy_R_C.ExecuteUbergraph_BP_Anim_TT_Effigy_R
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_TT_Effigy_R_C::ExecuteUbergraph_BP_Anim_TT_Effigy_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_TT_Effigy_R.BP_Anim_TT_Effigy_R_C.ExecuteUbergraph_BP_Anim_TT_Effigy_R"));

	UBP_Anim_TT_Effigy_R_C_ExecuteUbergraph_BP_Anim_TT_Effigy_R_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
