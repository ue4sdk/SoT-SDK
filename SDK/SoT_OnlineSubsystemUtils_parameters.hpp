#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OnlineSubsystemUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              AchievementId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              AchievementId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFoundID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	FText                                              Title;                                                    // (Parm, OutParm)
	FText                                              LockedDescription;                                        // (Parm, OutParm)
	FText                                              UnlockedDescription;                                      // (Parm, OutParm)
	bool                                               bHidden;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Params
{
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FInAppPurchaseProductRequest                       ProductRequest;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	UInAppPurchaseCallbackProxy*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Params
{
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<FString>                                    ProductIdentifiers;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	UInAppPurchaseQueryCallbackProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
struct UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Params
{
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UInAppPurchaseRestoreCallbackProxy*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StatValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              SessionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	ULeaderboardFlushCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ULeaderboardQueryCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct ULogoutCallbackProxy_Logout_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ULogoutCallbackProxy*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
struct AOnlineBeaconClient_ClientOnConnected_Params
{
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct APartyBeaconClient_ServerUpdateReservationRequest_Params
{
	FString                                            SessionId;                                                // (Parm, ZeroConstructor)
	FPartyReservation                                  ReservationUpdate;                                        // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct APartyBeaconClient_ServerReservationRequest_Params
{
	FString                                            SessionId;                                                // (Parm, ZeroConstructor)
	FPartyReservation                                  Reservation;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct APartyBeaconClient_ServerCancelReservationRequest_Params
{
	FUniqueNetIdRepl                                   PartyLeader;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct APartyBeaconClient_ClientSendReservationUpdates_Params
{
	int                                                NumRemainingReservations;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct APartyBeaconClient_ClientReservationResponse_Params
{
	TEnumAsByte<EPartyReservationResult>               ReservationResponse;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
struct ATestBeaconClient_ServerPong_Params
{
};

// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
struct ATestBeaconClient_ClientPing_Params
{
};

// Function OnlineSubsystemUtils.OnlineBlueprintCallProxyBase.Activate
struct UOnlineBlueprintCallProxyBase_Activate_Params
{
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UAchievementQueryCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UAchievementQueryCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              AchievementName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UserTag;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UAchievementWriteCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UConnectionCallbackProxy*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UCreateSessionCallbackProxy_CreateSession_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UCreateSessionCallbackProxy*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UDestroySessionCallbackProxy_DestroySession_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UDestroySessionCallbackProxy*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UEndMatchCallbackProxy_EndMatch_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>   MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            MatchID;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>                       LocalPlayerOutcome;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMPMatchOutcome>                       OtherPlayersOutcome;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	UEndMatchCallbackProxy*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UEndTurnCallbackProxy_EndTurn_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            MatchID;                                                  // (Parm, ZeroConstructor)
	TScriptInterface<class UTurnBasedMatchInterface>   TurnBasedMatchInterface;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UEndTurnCallbackProxy*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UFindSessionsCallbackProxy_GetServerName_Params
{
	FBlueprintSessionResult                            Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	FString                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
	FBlueprintSessionResult                            Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
	FBlueprintSessionResult                            Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
	FBlueprintSessionResult                            Result;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UFindSessionsCallbackProxy_FindSessions_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLAN;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	UFindSessionsCallbackProxy*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UTurnBasedMatchInterface>   MatchActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowExistingMatches;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	UFindTurnBasedMatchCallbackProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UJoinSessionCallbackProxy_JoinSession_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FBlueprintSessionResult                            SearchResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	UJoinSessionCallbackProxy*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UQuitMatchCallbackProxy_QuitMatch_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            MatchID;                                                  // (Parm, ZeroConstructor)
	TEnumAsByte<EMPMatchOutcome>                       Outcome;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TurnTimeoutInSeconds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	UQuitMatchCallbackProxy*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	UShowLoginUICallbackProxy*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	UObject*                                           Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            MatchID;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            PlayerDisplayName;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            MatchID;                                                  // (Parm, ZeroConstructor)
	int                                                PlayerIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
	UObject*                                           WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	APlayerController*                                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	FString                                            MatchID;                                                  // (Parm, ZeroConstructor)
	bool                                               bIsMyTurn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
