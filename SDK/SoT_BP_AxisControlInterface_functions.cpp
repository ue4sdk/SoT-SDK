// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AxisControlInterface_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AxisControlInterface.BP_AxisControlInterface_C.StickInput"));

	struct
	{
		float                          StickInputX;
	} params;

	params.StickInputX = StickInputX;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
