// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_CTPurchaseVoyageSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.AreTutorialsForceDisabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::AreTutorialsForceDisabled(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.AreTutorialsForceDisabled"));

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsCurrentlyControlledCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::IsCurrentlyControlledCharacter(class AActor* Actor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.IsCurrentlyControlledCharacter"));

	struct
	{
		class AActor*                  Actor;
		bool                           Result;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowMerchantAllianceCompanyPrompts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowMerchantAllianceCompanyPrompts(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowMerchantAllianceCompanyPrompts"));

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowOrderOfSoulsCompanyPrompts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowOrderOfSoulsCompanyPrompts(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowOrderOfSoulsCompanyPrompts"));

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllOutpostOverlapActors
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ClearAllOutpostOverlapActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllOutpostOverlapActors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.EvaluateShouldShowFromCompanyEntitlements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldShowAny                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowGoldHoarders         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowOrderOfSouls         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowMerchantAlliance     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::EvaluateShouldShowFromCompanyEntitlements(bool* ShouldShowAny, bool* ShouldShowGoldHoarders, bool* ShouldShowOrderOfSouls, bool* ShouldShowMerchantAlliance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.EvaluateShouldShowFromCompanyEntitlements"));

	struct
	{
		bool                           ShouldShowAny;
		bool                           ShouldShowGoldHoarders;
		bool                           ShouldShowOrderOfSouls;
		bool                           ShouldShowMerchantAlliance;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ShouldShowAny != nullptr)
		*ShouldShowAny = params.ShouldShowAny;
	if (ShouldShowGoldHoarders != nullptr)
		*ShouldShowGoldHoarders = params.ShouldShowGoldHoarders;
	if (ShouldShowOrderOfSouls != nullptr)
		*ShouldShowOrderOfSouls = params.ShouldShowOrderOfSouls;
	if (ShouldShowMerchantAlliance != nullptr)
		*ShouldShowMerchantAlliance = params.ShouldShowMerchantAlliance;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowGoldHoarderCompanyPrompts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ShouldShowGoldHoarderCompanyPrompts(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ShouldShowGoldHoarderCompanyPrompts"));

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllGoldHoarderOverlapActors
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ClearAllGoldHoarderOverlapActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ClearAllGoldHoarderOverlapActors"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetGoldHoardersLocations
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         GoldHoarderLocations           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetGoldHoardersLocations(TArray<struct FVector>* GoldHoarderLocations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetGoldHoardersLocations"));

	struct
	{
		TArray<struct FVector>         GoldHoarderLocations;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (GoldHoarderLocations != nullptr)
		*GoldHoarderLocations = params.GoldHoarderLocations;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Evaluate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Complete
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::Complete()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.Complete"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOutposts
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           OutpostNames                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetOutposts(TArray<struct FName>* OutpostNames)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOutposts"));

	struct
	{
		TArray<struct FName>           OutpostNames;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutpostNames != nullptr)
		*OutpostNames = params.OutpostNames;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UninitializeImplementable
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::UninitializeImplementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UninitializeImplementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PostInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PostInitialize()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PostInitialize"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOrderOfSoulsLocations
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Order_of_Souls_Locations       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetOrderOfSoulsLocations(TArray<struct FVector>* Order_of_Souls_Locations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetOrderOfSoulsLocations"));

	struct
	{
		TArray<struct FVector>         Order_of_Souls_Locations;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Order_of_Souls_Locations != nullptr)
		*Order_of_Souls_Locations = params.Order_of_Souls_Locations;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetMerchantAllianceLocations
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Merchant_Alliance_Locations    (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::SetMerchantAllianceLocations(TArray<struct FVector>* Merchant_Alliance_Locations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.SetMerchantAllianceLocations"));

	struct
	{
		TArray<struct FVector>         Merchant_Alliance_Locations;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Merchant_Alliance_Locations != nullptr)
		*Merchant_Alliance_Locations = params.Merchant_Alliance_Locations;
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::RegisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterCharacterEvents_Implementable
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FObjectMessagingDispatcherHandle CharacterDispatcher            (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::UnregisterCharacterEvents_Implementable(const struct FObjectMessagingDispatcherHandle& CharacterDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterCharacterEvents_Implementable"));

	struct
	{
		struct FObjectMessagingDispatcherHandle CharacterDispatcher;
	} params;

	params.CharacterDispatcher = CharacterDispatcher;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::UnregisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.UnregisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::RegisterOtherEvents_Implementable()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.RegisterOtherEvents_Implementable"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ForceDisableTutorials
// (BlueprintCallable, BlueprintEvent)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ForceDisableTutorials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ForceDisableTutorials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOfferPurchasedEvent    Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnOfferPurchased(const struct FOfferPurchasedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnOfferPurchased"));

	struct
	{
		struct FOfferPurchasedEvent    Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageProposalSelectedEvent Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerProposedVoyage(const struct FVoyageProposalSelectedEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerProposedVoyage"));

	struct
	{
		struct FVoyageProposalSelectedEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageProposalDiscardEvent Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageDiscardFromInventory(const struct FVoyageProposalDiscardEvent& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageDiscardFromInventory"));

	struct
	{
		struct FVoyageProposalDiscardEvent Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageBegun            Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageBegun(const struct FVoyageBegun& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageBegun"));

	struct
	{
		struct FVoyageBegun            Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageComplete         Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnVoyageCompleted(const struct FVoyageComplete& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnVoyageCompleted"));

	struct
	{
		struct FVoyageComplete         Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventEnteredShip       Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnSomethingEnteredShip(const struct FEventEnteredShip& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnSomethingEnteredShip"));

	struct
	{
		struct FEventEnteredShip       Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventExitedShip        Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerExitedShip(const struct FEventExitedShip& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerExitedShip"));

	struct
	{
		struct FEventExitedShip        Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftOutpostRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftOutpostRadius"));

	struct
	{
		class AActor*                  ActorInZone;
	} params;

	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredOutpostRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredOutpostRadius"));

	struct
	{
		class AActor*                  ActorInZone;
	} params;

	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerLeftGoldhoarderRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerLeftGoldhoarderRadius"));

	struct
	{
		class AActor*                  ActorInZone;
	} params;

	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorInZone                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::PlayerEnteredGoldhoarderRadius(class AActor* ActorInZone)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.PlayerEnteredGoldhoarderRadius"));

	struct
	{
		class AActor*                  ActorInZone;
	} params;

	params.ActorInZone = ActorInZone;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventPlayerWithdrewVoyage Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerWithdrewVoyage(const struct FEventPlayerWithdrewVoyage& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerWithdrewVoyage"));

	struct
	{
		struct FEventPlayerWithdrewVoyage Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVoyageCancelled        Event                          (Parm)

void UBP_Prompt_CTPurchaseVoyageSequence_C::OnPlayerCancelledVoyage(const struct FVoyageCancelled& Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.OnPlayerCancelledVoyage"));

	struct
	{
		struct FVoyageCancelled        Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Prompt_CTPurchaseVoyageSequence_C::ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Prompt_CTPurchaseVoyageSequence.BP_Prompt_CTPurchaseVoyageSequence_C.ExecuteUbergraph_BP_Prompt_CTPurchaseVoyageSequence"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
