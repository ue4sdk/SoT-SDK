// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OnlineSubsystemUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AchievementId                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAchievementBlueprintLibrary::GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementId, bool* bFoundID, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FName                   AchievementId;
		bool                           bFoundID;
		float                          Progress;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementId = AchievementId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AchievementId                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm, OutParm)
// struct FText                   LockedDescription              (Parm, OutParm)
// struct FText                   UnlockedDescription            (Parm, OutParm)
// bool                           bHidden                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAchievementBlueprintLibrary::GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementId, bool* bFoundID, struct FText* Title, struct FText* LockedDescription, struct FText* UnlockedDescription, bool* bHidden)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FName                   AchievementId;
		bool                           bFoundID;
		struct FText                   Title;
		struct FText                   LockedDescription;
		struct FText                   UnlockedDescription;
		bool                           bHidden;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementId = AchievementId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bFoundID != nullptr)
		*bFoundID = params.bFoundID;
	if (Title != nullptr)
		*Title = params.Title;
	if (LockedDescription != nullptr)
		*LockedDescription = params.LockedDescription;
	if (UnlockedDescription != nullptr)
		*UnlockedDescription = params.UnlockedDescription;
	if (bHidden != nullptr)
		*bHidden = params.bHidden;
}


// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FInAppPurchaseProductRequest ProductRequest                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UInAppPurchaseCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInAppPurchaseCallbackProxy* UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FInAppPurchaseProductRequest ProductRequest;
		class UInAppPurchaseCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.ProductRequest = ProductRequest;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          ProductIdentifiers             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UInAppPurchaseQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInAppPurchaseQueryCallbackProxy* UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery"));

	struct
	{
		class APlayerController*       PlayerController;
		TArray<class FString>          ProductIdentifiers;
		class UInAppPurchaseQueryCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.ProductIdentifiers = ProductIdentifiers;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UInAppPurchaseRestoreCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInAppPurchaseRestoreCallbackProxy* UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore"));

	struct
	{
		class APlayerController*       PlayerController;
		class UInAppPurchaseRestoreCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            StatValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(class APlayerController* PlayerController, const struct FName& StatName, int StatValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FName                   StatName;
		int                            StatValue;
		bool                           ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.StatName = StatName;
	params.StatValue = StatValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SessionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class ULeaderboardFlushCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULeaderboardFlushCallbackProxy* ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(class APlayerController* PlayerController, const struct FName& SessionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FName                   SessionName;
		class ULeaderboardFlushCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.SessionName = SessionName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StatName                       (Parm, ZeroConstructor, IsPlainOldData)
// class ULeaderboardQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULeaderboardQueryCallbackProxy* ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const struct FName& StatName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery"));

	struct
	{
		class APlayerController*       PlayerController;
		struct FName                   StatName;
		class ULeaderboardQueryCallbackProxy* ReturnValue;
	} params;

	params.PlayerController = PlayerController;
	params.StatName = StatName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class ULogoutCallbackProxy*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogoutCallbackProxy* ULogoutCallbackProxy::Logout(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class ULogoutCallbackProxy*    ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
// (Final, Net, NetReliable, Native, Event, Private, NetClient)

void AOnlineBeaconClient::ClientOnConnected()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                  SessionId                      (Parm, ZeroConstructor)
// struct FPartyReservation       ReservationUpdate              (ConstParm, Parm, ReferenceParm)

void APartyBeaconClient::ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest"));

	struct
	{
		class FString                  SessionId;
		struct FPartyReservation       ReservationUpdate;
	} params;

	params.SessionId = SessionId;
	params.ReservationUpdate = ReservationUpdate;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class FString                  SessionId                      (Parm, ZeroConstructor)
// struct FPartyReservation       Reservation                    (ConstParm, Parm, ReferenceParm)

void APartyBeaconClient::ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest"));

	struct
	{
		class FString                  SessionId;
		struct FPartyReservation       Reservation;
	} params;

	params.SessionId = SessionId;
	params.Reservation = Reservation;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        PartyLeader                    (ConstParm, Parm, ReferenceParm)

void APartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest"));

	struct
	{
		struct FUniqueNetIdRepl        PartyLeader;
	} params;

	params.PartyLeader = PartyLeader;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// int                            NumRemainingReservations       (Parm, ZeroConstructor, IsPlainOldData)

void APartyBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates"));

	struct
	{
		int                            NumRemainingReservations;
	} params;

	params.NumRemainingReservations = NumRemainingReservations;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<EPartyReservationResult> ReservationResponse            (Parm, ZeroConstructor, IsPlainOldData)

void APartyBeaconClient::ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse"));

	struct
	{
		TEnumAsByte<EPartyReservationResult> ReservationResponse;
	} params;

	params.ReservationResponse = ReservationResponse;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void ATestBeaconClient::ServerPong()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TestBeaconClient.ServerPong"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
// (Net, NetReliable, Native, Event, Public, NetClient)

void ATestBeaconClient::ClientPing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TestBeaconClient.ClientPing"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate
// (Native, Public, BlueprintCallable)

void UOnlineBlueprintCallProxyBase::Activate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UAchievementQueryCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UAchievementQueryCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAchievementQueryCallbackProxy* UAchievementQueryCallbackProxy::CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UAchievementQueryCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AchievementName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            UserTag                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAchievementWriteCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FName& AchievementName, float Progress, int UserTag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FName                   AchievementName;
		float                          Progress;
		int                            UserTag;
		class UAchievementWriteCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.AchievementName = AchievementName;
	params.Progress = Progress;
	params.UserTag = UserTag;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UConnectionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UConnectionCallbackProxy* UConnectionCallbackProxy::ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UConnectionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// class UCreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCreateSessionCallbackProxy* UCreateSessionCallbackProxy::CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int PublicConnections, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            PublicConnections;
		bool                           bUseLAN;
		class UCreateSessionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.PublicConnections = PublicConnections;
	params.bUseLAN = bUseLAN;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UDestroySessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDestroySessionCallbackProxy* UDestroySessionCallbackProxy::DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UDestroySessionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchID                        (Parm, ZeroConstructor)
// TEnumAsByte<EMPMatchOutcome>   LocalPlayerOutcome             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMPMatchOutcome>   OtherPlayersOutcome            (Parm, ZeroConstructor, IsPlainOldData)
// class UEndMatchCallbackProxy*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, const class FString& MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		TScriptInterface<class UTurnBasedMatchInterface> MatchActor;
		class FString                  MatchID;
		TEnumAsByte<EMPMatchOutcome>   LocalPlayerOutcome;
		TEnumAsByte<EMPMatchOutcome>   OtherPlayersOutcome;
		class UEndMatchCallbackProxy*  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MatchID = MatchID;
	params.LocalPlayerOutcome = LocalPlayerOutcome;
	params.OtherPlayersOutcome = OtherPlayersOutcome;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchID                        (Parm, ZeroConstructor)
// TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface        (Parm, ZeroConstructor, IsPlainOldData)
// class UEndTurnCallbackProxy*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, const TScriptInterface<class UTurnBasedMatchInterface>& TurnBasedMatchInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class FString                  MatchID;
		TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface;
		class UEndTurnCallbackProxy*   ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.TurnBasedMatchInterface = TurnBasedMatchInterface;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UFindSessionsCallbackProxy::GetServerName(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName"));

	struct
	{
		struct FBlueprintSessionResult Result;
		class FString                  ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFindSessionsCallbackProxy::GetPingInMs(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs"));

	struct
	{
		struct FBlueprintSessionResult Result;
		int                            ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFindSessionsCallbackProxy::GetMaxPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers"));

	struct
	{
		struct FBlueprintSessionResult Result;
		int                            ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlueprintSessionResult Result                         (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFindSessionsCallbackProxy::GetCurrentPlayers(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers"));

	struct
	{
		struct FBlueprintSessionResult Result;
		int                            ReturnValue;
	} params;

	params.Result = Result;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLAN                        (Parm, ZeroConstructor, IsPlainOldData)
// class UFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFindSessionsCallbackProxy* UFindSessionsCallbackProxy::FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int MaxResults, bool bUseLAN)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		int                            MaxResults;
		bool                           bUseLAN;
		class UFindSessionsCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MaxResults = MaxResults;
	params.bUseLAN = bUseLAN;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UTurnBasedMatchInterface> MatchActor                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxPlayers                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayerGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowExistingMatches            (Parm, ZeroConstructor, IsPlainOldData)
// class UFindTurnBasedMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const TScriptInterface<class UTurnBasedMatchInterface>& MatchActor, int MinPlayers, int MaxPlayers, int PlayerGroup, bool ShowExistingMatches)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		TScriptInterface<class UTurnBasedMatchInterface> MatchActor;
		int                            MinPlayers;
		int                            MaxPlayers;
		int                            PlayerGroup;
		bool                           ShowExistingMatches;
		class UFindTurnBasedMatchCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchActor = MatchActor;
	params.MinPlayers = MinPlayers;
	params.MaxPlayers = MaxPlayers;
	params.PlayerGroup = PlayerGroup;
	params.ShowExistingMatches = ShowExistingMatches;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlueprintSessionResult SearchResult                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UJoinSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UJoinSessionCallbackProxy* UJoinSessionCallbackProxy::JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FBlueprintSessionResult SearchResult;
		class UJoinSessionCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.SearchResult = SearchResult;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchID                        (Parm, ZeroConstructor)
// TEnumAsByte<EMPMatchOutcome>   Outcome                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            TurnTimeoutInSeconds           (Parm, ZeroConstructor, IsPlainOldData)
// class UQuitMatchCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int TurnTimeoutInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class FString                  MatchID;
		TEnumAsByte<EMPMatchOutcome>   Outcome;
		int                            TurnTimeoutInSeconds;
		class UQuitMatchCallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.Outcome = Outcome;
	params.TurnTimeoutInSeconds = TurnTimeoutInSeconds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)
// class UShowLoginUICallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UShowLoginUICallbackProxy* UShowLoginUICallbackProxy::ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       InPlayerController;
		class UShowLoginUICallbackProxy* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InPlayerController = InPlayerController;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UTurnBasedBlueprintLibrary::RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class UObject*                 Object;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.Object = Object;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchID                        (Parm, ZeroConstructor)
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PlayerDisplayName              (Parm, OutParm, ZeroConstructor)

void UTurnBasedBlueprintLibrary::GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int PlayerIndex, class FString* PlayerDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class FString                  MatchID;
		int                            PlayerIndex;
		class FString                  PlayerDisplayName;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;
	params.PlayerIndex = PlayerIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlayerDisplayName != nullptr)
		*PlayerDisplayName = params.PlayerDisplayName;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchID                        (Parm, ZeroConstructor)
// int                            PlayerIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTurnBasedBlueprintLibrary::GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int* PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class FString                  MatchID;
		int                            PlayerIndex;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;
}


// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  MatchID                        (Parm, ZeroConstructor)
// bool                           bIsMyTurn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTurnBasedBlueprintLibrary::GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn"));

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		class FString                  MatchID;
		bool                           bIsMyTurn;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.MatchID = MatchID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (bIsMyTurn != nullptr)
		*bIsMyTurn = params.bIsMyTurn;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
