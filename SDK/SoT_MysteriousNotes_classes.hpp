#pragma once

// Sea of Thieves (2) SDK

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
	TArray<FMysteriousNotesCompletionEventsModel>      MysteriousNoteCompletionEvents;                           // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNoteSettings
// 0x0048 (0x0070 - 0x0028)
class UMysteriousNoteSettings : public UObject
{
public:
	int                                                LookAheadInMinutes;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              RequestTimeout;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	FStringAssetReference                              MysteriousNotesCompletionStringsAsset;                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	FStringAssetReference                              WieldableNoteDataAsset;                                   // 0x0040(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	FStringAssetReference                              Image;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	FStringAssetReference                              NotificationBackground;                                   // 0x0060(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

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
	FText                                              DefaultTitle;                                             // 0x0028(0x0038) (Edit, DisableEditOnInstance)
	FText                                              DefaultBody;                                              // 0x0060(0x0038) (Edit, DisableEditOnInstance)
	FWieldableMysteriousNoteLayoutItem                 DefaultNoteLayoutItem;                                    // 0x0098(0x00A0) (Edit, DisableEditOnInstance)
	TArray<FWieldableMysteriousNoteLayoutItem>         NoteLayoutItems;                                          // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

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
	UClass*                                            WieldableNoteDesc;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UWieldableMysteriousNoteLayout*                    NoteLayout;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNoteDataAsset"));
		return ptr;
	}

};


// Class MysteriousNotes.MysteriousNotesService
// 0x00C8 (0x0498 - 0x03D0)
class AMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D0(0x0028) MISSED OFFSET
	UMysteriousNoteSettings*                           CachedNoteSettings;                                       // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	UWieldableMysteriousNoteDataAsset*                 WieldableNoteDataAsset;                                   // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	UMysteriousNotesCompletionEventsModelDataAsset*    CompletionEventsModelData;                                // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0410(0x0088) MISSED OFFSET

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
// 0x0170 (0x0238 - 0x00C8)
class UPlayerMysteriousNoteComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	FClientNoteData                                    NoteData;                                                 // 0x00D0(0x0018) (Net)
	bool                                               BeenPossessed;                                            // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               CinematicPlayed;                                          // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14E];                                     // 0x00EA(0x014E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.PlayerMysteriousNoteComponent"));
		return ptr;
	}


	void TriggerNotesReceivedPopup(bool InCinematicSkipped);
	void Server_NoteCompletionStepReceived(APlayerController* InPlayerController, const FName& InCompletionID);
	void Server_MarkNoteAsRead(APlayerController* InPlayerController, const FGuid& NoteId);
	void Server_MarkNoteAsDeleted(APlayerController* InPlayerController, const FGuid& NoteId);
	void OnRep_NoteData();
	void OnRep_BeenPossessed();
	void CustomServerUpdateDetailNotes(TArray<FNotesRemoteServiceNoteDetailModel> InNotes);
	void AddFakeNote(const FString& NoteType, const FString& NoteTitle, const FString& NoteBody, TArray<FString> CompletionStrings);
};


// Class MysteriousNotes.WieldableMysteriousNote
// 0x01B0 (0x0940 - 0x0790)
class AWieldableMysteriousNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0790(0x0010) MISSED OFFSET
	UMaybeCompressedCanvasRenderTarget2D*              RenderTarget;                                             // 0x07A0(0x0008) (ZeroConstructor, IsPlainOldData)
	UWieldableMysteriousNoteLayout*                    NoteLayout;                                               // 0x07A8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CanvasWidth;                                              // 0x07B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CanvasHeight;                                             // 0x07B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FontScale;                                                // 0x07B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x07BC(0x0054) MISSED OFFSET
	UNamedNotificationInputComponent*                  NamedNotificationInputComponent;                          // 0x0810(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UUsableWieldableComponent*                         UsableWieldableComponent;                                 // 0x0818(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UInventoryItemComponent*                           InventoryItemComponent;                                   // 0x0820(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x118];                                     // 0x0828(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class MysteriousNotes.WieldableMysteriousNote"));
		return ptr;
	}


	void OnTextCanvasUpdate(UCanvas* Canvas, int Width, int Height);
	void OnRep_NoteLayout();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
