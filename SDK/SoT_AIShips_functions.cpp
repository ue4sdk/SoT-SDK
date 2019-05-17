// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIShips_classes.hpp"

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

void UAIShipDebugFunctionLibrary::RequestAIShipForCrew(class UObject* WorldContextObject, const struct FGuid& CrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIShips.AIShipDebugFunctionLibrary.RequestAIShipForCrew"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGuid                   CrewId;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.CrewId = CrewId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAIShipServiceDataAsset* ServiceParams                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIShipEncounterBattleDesc ReturnValue                    (Parm, OutParm, ReturnParm)

struct FAIShipEncounterBattleDesc UAIShipDebugFunctionLibrary::GenerateAIShipBattleDesc(class UObject* WorldContextObject, class UAIShipServiceDataAsset* ServiceParams)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIShips.AIShipDebugFunctionLibrary.GenerateAIShipBattleDesc"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UAIShipServiceDataAsset* ServiceParams;
		struct FAIShipEncounterBattleDesc ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ServiceParams = ServiceParams;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FAIShipSailData         SailData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCursedCrewCustomisationInterface::SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AIShips.CursedCrewCustomisationInterface.SetCursedCrewCustomisationProperties"));

	struct
	{
		struct FAIShipSailData         SailData;
	} params;

	params.SailData = SailData;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
