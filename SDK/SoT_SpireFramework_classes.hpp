#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0088 (0x0150 - 0x00C8)
class UHeightTriggerableEffectsComponent : public UActorComponent
{
public:
	class UHeightTriggerableAudioComponentParams*      AudioParams;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActorComponentSelector                     EmitterOwner;                                             // 0x00D0(0x0010) (Edit, DisableEditOnInstance)
	struct FVector                                     EmitterOffset;                                            // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RisingAudioTriggerValue;                                  // 0x00EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeInnerRadius;                                         // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeOuterRadius;                                         // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.HeightTriggerableEffectsComponent"));
		return ptr;
	}


	void SetMovementDirection(TEnumAsByte<EDirectionOfMovement> InMovement);
};


// Class SpireFramework.SpireResource
// 0x0008 (0x0438 - 0x0430)
class ASpireResource : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

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
// 0x0080 (0x04B0 - 0x0430)
class ASpireService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	TArray<struct FServerSpireInfo>                    ServerOnlySpireInfo;                                      // 0x0438(0x0010) (ZeroConstructor)
	TArray<struct FSpireInfo>                          SpireLevels;                                              // 0x0448(0x0010) (Net, ZeroConstructor)
	TArray<struct FSpireInfo>                          PreviousSpireLevels;                                      // 0x0458(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0468(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.SpireService"));
		return ptr;
	}


	void OnRep_SpireLevels(TArray<struct FSpireInfo> InPreviousSpireLevels);
};


// Class SpireFramework.SpireShippingDrawDebugActorSphereCollection
// 0x0010 (0x0450 - 0x0440)
class ASpireShippingDrawDebugActorSphereCollection : public AShippingDebugActorSphereCollection
{
public:
	TArray<TWeakObjectPtr<class ASpireResource>>       SpireList;                                                // 0x0440(0x0010) (ZeroConstructor)

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
// 0x0028 (0x0068 - 0x0040)
class UTaleSpireService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SpireFramework.TaleSpireService"));
		return ptr;
	}

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
