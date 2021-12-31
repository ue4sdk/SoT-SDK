// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShip_StandardHull_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.GetFiringPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 OutFiringPosition              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AILargeShip_StandardHull_C::GetFiringPosition(struct FVector* OutFiringPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.GetFiringPosition"));

	struct
	{
		struct FVector                 OutFiringPosition;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutFiringPosition != nullptr)
		*OutFiringPosition = params.OutFiringPosition;
}


// Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AILargeShip_StandardHull_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_AILargeShip_StandardHull.BP_AILargeShip_StandardHull_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
