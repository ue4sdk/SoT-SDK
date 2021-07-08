// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_JsonUtilities_classes.hpp"

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

bool UJsonUtilitiesBlueprintHelperLibrary::UStructToJsonObjectString(const struct FGenericStruct& Struct, class FString* OutJsonString)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString"));

	struct
	{
		struct FGenericStruct          Struct;
		class FString                  OutJsonString;
		bool                           ReturnValue;
	} params;

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
// class FString                  InJsonString                   (Parm, ZeroConstructor)
// struct FGenericStruct          Struct                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJsonUtilitiesBlueprintHelperLibrary::JsonObjectStringToUStruct(const class FString& InJsonString, const struct FGenericStruct& Struct)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct"));

	struct
	{
		class FString                  InJsonString;
		struct FGenericStruct          Struct;
		bool                           ReturnValue;
	} params;

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
