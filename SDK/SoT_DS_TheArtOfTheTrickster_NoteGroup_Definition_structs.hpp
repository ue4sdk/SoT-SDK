#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_TheArtOfTheTrickster_Gunpowder_Definition_classes.hpp"
#include "SoT_DS_TheArtOfTheTrickster_Note_Definition_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_TheArtOfTheTrickster_NoteGroup_Definition.DS_TheArtOfTheTrickster_NoteGroup_Definition
// 0x0040
struct FDS_TheArtOfTheTrickster_NoteGroup_Definition
{
	struct FName                                       IslandName_2_E80F4D3149B67E7275E97FADDF7F1579;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDS_TheArtOfTheTrickster_Note_Definition> PreGunpowderPuzzles_29_488DA5C54B8E8EFDCAFA608CE0C2EA89;  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FDS_TheArtOfTheTrickster_Gunpowder_Definition> GunpowderPuzzles_31_8B47BF5F4CABBA4CDA1E3EB69E6240D5;     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UQuestBookPageBundle*                        SkeletonPages_37_7EF98D2545A161AF438A5D9BBF07F2CD;        // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        PreGunpowderPages_38_7A6607AE442E9E817FCCB2805F2AC3CD;    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestBookPageBundle*                        GunpowderPages_39_D7AD3412477AE92B3212E9934D92061D;       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
