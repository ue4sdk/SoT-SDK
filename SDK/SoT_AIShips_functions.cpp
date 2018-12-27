// Sea of Thieves (1.4) SDK

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

	UObject::ProcessEvent(fn, &params);
}


// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAIShipServiceDataAsset* ServiceParams                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIShipEncounterBattleDesc ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIShipEncounterBattleDesc UAIShipDebugFunctionLibrary::STATIC_GenerateAIShipBattleDesc(class UObject* WorldContextObject, class UAIShipServiceDataAsset* ServiceParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc");

	UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServiceParams = ServiceParams;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCursedCrewCustomisationInterface::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties");

	UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params params;
	params.SailData = SailData;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
