#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
struct UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params
{
	bool                                               InCinematicSkipped;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
struct UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params
{
	APlayerController*                                 InPlayerController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	FName                                              InCompletionID;                                           // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params
{
	APlayerController*                                 InPlayerController;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FGuid                                              NoteId;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params
{
	APlayerController*                                 InPlayerController;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	FGuid                                              NoteId;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
struct UPlayerMysteriousNoteComponent_OnRep_NoteData_Params
{
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
struct UPlayerMysteriousNoteComponent_OnRep_BeenPossessed_Params
{
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.CustomServerUpdateDetailNotes
struct UPlayerMysteriousNoteComponent_CustomServerUpdateDetailNotes_Params
{
	TArray<FNotesRemoteServiceNoteDetailModel>         InNotes;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
struct UPlayerMysteriousNoteComponent_AddFakeNote_Params
{
	FString                                            NoteType;                                                 // (Parm, ZeroConstructor)
	FString                                            NoteTitle;                                                // (Parm, ZeroConstructor)
	FString                                            NoteBody;                                                 // (Parm, ZeroConstructor)
	TArray<FString>                                    CompletionStrings;                                        // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
struct AWieldableMysteriousNote_OnTextCanvasUpdate_Params
{
	UCanvas*                                           Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
struct AWieldableMysteriousNote_OnRep_NoteLayout_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
