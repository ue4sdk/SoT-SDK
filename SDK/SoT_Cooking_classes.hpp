#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Cooking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Cooking.CookableInterface
// 0x0000 (0x0028 - 0x0028)
class UCookableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookableInterface"));
		return ptr;
	}

};


// Class Cooking.CookingStatusPublisherInterface
// 0x0000 (0x0028 - 0x0028)
class UCookingStatusPublisherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookingStatusPublisherInterface"));
		return ptr;
	}

};


// Class Cooking.CookableComponent
// 0x0038 (0x0108 - 0x00D0)
class UCookableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	class UClass*                                      NextCookState;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToNextCookState;                                      // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	TArray<struct FCookableComponentSmokeFeedbackTimingEntry> SmokeFeedbackLevels;                                      // 0x00F0(0x0010) (Edit, ZeroConstructor)
	class UCurveFloat*                                 VisibleCookedExtentOverTime;                              // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookableComponent"));
		return ptr;
	}

};


// Class Cooking.CookerInterface
// 0x0000 (0x0028 - 0x0028)
class UCookerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookerInterface"));
		return ptr;
	}

};


// Class Cooking.CookerComponent
// 0x0120 (0x01F0 - 0x00D0)
class UCookerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<struct FStatus>                             StatusToApplyToContents;                                  // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCookerSmokeFeedbackEntry>           VFXFeedback;                                              // 0x00E8(0x0010) (Edit, ZeroConstructor)
	class UStaticMeshComponent*                        CookableStaticMeshComponent;                              // 0x00F8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      CookableSkeletalMeshComponent;                            // 0x0100(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       CookedMaterialParameterName;                              // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCookingComponentAudioParams*                AudioParams;                                              // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            VfxLocation;                                              // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	class AItemInfo*                                   CurrentlyCookingItem;                                     // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCookingClientRepresentation                CookingState;                                             // 0x0128(0x0050) (Net, Transient)
	class UParticleSystemComponent*                    SmokeParticleComponent;                                   // 0x0178(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 VisibleStaticMesh;                                        // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               VisibleSkeletalMesh;                                      // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    VisibleCookableMaterial;                                  // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0198(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookerComponent"));
		return ptr;
	}


	void OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation);
};


// Class Cooking.CookingComponentAudioParams
// 0x0070 (0x0098 - 0x0028)
class UCookingComponentAudioParams : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     CookingPool;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EmitterOffsetVector;                                      // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 CookingStart;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 CookingStop;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CookingTypeSwitchGroup;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CookingTypeSizzle;                                        // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CookingTypeSimmer;                                        // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FoodTypeSwitchGroup;                                      // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FoodTypeFruit;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FoodTypeMeat;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FoodTypeRareMeat;                                         // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FoodCookedAmount;                                         // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxCookingRtpcAmount;                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookingComponentAudioParams"));
		return ptr;
	}

};


// Class Cooking.CookingPot
// 0x0138 (0x05F8 - 0x04C0)
class ACookingPot : public AInteractableBase
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UActionRulesInteractableComponent*           InteractableComponent;                                    // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCookerComponent*                            CookerComponent;                                          // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              HoldToInteractTime;                                       // 0x04D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	struct FText                                       NotWieldingCookableItemTooltip;                           // 0x04E0(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WieldingCookableItemTooltip;                              // 0x0518(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       TakeItemTooltip;                                          // 0x0550(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       CannotTakeItemTooltip;                                    // 0x0588(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       MixInItemTooltip;                                         // 0x05C0(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookingPot"));
		return ptr;
	}

};


// Class Cooking.MixableInterface
// 0x0000 (0x0028 - 0x0028)
class UMixableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.MixableInterface"));
		return ptr;
	}

};


// Class Cooking.PottableInterface
// 0x0000 (0x0028 - 0x0028)
class UPottableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.PottableInterface"));
		return ptr;
	}

};


// Class Cooking.PottableComponent
// 0x0010 (0x00E0 - 0x00D0)
class UPottableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	bool                                               CanBePutInPot;                                            // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.PottableComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
