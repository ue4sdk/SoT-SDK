// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MerchantContracts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameServiceProviderInterface> ServiceProviderInterface       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeLimit                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMerchantContractsBlueprintLibrary::GetDateFromTimeLimit(const TScriptInterface<class UGameServiceProviderInterface>& ServiceProviderInterface, float TimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit"));

	struct
	{
		TScriptInterface<class UGameServiceProviderInterface> ServiceProviderInterface;
		float                          TimeLimit;
		struct FText                   ReturnValue;
	} params;

	params.ServiceProviderInterface = ServiceProviderInterface;
	params.TimeLimit = TimeLimit;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
