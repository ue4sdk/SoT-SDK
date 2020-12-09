#pragma once

// Sea of Thieves (2.0) SDK

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
	struct FName                                       CompletionIdent;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.WieldableMysteriousNoteLayoutItem
// 0x00A0
struct FWieldableMysteriousNoteLayoutItem
{
	class FString                                      Theme;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UFont*                                       Font;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTreasureMapWidgetStreamedTexture           Image;                                                    // 0x0018(0x0030) (Edit, DisableEditOnInstance)
	struct FStringAssetReference                       RadialIcon;                                               // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteTitleWidgetText;                                      // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteBodyWidgetText;                                       // 0x0078(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.MysteriousNoteInfo
// 0x0014
struct FMysteriousNoteInfo
{
	struct FGuid                                       NoteId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
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
	TArray<struct FMysteriousNoteInfo>                 PendingNotes;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModelEntry
// 0x0008
struct FMysteriousNotesCompletionEventsModelEntry
{
	struct FName                                       CompletionIdent;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
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
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               CinematicSkipped;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct MysteriousNotes.EventMarkNoteDeleted
// 0x0018
struct FEventMarkNoteDeleted
{
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NoteId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventNoteClientCompletionStep
// 0x0010
struct FEventNoteClientCompletionStep
{
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompletionStepID;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventNoteCompletionStep
// 0x0010
struct FEventNoteCompletionStep
{
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CompletionStepID;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
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
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       NoteId;                                                   // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventPlayerControllerUnpossessed
// 0x0008
struct FEventPlayerControllerUnpossessed
{
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MysteriousNotes.EventPlayerControllerPossessed
// 0x0008
struct FEventPlayerControllerPossessed
{
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
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
	class FString                                      NoteType;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct MysteriousNotes.NoteCompletionEntry
// 0x0020
struct FNoteCompletionEntry
{
	struct FGuid                                       NoteId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              CompletionEventIds;                                       // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct MysteriousNotes.ActiveNoteData
// 0x0030
struct FActiveNoteData
{
	TArray<struct FNotesRemoteServiceNoteModel>        NotesRemoteServiceNoteModels;                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNoteCompletionEntry>                PendingCompletionEntries;                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               PendingDetailRequestIDs;                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct MysteriousNotes.MysteriousNoteRequest
// 0x0030
struct FMysteriousNoteRequest
{
	class APlayerController*                           PlayerController;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPirateIdentity                             PirateIdentity;                                           // 0x0008(0x0028)
};

// ScriptStruct MysteriousNotes.PlayerMysteriousNoteItem
// 0x0048
struct FPlayerMysteriousNoteItem
{
	struct FGuid                                       OriginalNoteID;                                           // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      LocalisedTitle;                                           // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      LocalisedBody;                                            // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      NoteType;                                                 // 0x0030(0x0010) (ZeroConstructor)
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
	struct FGuid                                       NoteId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	class FString                                      NoteState;                                                // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
