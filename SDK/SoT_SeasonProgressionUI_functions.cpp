// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SeasonProgressionUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed
// (Final, Native, Private)

void USeasonProgressionUIComponent::OnHUDDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SeasonProgressionUI.SeasonProgressionUIComponent.OnHUDDestroyed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SeasonProgressionUI.SeasonProgressionUICompositeInputHandler.OnMenuButtonPressed
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInputHandlerResult> USeasonProgressionUICompositeInputHandler::OnMenuButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SeasonProgressionUI.SeasonProgressionUICompositeInputHandler.OnMenuButtonPressed"));

	struct
	{
		TEnumAsByte<EInputHandlerResult> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
