// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LegendaryStorytellerDefinition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LegendaryStorytellerDefinition.LegendaryStorytellerDefinition_C.GetIslandForActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULegendaryStorytellerDefinition_C::GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LegendaryStorytellerDefinition.LegendaryStorytellerDefinition_C.GetIslandForActor"));

	struct
	{
		TAssetPtr<class AActor>        Actor;
		struct FName                   Name;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
