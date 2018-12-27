// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_KrakenAnimatedTentacleAnimGraphV3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_KrakenAnimatedTentacleAnimGraphV3.BP_KrakenAnimatedTentacleAnimGraphV3_C.ExecuteUbergraph_BP_KrakenAnimatedTentacleAnimGraphV3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_KrakenAnimatedTentacleAnimGraphV3_C::ExecuteUbergraph_BP_KrakenAnimatedTentacleAnimGraphV3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KrakenAnimatedTentacleAnimGraphV3.BP_KrakenAnimatedTentacleAnimGraphV3_C.ExecuteUbergraph_BP_KrakenAnimatedTentacleAnimGraphV3");

	UBP_KrakenAnimatedTentacleAnimGraphV3_C_ExecuteUbergraph_BP_KrakenAnimatedTentacleAnimGraphV3_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
