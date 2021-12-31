// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo
// (Native, Public)

void UClueDestinationDescriptor::OnRep_DestinationInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.ClueDestinationDescriptor.OnRep_DestinationInfo"));

	UClueDestinationDescriptor_OnRep_DestinationInfo_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// UClueConnectionConfig*         ConnectionConfiguration        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Difficulty                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<UClass*>                AllowedClueTypes               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// UTaleQuestSelectorService*     SelectorService                (Parm, ZeroConstructor, IsPlainOldData)
// FVector                        SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FClueSite                      TargetSite                     (ConstParm, Parm, OutParm, ReferenceParm)
// UClueDescriptor*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

UClueDescriptor* UClueConnectionBlueprintFunctionLibrary::CreateCluePointingToSite(UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<UClass*> AllowedClueTypes, UTaleQuestSelectorService* SelectorService, const FVector& SourceLocation, const FClueSite& TargetSite)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite"));

	UClueConnectionBlueprintFunctionLibrary_CreateCluePointingToSite_Params params;
	params.ConnectionConfiguration = ConnectionConfiguration;
	params.Difficulty = Difficulty;
	params.AllowedClueTypes = AllowedClueTypes;
	params.SelectorService = SelectorService;
	params.SourceLocation = SourceLocation;
	params.TargetSite = TargetSite;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// AActor*                        Participant                    (Parm, ZeroConstructor, IsPlainOldData)
// UClueDescriptor*               Clue                           (Parm, ZeroConstructor, IsPlainOldData)
// UClass*                        ClueSite                       (Parm, ZeroConstructor, IsPlainOldData)

void UClueLifetimeBlueprintFunctionLibrary::GiveClueToParticipant(AActor* Participant, UClueDescriptor* Clue, UClass* ClueSite)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant"));

	UClueLifetimeBlueprintFunctionLibrary_GiveClueToParticipant_Params params;
	params.Participant = Participant;
	params.Clue = Clue;
	params.ClueSite = ClueSite;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<FClueSite>              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<FClueSite> UTaleQuestClueSiteService::GetClueSites()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites"));

	UTaleQuestClueSiteService_GetClueSites_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
