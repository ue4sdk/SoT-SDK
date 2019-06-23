#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaTaleAutomation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaTaleAutomation.TaleQuestAutomationService
// 0x0188 (0x01C8 - 0x0040)
class UTaleQuestAutomationService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0040(0x00B8) MISSED OFFSET
	class AVoyageAutomationPuppet*                     Puppet;                                                   // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAthenaPlayerController*                     PuppetController;                                         // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC0];                                      // 0x0108(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationService"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationStep
// 0x0000 (0x0068 - 0x0068)
class UTaleQuestAutomationStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitStep
// 0x0018 (0x0080 - 0x0068)
class UTaleQuestAutomationAwaitStep : public UTaleQuestAutomationStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitAICharacterStep
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestAutomationAwaitAICharacterStep : public UTaleQuestAutomationAwaitStep
{
public:
	class UTaleQuestAutomationAwaitAICharacterStepDesc* Desc;                                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitAICharacterStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitAICharacterStepDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestAutomationAwaitAICharacterStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ExpectedClass;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitAICharacterStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitAISpawnerStep
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestAutomationAwaitAISpawnerStep : public UTaleQuestAutomationAwaitStep
{
public:
	class UTaleQuestAutomationAwaitAISpawnerStepDesc*  Desc;                                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitAISpawnerStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitAISpawnerStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestAutomationAwaitAISpawnerStepDesc : public UTaleQuestStepDesc
{
public:
	class UAISpawner*                                  ExpectedSpawner;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableActor                         SpawnerLocation;                                          // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitAISpawnerStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitBuriedItemStep
// 0x0010 (0x0090 - 0x0080)
class UTaleQuestAutomationAwaitBuriedItemStep : public UTaleQuestAutomationAwaitStep
{
public:
	class AActor*                                      Instigator;                                               // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTaleQuestAutomationAwaitBuriedItemStepDesc* Desc;                                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitBuriedItemStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitBuriedItemStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestAutomationAwaitBuriedItemStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ExpectedItem;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HoleClass;                                                // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableActor                         ExhumedItem;                                              // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitBuriedItemStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitSpawnStep
// 0x0020 (0x00A0 - 0x0080)
class UTaleQuestAutomationAwaitSpawnStep : public UTaleQuestAutomationAwaitStep
{
public:
	class UTaleQuestAutomationAwaitSpawnStepDesc*      Desc;                                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitSpawnStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitSpawnStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestAutomationAwaitSpawnStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         ActorVar;                                                 // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitSpawnStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitActorFromVariableStepDesc
// 0x0010 (0x0050 - 0x0040)
class UTaleQuestAutomationAwaitActorFromVariableStepDesc : public UTaleQuestAutomationAwaitSpawnStepDesc
{
public:
	struct FQuestVariableClass                         ExpectedClass;                                            // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitActorFromVariableStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitActorStepDesc
// 0x0008 (0x0048 - 0x0040)
class UTaleQuestAutomationAwaitActorStepDesc : public UTaleQuestAutomationAwaitSpawnStepDesc
{
public:
	class UClass*                                      ExpectedClass;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitActorStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitItemFromVariableStepDesc
// 0x0010 (0x0050 - 0x0040)
class UTaleQuestAutomationAwaitItemFromVariableStepDesc : public UTaleQuestAutomationAwaitSpawnStepDesc
{
public:
	struct FQuestVariableClass                         ExpectedClass;                                            // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitItemFromVariableStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitItemStepDesc
// 0x0008 (0x0048 - 0x0040)
class UTaleQuestAutomationAwaitItemStepDesc : public UTaleQuestAutomationAwaitSpawnStepDesc
{
public:
	class UClass*                                      ExpectedClass;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitItemStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitVaultAssignmentStep
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestAutomationAwaitVaultAssignmentStep : public UTaleQuestAutomationAwaitStep
{
public:
	class UTaleQuestAutomationAwaitVaultAssignmentStepDesc* Desc;                                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitVaultAssignmentStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationAwaitVaultAssignmentStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestAutomationAwaitVaultAssignmentStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Vault;                                                    // 0x0030(0x0010) (Edit)
	struct FQuestVariableClass                         Key;                                                      // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationAwaitVaultAssignmentStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationCompleteVaultStep
// 0x0010 (0x0078 - 0x0068)
class UTaleQuestAutomationCompleteVaultStep : public UTaleQuestAutomationStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	class UTaleQuestAutomationCompleteVaultStepDesc*   Desc;                                                     // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationCompleteVaultStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationCompleteVaultStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestAutomationCompleteVaultStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Vault;                                                    // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationCompleteVaultStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationHandInStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAutomationHandInStep : public UTaleQuestAutomationStep
{
public:
	class UTaleQuestAutomationHandInStepDesc*          Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationHandInStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationHandInStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestAutomationHandInStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         HandInActor;                                              // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         HandInItem;                                               // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationHandInStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationKillAIService
// 0x0020 (0x0060 - 0x0040)
class UTaleQuestAutomationKillAIService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class UTaleQuestAutomationService*                 AutomationService;                                        // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTaleQuestAutomationKillAIServiceDesc*       Desc;                                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationKillAIService"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationKillAIServiceDesc
// 0x0010 (0x0038 - 0x0028)
class UTaleQuestAutomationKillAIServiceDesc : public UTaleQuestServiceDesc
{
public:
	TArray<class UClass*>                              AIClasses;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationKillAIServiceDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationPickupItemStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAutomationPickupItemStep : public UTaleQuestAutomationStep
{
public:
	class UTaleQuestAutomationPickupItemStepDesc*      Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationPickupItemStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationPickupItemStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestAutomationPickupItemStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Item;                                                     // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationPickupItemStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationRootStep
// 0x0018 (0x00B8 - 0x00A0)
class UTaleQuestAutomationRootStep : public UTaleQuestFramedStep
{
public:
	class UTaleQuestAutomationRootStepDesc*            Desc;                                                     // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTaleQuestStep*                              Tale;                                                     // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTaleQuestStep*                              Test;                                                     // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationRootStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationRootStepDesc
// 0x0010 (0x0058 - 0x0048)
class UTaleQuestAutomationRootStepDesc : public UTaleQuestFramedStepDesc
{
public:
	class UTaleQuestStepDesc*                          Tale;                                                     // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTaleQuestStepDesc*                          Test;                                                     // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationRootStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestAutomationServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationServiceDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationStopSceneDialogueStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAutomationStopSceneDialogueStep : public UTaleQuestAutomationStep
{
public:
	class UTaleQuestAutomationStopSceneDialogueStepDesc* Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationStopSceneDialogueStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTakeChestItemStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAutomationTakeChestItemStep : public UTaleQuestAutomationStep
{
public:
	class UTaleQuestAutomationTakeChestItemStepDesc*   Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTakeChestItemStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTakeChestLayerStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAutomationTakeChestLayerStep : public UTaleQuestAutomationStep
{
public:
	class UTaleQuestAutomationTakeChestLayerStepDesc*  Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTakeChestLayerStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTakeCollectableObjectStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAutomationTakeCollectableObjectStep : public UTaleQuestAutomationStep
{
public:
	class UTaleQuestAutomationTakeCollectableObjectStepDesc* Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTakeCollectableObjectStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTeleportPuppetStep
// 0x0020 (0x0088 - 0x0068)
class UTaleQuestAutomationTeleportPuppetStep : public UTaleQuestAutomationStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTeleportPuppetStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationUnlockStep
// 0x0008 (0x0070 - 0x0068)
class UTaleQuestAutomationUnlockStep : public UTaleQuestAutomationStep
{
public:
	class UTaleQuestAutomationUnlockStepDesc*          Desc;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationUnlockStep"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationStopSceneDialogueStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestAutomationStopSceneDialogueStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Dialogue;                                                 // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationStopSceneDialogueStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTakeChestItemStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestAutomationTakeChestItemStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      Item;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableActor                         Chest;                                                    // 0x0038(0x0010) (Edit)
	struct FQuestVariableActor                         ItemTaken;                                                // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTakeChestItemStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTakeChestLayerStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestAutomationTakeChestLayerStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      Layer;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableActor                         Chest;                                                    // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTakeChestLayerStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTakeCollectableObjectStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestAutomationTakeCollectableObjectStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Object;                                                   // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTakeCollectableObjectStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTeleportPuppetToLocationStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestAutomationTeleportPuppetToLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Destination;                                              // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTeleportPuppetToLocationStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationTeleportPuppetToPositionStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleQuestAutomationTeleportPuppetToPositionStepDesc : public UTaleQuestStepDesc
{
public:
	struct FVector                                     Destination;                                              // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationTeleportPuppetToPositionStepDesc"));
		return ptr;
	}

};


// Class AthenaTaleAutomation.TaleQuestAutomationUnlockStepDesc
// 0x0020 (0x0050 - 0x0030)
class UTaleQuestAutomationUnlockStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Lockable;                                                 // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         Key;                                                      // 0x0040(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaTaleAutomation.TaleQuestAutomationUnlockStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
