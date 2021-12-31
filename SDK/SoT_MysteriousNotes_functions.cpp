// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           InCinematicSkipped             (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerMysteriousNoteComponent::TriggerNotesReceivedPopup(bool InCinematicSkipped)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup"));

	UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params params;
	params.InCinematicSkipped = InCinematicSkipped;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// APlayerController*             InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)
// FName                          InCompletionID                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_NoteCompletionStepReceived(APlayerController* InPlayerController, const FName& InCompletionID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived"));

	UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params params;
	params.InPlayerController = InPlayerController;
	params.InCompletionID = InCompletionID;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// APlayerController*             InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FGuid                          NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_MarkNoteAsRead(APlayerController* InPlayerController, const FGuid& NoteId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead"));

	UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params params;
	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// APlayerController*             InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FGuid                          NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_MarkNoteAsDeleted(APlayerController* InPlayerController, const FGuid& NoteId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted"));

	UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params params;
	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
// (Final, RequiredAPI, Native, Private)

void UPlayerMysteriousNoteComponent::OnRep_NoteData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData"));

	UPlayerMysteriousNoteComponent_OnRep_NoteData_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
// (Final, RequiredAPI, Native, Private)

void UPlayerMysteriousNoteComponent::OnRep_BeenPossessed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed"));

	UPlayerMysteriousNoteComponent_OnRep_BeenPossessed_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.CustomServerUpdateDetailNotes
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<FNotesRemoteServiceNoteDetailModel> InNotes                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerMysteriousNoteComponent::CustomServerUpdateDetailNotes(TArray<FNotesRemoteServiceNoteDetailModel> InNotes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.CustomServerUpdateDetailNotes"));

	UPlayerMysteriousNoteComponent_CustomServerUpdateDetailNotes_Params params;
	params.InNotes = InNotes;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// FString                        NoteType                       (Parm, ZeroConstructor)
// FString                        NoteTitle                      (Parm, ZeroConstructor)
// FString                        NoteBody                       (Parm, ZeroConstructor)
// TArray<FString>                CompletionStrings              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerMysteriousNoteComponent::AddFakeNote(const FString& NoteType, const FString& NoteTitle, const FString& NoteBody, TArray<FString> CompletionStrings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote"));

	UPlayerMysteriousNoteComponent_AddFakeNote_Params params;
	params.NoteType = NoteType;
	params.NoteTitle = NoteTitle;
	params.NoteBody = NoteBody;
	params.CompletionStrings = CompletionStrings;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
// (Final, Native, Private)
// Parameters:
// UCanvas*                       Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void AWieldableMysteriousNote::OnTextCanvasUpdate(UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate"));

	AWieldableMysteriousNote_OnTextCanvasUpdate_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
// (Final, RequiredAPI, Native, Private)

void AWieldableMysteriousNote::OnRep_NoteLayout()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout"));

	AWieldableMysteriousNote_OnRep_NoteLayout_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
