#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModel
// 0x0008
struct FMysteriousNotesCompletionEventsModel
{
	FName                                              CompletionIdent;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.WieldableMysteriousNoteLayoutItem
// 0x00A0
struct FWieldableMysteriousNoteLayoutItem
{
	FString                                            Theme;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	UFont*                                             Font;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FTreasureMapWidgetStreamedTexture                  Image;                                                    // 0x0018(0x0030) (Edit, DisableEditOnInstance)
	FStringAssetReference                              RadialIcon;                                               // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	FTreasureMapWidgetText                             NoteTitleWidgetText;                                      // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	FTreasureMapWidgetText                             NoteBodyWidgetText;                                       // 0x0078(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.MysteriousNoteInfo
// 0x0014
struct FMysteriousNoteInfo
{
	FGuid                                              NoteId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               NoteRead;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ShowNoteAnimation;                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.ClientNoteData
// 0x0018
struct FClientNoteData
{
	bool                                               NotifyArrival;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<FMysteriousNoteInfo>                        PendingNotes;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModelEntry
// 0x0008
struct FMysteriousNotesCompletionEventsModelEntry
{
	FName                                              CompletionIdent;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventListenForCinematicEndEvent
// 0x0001
struct FEventListenForCinematicEndEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventTriggerMysteriousNotesPopup
// 0x0010
struct FEventTriggerMysteriousNotesPopup
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CinematicSkipped;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMarkNoteDeleted
// 0x0018
struct FEventMarkNoteDeleted
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              NoteId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventNoteClientCompletionStep
// 0x0010
struct FEventNoteClientCompletionStep
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              CompletionStepID;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventNoteCompletionStep
// 0x0010
struct FEventNoteCompletionStep
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FName                                              CompletionStepID;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventNotesUpdated
// 0x0001
struct FEventNotesUpdated
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMarkNoteRead
// 0x0018
struct FEventMarkNoteRead
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FGuid                                              NoteId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventOnlineAthenaPlayerControllerUnpossessed
// 0x0008
struct FEventOnlineAthenaPlayerControllerUnpossessed
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventPlayerControllerPossessed
// 0x0008
struct FEventPlayerControllerPossessed
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteContentUpdated
// 0x0010
struct FEventMysteriousNoteContentUpdated
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteSettingsLoaded
// 0x0001
struct FEventMysteriousNoteSettingsLoaded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteCustomContentUpdate
// 0x0001
struct FEventMysteriousNoteCustomContentUpdate
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMysteriousNoteRemoved
// 0x0010
struct FEventMysteriousNoteRemoved
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.MysteriousNoteTheme
// 0x0010
struct FMysteriousNoteTheme
{
	FString                                            NoteType;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct MysteriousNotes.NoteCompletionEntry
// 0x0020
struct FNoteCompletionEntry
{
	FGuid                                              NoteId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<FString>                                    CompletionEventIds;                                       // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MysteriousNotes.ActiveNoteData
// 0x0030
struct FActiveNoteData
{
	TArray<FNotesRemoteServiceNoteModel>               NotesRemoteServiceNoteModels;                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<FNoteCompletionEntry>                       PendingCompletionEntries;                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<FGuid>                                      PendingDetailRequestIDs;                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct MysteriousNotes.MysteriousNoteRequest
// 0x0080
struct FMysteriousNoteRequest
{
	APlayerController*                                 PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	FPirateIdentity                                    PirateIdentity;                                           // 0x0008(0x0078)
};

// ScriptStruct MysteriousNotes.PlayerMysteriousNoteItem
// 0x0048
struct FPlayerMysteriousNoteItem
{
	FGuid                                              OriginalNoteID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	FString                                            LocalisedTitle;                                           // 0x0010(0x0010) (ZeroConstructor)
	FString                                            LocalisedBody;                                            // 0x0020(0x0010) (ZeroConstructor)
	FString                                            NoteType;                                                 // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.PlayerSentNotesTelemetryEvent
// 0x0004
struct FPlayerSentNotesTelemetryEvent
{
	int                                                NoteCount;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.PlayerNoteStateChangeTelemetryEvent
// 0x0020
struct FPlayerNoteStateChangeTelemetryEvent
{
	FGuid                                              NoteId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	FString                                            NoteState;                                                // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
