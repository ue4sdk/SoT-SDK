// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_StarsOfAThiefDefinitionDev_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StarsOfAThiefDefinitionDev.StarsOfAThiefDefinitionDev_C.GetIslandForActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   Name                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStarsOfAThiefDefinitionDev_C::GetIslandForActor(TAssetPtr<class AActor> Actor, struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function StarsOfAThiefDefinitionDev.StarsOfAThiefDefinitionDev_C.GetIslandForActor"));

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
