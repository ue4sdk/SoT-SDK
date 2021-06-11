// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueFramework_classes.hpp"

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UClueConnectionConfig*   ConnectionConfiguration        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Difficulty                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AllowedClueTypes               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UTaleQuestSelectorService* SelectorService                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FClueSite               TargetSite                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UClueDescriptor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClueDescriptor* UClueConnectionBlueprintFunctionLibrary::CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, const struct FClueSite& TargetSite)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite"));

	struct
	{
		class UClueConnectionConfig*   ConnectionConfiguration;
		int                            Difficulty;
		TArray<class UClass*>          AllowedClueTypes;
		class UTaleQuestSelectorService* SelectorService;
		struct FVector                 SourceLocation;
		struct FClueSite               TargetSite;
		class UClueDescriptor*         ReturnValue;
	} params;

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
// class AActor*                  Participant                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClueDescriptor*         Clue                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ClueSite                       (Parm, ZeroConstructor, IsPlainOldData)

void UClueLifetimeBlueprintFunctionLibrary::GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue, class UClass* ClueSite)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant"));

	struct
	{
		class AActor*                  Participant;
		class UClueDescriptor*         Clue;
		class UClass*                  ClueSite;
	} params;

	params.Participant = Participant;
	params.Clue = Clue;
	params.ClueSite = ClueSite;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FClueSite>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FClueSite> UTaleQuestClueSiteService::GetClueSites()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.TaleQuestClueSiteService.GetClueSites"));

	struct
	{
		TArray<struct FClueSite>       ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
