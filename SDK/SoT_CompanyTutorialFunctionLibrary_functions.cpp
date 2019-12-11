// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CompanyTutorialFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompanyTutorialFunctionLibrary.CompanyTutorialFunctionLibrary_C.Entitlement Query: Is Below Rank
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAthenaPlayerController* AthenaPlayerController         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  RankDesc                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCompanyTutorialFunctionLibrary_C::Entitlement_Query__Is_Below_Rank(class AAthenaPlayerController* AthenaPlayerController, class UClass* RankDesc, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompanyTutorialFunctionLibrary.CompanyTutorialFunctionLibrary_C.Entitlement Query: Is Below Rank"));

	struct
	{
		class AAthenaPlayerController* AthenaPlayerController;
		class UClass*                  RankDesc;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params;

	params.AthenaPlayerController = AthenaPlayerController;
	params.RankDesc = RankDesc;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function CompanyTutorialFunctionLibrary.CompanyTutorialFunctionLibrary_C.Entitlement Query: Has Completed Tale
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AAthenaPlayerController* AthenaPlayerController         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  TaleRankDesc                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCompanyTutorialFunctionLibrary_C::Entitlement_Query__Has_Completed_Tale(class AAthenaPlayerController* AthenaPlayerController, class UClass* TaleRankDesc, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompanyTutorialFunctionLibrary.CompanyTutorialFunctionLibrary_C.Entitlement Query: Has Completed Tale"));

	struct
	{
		class AAthenaPlayerController* AthenaPlayerController;
		class UClass*                  TaleRankDesc;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params;

	params.AthenaPlayerController = AthenaPlayerController;
	params.TaleRankDesc = TaleRankDesc;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
