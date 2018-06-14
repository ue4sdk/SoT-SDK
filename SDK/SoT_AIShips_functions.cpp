// Sea of Thieves (1.1.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   CrewId                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIShipDebugFunctionLibrary::STATIC_RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew");

	UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
