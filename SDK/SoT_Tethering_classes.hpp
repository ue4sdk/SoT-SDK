#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tethering_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Tethering.CordRenderInterface
// 0x0000 (0x0028 - 0x0028)
class UCordRenderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.CordRenderInterface"));
		return ptr;
	}

};


// Class Tethering.CordRenderComponent
// 0x0030 (0x0660 - 0x0630)
class UCordRenderComponent : public UStaticMeshComponent
{
public:
	TArray<class UMaterialInstanceDynamic*>            CordMaterials;                                            // 0x0630(0x0010) (ZeroConstructor, Transient)
	float                                              ThicknessCm;                                              // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0644(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.CordRenderComponent"));
		return ptr;
	}

};


// Class Tethering.HarpoonRenderComponent
// 0x0020 (0x0680 - 0x0660)
class UHarpoonRenderComponent : public UCordRenderComponent
{
public:
	TArray<class UMaterialInstanceDynamic*>            HarpoonMaterials;                                         // 0x0660(0x0010) (ZeroConstructor, Transient)
	float                                              LaunchAnimationDurationSecs;                              // 0x0670(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitAnimationDurationSecs;                                 // 0x0674(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              QuickRetractAnimationSpeed;                               // 0x0678(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x067C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.HarpoonRenderComponent"));
		return ptr;
	}

};


// Class Tethering.TetherConstraintInterface
// 0x0000 (0x0028 - 0x0028)
class UTetherConstraintInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherConstraintInterface"));
		return ptr;
	}

};


// Class Tethering.DistanceJointComponent
// 0x0090 (0x0160 - 0x00D0)
class UDistanceJointComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00D0(0x0078) MISSED OFFSET
	float                                              MinDistance;                                              // 0x0148(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyAsSpring;                                            // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceMinDistance;                                       // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceMaxDistance;                                       // 0x015A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x015B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.DistanceJointComponent"));
		return ptr;
	}

};


// Class Tethering.RetractorInterface
// 0x0000 (0x0028 - 0x0028)
class URetractorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.RetractorInterface"));
		return ptr;
	}

};


// Class Tethering.RetractableInterface
// 0x0000 (0x0028 - 0x0028)
class URetractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.RetractableInterface"));
		return ptr;
	}

};


// Class Tethering.RetractableComponent
// 0x0060 (0x0130 - 0x00D0)
class URetractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D0(0x0050) MISSED OFFSET
	struct FName                                       FeatureToggle;                                            // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAutoReleaseOnSuccessfulRetract;                     // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MigrateAttachedWithRetractor;                             // 0x0129(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasSimulatingPhysicsBeforeRetract;                        // 0x012A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x012B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.RetractableComponent"));
		return ptr;
	}

};


// Class Tethering.RetractableCharacterComponent
// 0x0018 (0x0148 - 0x0130)
class URetractableCharacterComponent : public URetractableComponent
{
public:
	class UCharacterMovementComponent*                 OwnerCharacterMovementComponent;                          // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TScriptInterface<class UDockerInterface>           OwnerDockerInterface;                                     // 0x0138(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.RetractableCharacterComponent"));
		return ptr;
	}

};


// Class Tethering.RetractableFloatingBarrelComponent
// 0x0010 (0x0140 - 0x0130)
class URetractableFloatingBarrelComponent : public URetractableComponent
{
public:
	TScriptInterface<class UBuoyancyInterface>         OwnerBuoyancyInterface;                                   // 0x0130(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.RetractableFloatingBarrelComponent"));
		return ptr;
	}

};


// Class Tethering.RetractableItemProxyComponent
// 0x0000 (0x0130 - 0x0130)
class URetractableItemProxyComponent : public URetractableComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.RetractableItemProxyComponent"));
		return ptr;
	}

};


// Class Tethering.RetractorComponent
// 0x0060 (0x0130 - 0x00D0)
class URetractorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	TScriptInterface<class URetractableInterface>      AttachedRetractable;                                      // 0x00D8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00E8(0x0030) MISSED OFFSET
	class USceneComponent*                             RetractDestinationComponent;                              // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RetractingComponent;                                      // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.RetractorComponent"));
		return ptr;
	}

};


// Class Tethering.TetherInterface
// 0x0000 (0x0028 - 0x0028)
class UTetherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherInterface"));
		return ptr;
	}

};


// Class Tethering.Tether
// 0x0118 (0x05B8 - 0x04A0)
class ATether : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x04A0(0x00E8) MISSED OFFSET
	class USceneComponent*                             TetherPositionAnchorComponent;                            // 0x0588(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SourcePhysicsHandle;                                      // 0x0590(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TargetPhysicsHandle;                                      // 0x0598(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDistanceJointComponent*                     JointComponent;                                           // 0x05A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SlackCm;                                                  // 0x05A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLengthWhenGrowing;                                     // 0x05AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasAttached;                                              // 0x05B0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlackEnabled;                                           // 0x05B1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ETetherConstrainMode>                  CurrentTetherMode;                                        // 0x05B2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x05B3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.Tether"));
		return ptr;
	}


	void OnRep_HasAttached();
};


// Class Tethering.TetherQueriableInterface
// 0x0000 (0x0028 - 0x0028)
class UTetherQueriableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherQueriableInterface"));
		return ptr;
	}

};


// Class Tethering.TetherCustomisationInterface
// 0x0000 (0x0028 - 0x0028)
class UTetherCustomisationInterface : public UTetherQueriableInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherCustomisationInterface"));
		return ptr;
	}

};


// Class Tethering.TetherCustomisationComponent
// 0x0060 (0x0130 - 0x00D0)
class UTetherCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class USceneComponent*                             ComponentToTetherTo;                                      // 0x00D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00E0(0x0048) MISSED OFFSET
	bool                                               CanBeTethered;                                            // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0129(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherCustomisationComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
