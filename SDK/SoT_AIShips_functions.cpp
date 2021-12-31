// Sea of Thieves (2) SDK

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
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FGuid                          CrewId                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAIShipDebugFunctionLibrary::RequestAIShipForCrew(UObject* WorldContextObject, const FGuid& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew"));

	UAIShipDebugFunctionLibrary_RequestAIShipForCrew_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CrewId = CrewId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// UObject*                       WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// UAIShipServiceDataAsset*       ServiceParams                  (Parm, ZeroConstructor, IsPlainOldData)
// FAIShipEncounterBattleDesc     ReturnValue                    (Parm, OutParm, ReturnParm)

FAIShipEncounterBattleDesc UAIShipDebugFunctionLibrary::GenerateAIShipBattleDesc(UObject* WorldContextObject, UAIShipServiceDataAsset* ServiceParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc"));

	UAIShipDebugFunctionLibrary_GenerateAIShipBattleDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ServiceParams = ServiceParams;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIShips.AthenaAIShipController.ApplyControllerParams
// (Native, Public, BlueprintCallable)
// Parameters:
// UAthenaAIControllerParamsDataAsset* ParamsAsset                    (Parm, ZeroConstructor, IsPlainOldData)
// APawn*                         InPawn                         (Parm, ZeroConstructor, IsPlainOldData)

void AAthenaAIShipController::ApplyControllerParams(UAthenaAIControllerParamsDataAsset* ParamsAsset, APawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIShips.AthenaAIShipController.ApplyControllerParams"));

	AAthenaAIShipController_ApplyControllerParams_Params params;
	params.ParamsAsset = ParamsAsset;
	params.InPawn = InPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// FAIShipSailData                SailData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCursedCrewCustomisationInterface::SetCursedCrewCustomisationProperties(const FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties"));

	UCursedCrewCustomisationInterface_SetCursedCrewCustomisationProperties_Params params;
	params.SailData = SailData;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
