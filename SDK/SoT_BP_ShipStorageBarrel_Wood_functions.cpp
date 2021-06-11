// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipStorageBarrel_Wood_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ShipStorageBarrel_Wood_C::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.ShouldDrawTooltipInWorldSpace"));

	struct
	{
		class AActor*                  InInteractor;
		struct FVector                 DesiredTooltipWorldPosition;
		bool                           ReturnValue;
	} params;

	params.InInteractor = InInteractor;

	UObject::ProcessEvent(fn, &params);

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;

	return params.ReturnValue;
}


// Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ShipStorageBarrel_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ShipStorageBarrel_Wood.BP_ShipStorageBarrel_Wood_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
