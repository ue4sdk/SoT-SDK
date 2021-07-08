#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SpireFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SpireFramework.HeightTriggerableAudioComponentParams
// 0x0030 (0x0058 - 0x0028)
class UHeightTriggerableAudioComponentParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     Pool;                                                     // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 RisingOneShot;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 RisingStart;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 RisingStop;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 LoweringStart;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 LoweringStop;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.HeightTriggerableAudioComponentParams"));
		return ptr;
	}

};


// Class SpireFramework.HeightTriggerableEffectsComponent
// 0x0090 (0x0158 - 0x00C8)
class UHeightTriggerableEffectsComponent : public UActorComponent
{
public:
	class UHeightTriggerableAudioComponentParams*      AudioParams;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActorComponentSelector                     EmitterOwner;                                             // 0x00D0(0x0010) (Edit, DisableEditOnInstance)
	struct FVector                                     EmitterOffset;                                            // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseParentEmitter;                                         // 0x00EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	float                                              RisingAudioTriggerValue;                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class UClass*                                      CameraShake;                                              // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeInnerRadius;                                         // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeOuterRadius;                                         // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0108(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.HeightTriggerableEffectsComponent"));
		return ptr;
	}


	void SetMovementDirection(TEnumAsByte<EDirectionOfMovement> InMovement);
};


// Class SpireFramework.SpireResource
// 0x0008 (0x03D8 - 0x03D0)
class ASpireResource : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireResource"));
		return ptr;
	}

};


// Class SpireFramework.SpireServiceInterface
// 0x0000 (0x0028 - 0x0028)
class USpireServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireServiceInterface"));
		return ptr;
	}

};


// Class SpireFramework.SpireService
// 0x0078 (0x0448 - 0x03D0)
class ASpireService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET
	TArray<struct FServerSpireInfo>                    ServerOnlySpireInfo;                                      // 0x03D8(0x0010) (ZeroConstructor)
	TArray<struct FSpireInfo>                          SpireLevels;                                              // 0x03E8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x03F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireService"));
		return ptr;
	}


	void OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels);
};


// Class SpireFramework.SpireStreamedLevelDataAsset
// 0x0020 (0x0048 - 0x0028)
class USpireStreamedLevelDataAsset : public UDataAsset
{
public:
	class UAthenaStreamedLevelDataAsset*               StreamedLevel;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FSpireEntry>                         Entries;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       FeatureToggle;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireStreamedLevelDataAsset"));
		return ptr;
	}

};


// Class SpireFramework.SpireSettingsInterface
// 0x0000 (0x0028 - 0x0028)
class USpireSettingsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireSettingsInterface"));
		return ptr;
	}

};


// Class SpireFramework.SpireShippingDrawDebugActorSphereCollection
// 0x0010 (0x03F0 - 0x03E0)
class ASpireShippingDrawDebugActorSphereCollection : public AShippingDebugActorSphereCollection
{
public:
	TArray<TWeakObjectPtr<class ASpireResource>>       SpireList;                                                // 0x03E0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireShippingDrawDebugActorSphereCollection"));
		return ptr;
	}

};


// Class SpireFramework.TaleLoadSpireStep
// 0x0000 (0x0068 - 0x0068)
class UTaleLoadSpireStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleLoadSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleSpireService
// 0x0038 (0x0078 - 0x0040)
class UTaleSpireService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0040(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleSpireService"));
		return ptr;
	}


	void RegisterResetMechanismInterface(class AActor* InMechanismResetInterface);
};


// Class SpireFramework.TaleSpireServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleSpireServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleSpireServiceDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleLoadSpireStepDesc
// 0x0000 (0x0030 - 0x0030)
class UTaleLoadSpireStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleLoadSpireStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleMakeSpireVisibleStep
// 0x0000 (0x0068 - 0x0068)
class UTaleMakeSpireVisibleStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleMakeSpireVisibleStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleMakeSpireVisibleStepDesc
// 0x0000 (0x0030 - 0x0030)
class UTaleMakeSpireVisibleStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleMakeSpireVisibleStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleRegisterSpireStep
// 0x0010 (0x0078 - 0x0068)
class UTaleRegisterSpireStep : public UTaleQuestStep
{
public:
	class UTaleRegisterSpireStepDesc*                  StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleRegisterSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleRegisterSpireStepDesc
// 0x0040 (0x0070 - 0x0030)
class UTaleRegisterSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        SelectionOriginPoint;                                     // 0x0030(0x0010) (Edit)
	struct FQuestVariableFloat                         PlayerExclusionSelectionRadius;                           // 0x0040(0x0010) (Edit)
	struct FQuestVariableTaleResourceHandle            AllocatedSpireHandle;                                     // 0x0050(0x0010) (Edit)
	struct FQuestVariableVector                        AllocatedSpireLocation;                                   // 0x0060(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleRegisterSpireStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleReleaseSpireStep
// 0x0010 (0x0078 - 0x0068)
class UTaleReleaseSpireStep : public UTaleQuestStep
{
public:
	class UTaleReleaseSpireStepDesc*                   StepDesc;                                                 // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleReleaseSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleReleaseSpireStepDesc
// 0x0010 (0x0040 - 0x0030)
class UTaleReleaseSpireStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableTaleResourceHandle            SpireHandle;                                              // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleReleaseSpireStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleUnloadSpireStep
// 0x0000 (0x0068 - 0x0068)
class UTaleUnloadSpireStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleUnloadSpireStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleUnloadSpireStepDesc
// 0x0000 (0x0030 - 0x0030)
class UTaleUnloadSpireStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleUnloadSpireStepDesc"));
		return ptr;
	}

};


// Class SpireFramework.TaleWaitForSpireToLoadStep
// 0x0050 (0x00B8 - 0x0068)
class UTaleWaitForSpireToLoadStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleWaitForSpireToLoadStep"));
		return ptr;
	}

};


// Class SpireFramework.TaleWaitForSpireToLoadStepDesc
// 0x0000 (0x0030 - 0x0030)
class UTaleWaitForSpireToLoadStepDesc : public UTaleQuestStepDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleWaitForSpireToLoadStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
