// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LegendaryStorytellerDefinition_AdditionalPuzzles_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LegendaryStorytellerDefinition_AdditionalPuzzles.LegendaryStorytellerDefinition_AdditionalPuzzles_C.GetIslandForActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULegendaryStorytellerDefinition_AdditionalPuzzles_C::GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LegendaryStorytellerDefinition_AdditionalPuzzles.LegendaryStorytellerDefinition_AdditionalPuzzles_C.GetIslandForActor"));

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
