#pragma once

// Sea of Thieves (2) SDK

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
// 0x0040 (0x0630 - 0x05F0)
class UCordRenderComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F0(0x0008) MISSED OFFSET
	TArray<UMaterialInstanceDynamic*>                  CordMaterials;                                            // 0x05F8(0x0010) (ZeroConstructor, Transient)
	float                                              ThicknessCm;                                              // 0x0608(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x060C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.CordRenderComponent"));
		return ptr;
	}

};


// Class Tethering.DynamicCordRenderComponent
// 0x0060 (0x0690 - 0x0630)
class UDynamicCordRenderComponent : public UCordRenderComponent
{
public:
	USceneComponent*                                   EndPointA;                                                // 0x0630(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	USceneComponent*                                   EndPointB;                                                // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0640(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.DynamicCordRenderComponent"));
		return ptr;
	}


	void SetCordEndPointB(USceneComponent* EndPointB);
	void SetCordEndPointA(USceneComponent* EndPointA);
};


// Class Tethering.HarpoonRenderComponent
// 0x0020 (0x0650 - 0x0630)
class UHarpoonRenderComponent : public UCordRenderComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0630(0x0008) MISSED OFFSET
	float                                              LaunchAnimationDurationSecs;                              // 0x0638(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitAnimationDurationSecs;                                 // 0x063C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              QuickRetractAnimationSpeed;                               // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0644(0x000C) MISSED OFFSET

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
// 0x0088 (0x0150 - 0x00C8)
class UDistanceJointComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00C8(0x0070) MISSED OFFSET
	float                                              MinDistance;                                              // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ApplyAsSpring;                                            // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceMinDistance;                                       // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               EnforceMaxDistance;                                       // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x014B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.DistanceJointComponent"));
		return ptr;
	}

};


// Class Tethering.ShouldTetherInWorldSpaceInterface
// 0x0000 (0x0028 - 0x0028)
class UShouldTetherInWorldSpaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.ShouldTetherInWorldSpaceInterface"));
		return ptr;
	}

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
// 0x0140 (0x0510 - 0x03D0)
class ATether : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x03D0(0x00F8) MISSED OFFSET
	USceneComponent*                                   TetherPositionAnchorComponent;                            // 0x04C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	USphereComponent*                                  SourcePhysicsHandle;                                      // 0x04D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	USphereComponent*                                  TargetPhysicsHandle;                                      // 0x04D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	UDistanceJointComponent*                           JointComponent;                                           // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	AActor*                                            SourceActor;                                              // 0x04E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	AActor*                                            TargetActor;                                              // 0x04F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              SlackCm;                                                  // 0x04F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLengthWhenGrowing;                                     // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0500(0x0008) MISSED OFFSET
	bool                                               HasAttached;                                              // 0x0508(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               HasSourceActor;                                           // 0x0509(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               HasTargetActor;                                           // 0x050A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               IsSlackEnabled;                                           // 0x050B(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	TEnumAsByte<ETetherConstrainMode>                  CurrentTetherMode;                                        // 0x050C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x050D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.Tether"));
		return ptr;
	}

};


// Class Tethering.TetherCustomisationComponent
// 0x0060 (0x0128 - 0x00C8)
class UTetherCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	USceneComponent*                                   ComponentToTetherTo;                                      // 0x00D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00D8(0x0048) MISSED OFFSET
	float                                              MassIntertiaScale;                                        // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeTethered;                                            // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsMassInertiaScalingEnabled;                              // 0x0125(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0126(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherCustomisationComponent"));
		return ptr;
	}

};


// Class Tethering.TetherInWorldSpaceComponent
// 0x0008 (0x00D0 - 0x00C8)
class UTetherInWorldSpaceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherInWorldSpaceComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
