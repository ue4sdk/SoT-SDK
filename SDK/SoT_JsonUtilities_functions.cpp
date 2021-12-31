// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_JsonUtilities_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FGenericStruct                 Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FString                        OutJsonString                  (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::UStructToJsonObjectString(const FGenericStruct& Struct, FString* OutJsonString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString"));

	UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params params;
	params.Struct = Struct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutJsonString != nullptr)
		*OutJsonString = params.OutJsonString;

	return params.ReturnValue;
}


// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FString                        InJsonString                   (Parm, ZeroConstructor)
// FGenericStruct                 Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::JsonObjectStringToUStruct(const FString& InJsonString, const FGenericStruct& Struct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct"));

	UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params params;
	params.InJsonString = InJsonString;
	params.Struct = Struct;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
