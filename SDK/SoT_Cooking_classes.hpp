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
// 0x0030 (0x0100 - 0x00D0)
class UCookableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D0(0x0010) MISSED OFFSET
	class UClass*                                      NextCookState;                                            // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToNextCookState;                                      // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	TArray<struct FCookableComponentSmokeFeedbackTimingEntry> SmokeFeedbackLevels;                                      // 0x00F0(0x0010) (Edit, ZeroConstructor)

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
// 0x00A8 (0x0178 - 0x00D0)
class UCookerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TArray<struct FStatus>                             StatusToApplyToContents;                                  // 0x00D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCookerSmokeFeedbackEntry>           VFXFeedback;                                              // 0x00E8(0x0010) (Edit, ZeroConstructor)
	class UStaticMeshComponent*                        CookableMeshComponent;                                    // 0x00F8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TEnumAsByte<EVfxRegion>                            VfxLocation;                                              // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	class AItemInfo*                                   CurrentlyCookingItem;                                     // 0x0108(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FCookingClientRepresentation                CookingState;                                             // 0x0110(0x0048) (Net, Transient)
	class UParticleSystemComponent*                    SmokeParticleComponent;                                   // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0160(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookerComponent"));
		return ptr;
	}


	void OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation);
};


// Class Cooking.CookingPot
// 0x0100 (0x05B8 - 0x04B8)
class ACookingPot : public AInteractableBase
{
public:
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x04B8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UActionRulesInteractableComponent*           InteractableComponent;                                    // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UCookerComponent*                            CookerComponent;                                          // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              HoldToInteractTime;                                       // 0x04D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04D4(0x0004) MISSED OFFSET
	struct FText                                       NotWieldingItemTooltip;                                   // 0x04D8(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WieldingNonCookableItemTooltip;                           // 0x0510(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       WieldingCookableItemTooltip;                              // 0x0548(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       TakeItemTooltip;                                          // 0x0580(0x0038) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Cooking.CookingPot"));
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
