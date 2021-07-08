// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_classes.hpp"

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

	struct
	{
		bool                           InCinematicSkipped;
	} params;

	params.InCinematicSkipped = InCinematicSkipped;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InCompletionID                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived"));

	struct
	{
		class APlayerController*       InPlayerController;
		struct FName                   InCompletionID;
	} params;

	params.InPlayerController = InPlayerController;
	params.InCompletionID = InCompletionID;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead"));

	struct
	{
		class APlayerController*       InPlayerController;
		struct FGuid                   NoteId;
	} params;

	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerMysteriousNoteComponent::Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted"));

	struct
	{
		class APlayerController*       InPlayerController;
		struct FGuid                   NoteId;
	} params;

	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
// (Final, RequiredAPI, Native, Private)

void UPlayerMysteriousNoteComponent::OnRep_NoteData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
// (Final, RequiredAPI, Native, Private)

void UPlayerMysteriousNoteComponent::OnRep_BeenPossessed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class FString                  NoteType                       (Parm, ZeroConstructor)
// class FString                  NoteTitle                      (Parm, ZeroConstructor)
// class FString                  NoteBody                       (Parm, ZeroConstructor)
// TArray<class FString>          CompletionStrings              (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UPlayerMysteriousNoteComponent::AddFakeNote(const class FString& NoteType, const class FString& NoteTitle, const class FString& NoteBody, TArray<class FString> CompletionStrings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote"));

	struct
	{
		class FString                  NoteType;
		class FString                  NoteTitle;
		class FString                  NoteBody;
		TArray<class FString>          CompletionStrings;
	} params;

	params.NoteType = NoteType;
	params.NoteTitle = NoteTitle;
	params.NoteBody = NoteBody;
	params.CompletionStrings = CompletionStrings;

	UObject::ProcessEvent(fn, &params);
}


// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
// (Final, Native, Private)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void AWieldableMysteriousNote::OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate"));

	struct
	{
		class UCanvas*                 Canvas;
		int                            Width;
		int                            Height;
	} params;

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

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
