// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShortRangeMarkerFramework_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InMarker                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          InActors                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UShortRangeMarkerBlueprintFunctionLibrary::RegisterActorsWithShortRangeMarker(class UObject* WorldContextObject, class AActor* InMarker, TArray<class AActor*>* InActors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ShortRangeMarkerFramework.ShortRangeMarkerBlueprintFunctionLibrary.RegisterActorsWithShortRangeMarker"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  InMarker;
		TArray<class AActor*>          InActors;
	} params;

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
