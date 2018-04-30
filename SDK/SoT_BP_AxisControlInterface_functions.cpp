// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AxisControlInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AxisControlInterface.BP_AxisControlInterface_C.StickInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StickInputX                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_AxisControlInterface_C::StickInput(float StickInputX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AxisControlInterface.BP_AxisControlInterface_C.StickInput");

	UBP_AxisControlInterface_C_StickInput_Params params;
	params.StickInputX = StickInputX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
