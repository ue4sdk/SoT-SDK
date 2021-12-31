// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShortRangeMarkerFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp
// (Net, NetReliable, Native, Event, NetMulticast, Protected)

void AShortRangeMarker::Multicast_OnCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShortRangeMarkerFramework.ShortRangeMarker.Multicast_OnCleanUp"));

	AShortRangeMarker_Multicast_OnCleanUp_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// AActor*                        InMarker                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<AActor*>                InActors                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UShortRangeMarkerBlueprintFunctionLibrary::RegisterActorsWithShortRangeMarker(UObject* WorldContextObject, AActor* InMarker, TArray<AActor*>* InActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker"));

	UShortRangeMarkerBlueprintFunctionLibrary_RegisterActorsWithShortRangeMarker_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InMarker = InMarker;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (InActors != nullptr)
		*InActors = params.InActors;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
