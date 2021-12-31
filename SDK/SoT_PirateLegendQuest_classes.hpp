#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PirateLegendQuest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PirateLegendQuest.VeilOfTheAncients
// 0x0018 (0x0410 - 0x03F8)
class AVeilOfTheAncients : public AInteractableBase
{
public:
	float                                              NumberOfGems;                                             // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	ULockComponent*                                    LockComponent;                                            // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UStaticMeshComponent*                              StaticMeshComponent;                                      // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateLegendQuest.VeilOfTheAncients"));
		return ptr;
	}

};


// Class PirateLegendQuest.VeilService
// 0x0100 (0x0160 - 0x0060)
class UVeilService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
	UWorld*                                            World;                                                    // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	AGameState*                                        GameState;                                                // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	AVeilOfTheAncients*                                TrackedVeil;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	AShip*                                             Ship;                                                     // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB8];                                      // 0x00A8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateLegendQuest.VeilService"));
		return ptr;
	}

};


// Class PirateLegendQuest.GetVeilOfTheAncientsStep
// 0x0000 (0x0090 - 0x0090)
class UGetVeilOfTheAncientsStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateLegendQuest.GetVeilOfTheAncientsStep"));
		return ptr;
	}

};


// Class PirateLegendQuest.VeilOfTheAncientsServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UVeilOfTheAncientsServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateLegendQuest.VeilOfTheAncientsServiceDesc"));
		return ptr;
	}

};


// Class PirateLegendQuest.GetVeilOfTheAncientsStepDesc
// 0x0010 (0x0090 - 0x0080)
class UGetVeilOfTheAncientsStepDesc : public UTaleQuestStepDesc
{
public:
	FQuestVariableActor                                QuestVeil;                                                // 0x0080(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PirateLegendQuest.GetVeilOfTheAncientsStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
