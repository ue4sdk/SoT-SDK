// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Wheel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Wheel.BP_Anim_Wheel_C.ExecuteUbergraph_BP_Anim_Wheel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Wheel_C::ExecuteUbergraph_BP_Anim_Wheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Wheel.BP_Anim_Wheel_C.ExecuteUbergraph_BP_Anim_Wheel");

	UBP_Anim_Wheel_C_ExecuteUbergraph_BP_Anim_Wheel_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
