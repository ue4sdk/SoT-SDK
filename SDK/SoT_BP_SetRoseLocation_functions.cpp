// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SetRoseLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SetRoseLocation.BP_SetRoseLocation_C.OnBeginCustom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TAssetPtr<class AActor>> PendantLocations               (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  RoseLocation                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_SetRoseLocation_C::OnBeginCustom(TArray<TAssetPtr<class AActor>>* PendantLocations, class AActor** RoseLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_SetRoseLocation.BP_SetRoseLocation_C.OnBeginCustom"));

	struct
	{
		TArray<TAssetPtr<class AActor>> PendantLocations;
		class AActor*                  RoseLocation;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PendantLocations != nullptr)
		*PendantLocations = params.PendantLocations;
	if (RoseLocation != nullptr)
		*RoseLocation = params.RoseLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
