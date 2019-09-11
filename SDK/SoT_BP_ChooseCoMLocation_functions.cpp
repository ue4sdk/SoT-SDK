// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ChooseCoMLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ChooseCoMLocation.BP_ChooseCoMLocation_C.OnBeginCustom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_Puzzle>      PossibleLocations              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UQuestBookPageBundle*    Pages                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class AActor>        LocationAssetID                (Parm, OutParm)

void UBP_ChooseCoMLocation_C::OnBeginCustom(TArray<struct FDS_Puzzle>* PossibleLocations, class AActor** Location, class UQuestBookPageBundle** Pages, TAssetPtr<class AActor>* LocationAssetID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ChooseCoMLocation.BP_ChooseCoMLocation_C.OnBeginCustom"));

	struct
	{
		TArray<struct FDS_Puzzle>      PossibleLocations;
		class AActor*                  Location;
		class UQuestBookPageBundle*    Pages;
		TAssetPtr<class AActor>        LocationAssetID;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PossibleLocations != nullptr)
		*PossibleLocations = params.PossibleLocations;
	if (Location != nullptr)
		*Location = params.Location;
	if (Pages != nullptr)
		*Pages = params.Pages;
	if (LocationAssetID != nullptr)
		*LocationAssetID = params.LocationAssetID;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
