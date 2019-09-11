#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_WildRoseVariables.DS_WildRoseVariables
// 0x0090
struct FDS_WildRoseVariables
{
	class AActor*                                      ChestOfMemories_3_5352516349744CAE7AFC3A8C0E874560;       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PendantLeft_20_1FDA4B5A490259368EC7AFA08D191EA6;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      PendantRight_21_D9AA84774C1A0877142D3F8BACF7FCA3;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      RoseLocation_53_6A78DC4043D8A21AAB4B848E7DDA3C0C;         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      RoseActor_36_535C4BBA448BEC17F65CE8B705FCEC0D;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DeathNotePageActor_39_D13906A843400F3C75EDFAB9589012B8;   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NPC_52_CA93C20F4898536D4F64D896E31621FA;                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerCharacter*                      CompassCollector_63_27BF65824A36B67CB11FA196A5388E1A;     // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RookeEncounterSelectionPos_66_7FD50B73407DA2B32EFCE680E050A95D;// 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TAssetPtr<class AActor>                            RookeEncounterSpawnLocation_80_7107236246EDEDB5BB107AB35FC3CA70;// 0x0050(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class AActor>                            ChestOfMemoriesSpawnLocation_86_498DC03449C1F99E2421B0B9920BD6D9;// 0x0070(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
