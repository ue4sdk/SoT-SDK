#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext
// 0x0000 (0x0028 - 0x0028)
class UHasPlayerMysteriousNotesRadialContext : public URadialContextBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNoteDesc
// 0x0000 (0x0130 - 0x0130)
class UMysteriousNoteDesc : public UItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNoteDesc"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset
// 0x0010 (0x0038 - 0x0028)
class UMysteriousNotesCompletionEventsModelDataAsset : public UDataAsset
{
public:
	TArray<struct FMysteriousNotesCompletionEventsModel> MysteriousNoteCompletionEvents;                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNoteSettings
// 0x0090 (0x00B8 - 0x0028)
class UMysteriousNoteSettings : public UObject
{
public:
	int                                                LookAheadInMinutes;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RequestTimeout;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       MysteriousNotesCompletionStringsAsset;                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       DefaultRadialIcon;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       WieldableNoteDataAsset;                                   // 0x0050(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       Image;                                                    // 0x0060(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       NotificationBackground;                                   // 0x0070(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FText                                       NotificationText;                                         // 0x0080(0x0038) (Edit, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNoteSettings"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNotesServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UMysteriousNotesServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNotesServiceInterface"));
		return ptr;
	}

};


// Class MysteriousNotes.WieldableMysteriousNoteLayout
// 0x0120 (0x0148 - 0x0028)
class UWieldableMysteriousNoteLayout : public UDataAsset
{
public:
	struct FText                                       DefaultTitle;                                             // 0x0028(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       DefaultBody;                                              // 0x0060(0x0038) (Edit, DisableEditOnInstance)
	struct FWieldableMysteriousNoteLayoutItem          DefaultNoteLayoutItem;                                    // 0x0098(0x00A0) (Edit, DisableEditOnInstance)
	TArray<struct FWieldableMysteriousNoteLayoutItem>  NoteLayoutItems;                                          // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNoteLayout"));
		return ptr;
	}

};


// Class MysteriousNotes.WieldableMysteriousNoteDataAsset
// 0x0010 (0x0038 - 0x0028)
class UWieldableMysteriousNoteDataAsset : public UDataAsset
{
public:
	class UClass*                                      WieldableNoteDesc;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNoteDataAsset"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNotesService
// 0x00C8 (0x0538 - 0x0470)
class AMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0470(0x0028) MISSED OFFSET
	class UMysteriousNoteSettings*                     CachedNoteSettings;                                       // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWieldableMysteriousNoteDataAsset*           WieldableNoteDataAsset;                                   // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMysteriousNotesCompletionEventsModelDataAsset* CompletionEventsModelData;                                // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x04B0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNotesService"));
		return ptr;
	}

};


// Class MysteriousNotes.PlayerMysteriousNoteInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerMysteriousNoteInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.PlayerMysteriousNoteInterface"));
		return ptr;
	}

};


// Class MysteriousNotes.PlayerMysteriousNoteComponent
// 0x0120 (0x01E8 - 0x00C8)
class UPlayerMysteriousNoteComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FClientNoteData                             NoteData;                                                 // 0x00D0(0x0018) (Net)
	bool                                               BeenPossessed;                                            // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               CinematicPlayed;                                          // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xFE];                                      // 0x00EA(0x00FE) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.PlayerMysteriousNoteComponent"));
		return ptr;
	}


	void TriggerNotesReceivedPopup(bool InCinematicSkipped);
	void Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID);
	void Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId);
	void Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId);
	void OnRep_NoteData();
	void OnRep_BeenPossessed();
	void AddFakeNote(const class FString& NoteType, const class FString& NoteTitle, const class FString& NoteBody, TArray<class FString> CompletionStrings);
};


// Class MysteriousNotes.WieldableMysteriousNote
// 0x01A0 (0x09B0 - 0x0810)
class AWieldableMysteriousNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0810(0x0008) MISSED OFFSET
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                             // 0x0818(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                               // 0x0820(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CanvasWidth;                                              // 0x0828(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x082C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x0830(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x0834(0x0054) MISSED OFFSET
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                          // 0x0888(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                 // 0x0890(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UInventoryItemComponent*                     InventoryItemComponent;                                   // 0x0898(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x110];                                     // 0x08A0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNote"));
		return ptr;
	}


	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnRep_NoteLayout();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
