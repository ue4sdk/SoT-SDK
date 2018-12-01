// Sea of Thieves (1.4) SDK

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
// struct FGenericStruct          Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  OutJsonString                  (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, class FString* OutJsonString)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString");

	UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params params;
	params.Struct = Struct;

	UObject::ProcessEvent(fn, &params);

	if (OutJsonString != nullptr)
		*OutJsonString = params.OutJsonString;

	return params.ReturnValue;
}


// Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class FString                  InJsonString                   (Parm, ZeroConstructor)
// struct FGenericStruct          Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_JsonObjectStringToUStruct(const class FString& InJsonString, const struct FGenericStruct& Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct");

	UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params params;
	params.InJsonString = InJsonString;
	params.Struct = Struct;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
