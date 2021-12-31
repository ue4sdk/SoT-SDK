#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomMysteriousNotes.CustomPlayerNoteList
// 0x0010
struct FCustomPlayerNoteList
{
	TArray<FNotesRemoteServiceNoteDetailModel>         Notes;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomMysteriousNotes.DestroyMysteriousNoteData
// 0x0014
struct FDestroyMysteriousNoteData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	FGuid                                              NoteGUID;                                                 // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteData
// 0x0038
struct FCreateMysteriousNoteData
{
	int                                                PlayerNetGUID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	FString                                            NoteType;                                                 // 0x0008(0x0010) (ZeroConstructor)
	FString                                            NoteTitle;                                                // 0x0018(0x0010) (ZeroConstructor)
	FString                                            NoteBody;                                                 // 0x0028(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
