// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipStorageBarrel_Wood_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_SmallShipStorageBarrel_Wood_C::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace");

	ABP_SmallShipStorageBarrel_Wood_C_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SmallShipStorageBarrel_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShipStorageBarrel_Wood.BP_SmallShipStorageBarrel_Wood_C.UserConstructionScript");

	ABP_SmallShipStorageBarrel_Wood_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
