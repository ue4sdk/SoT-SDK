// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SwimmingCreatureAnimGraph_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SwimmingCreatureAnimGraph.BP_SwimmingCreatureAnimGraph_C.ExecuteUbergraph_BP_SwimmingCreatureAnimGraph
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SwimmingCreatureAnimGraph_C::ExecuteUbergraph_BP_SwimmingCreatureAnimGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SwimmingCreatureAnimGraph.BP_SwimmingCreatureAnimGraph_C.ExecuteUbergraph_BP_SwimmingCreatureAnimGraph"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
