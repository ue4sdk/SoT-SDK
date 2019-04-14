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
// 0x0030 (0x0630 - 0x0600)
class UCordRenderComponent : public UStaticMeshComponent
{
public:
	TArray<class UMaterialInstanceDynamic*>            CordMaterials;                                            // 0x0600(0x0010) (ZeroConstructor, Transient)
	float                                              ThicknessCm;                                              // 0x0610(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0614(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.CordRenderComponent"));
		return ptr;
	}

};


// Class Tethering.HarpoonRenderComponent
// 0x0020 (0x0650 - 0x0630)
class UHarpoonRenderComponent : public UCordRenderComponent
{
public:
	TArray<class UMaterialInstanceDynamic*>            HarpoonMaterials;                                         // 0x0630(0x0010) (ZeroConstructor, Transient)
	float                                              LaunchAnimationDurationSecs;                              // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitAnimationDurationSecs;                                 // 0x0644(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              QuickRetractAnimationSpeed;                               // 0x0648(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x064C(0x0004) MISSED OFFSET

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
// 0x0130 (0x05D8 - 0x04A8)
class ATether : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x04A8(0x00F8) MISSED OFFSET
	class USceneComponent*                             TetherPositionAnchorComponent;                            // 0x05A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SourcePhysicsHandle;                                      // 0x05A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TargetPhysicsHandle;                                      // 0x05B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDistanceJointComponent*                     JointComponent;                                           // 0x05B8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SlackCm;                                                  // 0x05C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLengthWhenGrowing;                                     // 0x05C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET
	bool                                               HasAttached;                                              // 0x05D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlackEnabled;                                           // 0x05D1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ETetherConstrainMode>                  CurrentTetherMode;                                        // 0x05D2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x05D3(0x0005) MISSED OFFSET

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
	float                                              MassIntertiaScale;                                        // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeTethered;                                            // 0x012C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsMassInertiaScalingEnabled;                              // 0x012D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x012E(0x0002) MISSED OFFSET

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
