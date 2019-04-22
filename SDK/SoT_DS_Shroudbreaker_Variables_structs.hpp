#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_DS_ShroudBreaker_VaultParams_classes.hpp"
#include "SoT_DS_Shroudbreaker_PuzzleParams_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct DS_Shroudbreaker_Variables.DS_Shroudbreaker_Variables
// 0x00F8
struct FDS_Shroudbreaker_Variables
{
	struct FDS_Shroudbreaker_PuzzleParams              ChosenPuzzle_34_5FE515EC411E155490D27FBDD291BF76;         // 0x0000(0x0028) (Edit, BlueprintVisible)
	class AActor*                                      ShroudbreakerPositionActor_61_206E6D0141DA1EB13269CE9173546524;// 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TempShroudbreakerHandInChest_48_7206443242C9EB1A53D4C5BBF21F4730;// 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HandInPosition_52_D90A03D0421A26786221D0AFA496051D;       // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VaultRef_64_9A7E02064EB1AAFE5E488E9493FBAAAA;             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class AActor>                            VaultAssetID_80_A8E112234CD53407D9FF918369D36916;         // 0x0048(0x0020) (Edit, BlueprintVisible)
	TArray<class AActor*>                              NPCLocations_83_540402C24C2A88D473155E9CD5D3F685;         // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AActor*                                      Shroudbreaker_74_9F2E7C6245A18185F017C9A6F91AD57C;        // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              NPCs_88_65BAC2C14B1AB02FD85CB2A570F5CF14;                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABP_TaleEventDispatcherProxy_C*              EventDispatcherProxy_92_67654BD041E56480A55E44B2ADF8E73A; // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDS_ShroudBreaker_VaultParams               AllocatedVaultParams_95_655D01874A9C25A12A5AA6B7808DA042; // 0x0098(0x0048) (Edit, BlueprintVisible)
	class AActor*                                      NPCOutroMusicLocation_101_B3FEA9564BEAA4EFE1B881972711A317;// 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayCaveMusic_103_D051F17C40CAEA7B189E798EDF225B5B;       // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	class AActor*                                      CaveMusicActor_106_0CE770FD424042D0E71FA4B781B96C74;      // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
