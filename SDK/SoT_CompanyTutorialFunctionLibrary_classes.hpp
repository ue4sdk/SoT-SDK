#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CompanyTutorialFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompanyTutorialFunctionLibrary.CompanyTutorialFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UCompanyTutorialFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CompanyTutorialFunctionLibrary.CompanyTutorialFunctionLibrary_C"));
		return ptr;
	}


	static void Entitlement_Query__Is_Below_Rank(class AAthenaPlayerController* AthenaPlayerController, class UClass* RankDesc, class UObject* __WorldContext, bool* Result);
	static void Entitlement_Query__Has_Completed_Tale(class AAthenaPlayerController* AthenaPlayerController, class UClass* TaleRankDesc, class UObject* __WorldContext, bool* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
