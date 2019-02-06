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


// Class Tethering.TetherRenderInterface
// 0x0000 (0x0028 - 0x0028)
class UTetherRenderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherRenderInterface"));
		return ptr;
	}

};


// Class Tethering.HarpoonRenderComponent
// 0x0060 (0x0690 - 0x0630)
class UHarpoonRenderComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0630(0x0028) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            RopeMaterials;                                            // 0x0658(0x0010) (ZeroConstructor, Transient)
	TArray<class UMaterialInstanceDynamic*>            HarpoonMaterials;                                         // 0x0668(0x0010) (ZeroConstructor, Transient)
	float                                              LaunchAnimationDurationSecs;                              // 0x0678(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitAnimationDurationSecs;                                 // 0x067C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              QuickRetractAnimationSpeed;                               // 0x0680(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThicknessCm;                                              // 0x0684(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0688(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.HarpoonRenderComponent"));
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


// Class Tethering.RetractorComponent
// 0x0048 (0x0118 - 0x00D0)
class URetractorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00D0(0x0038) MISSED OFFSET
	class USceneComponent*                             RetractingComponent;                                      // 0x0108(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              RetractSpeed;                                             // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

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
// 0x0100 (0x0598 - 0x0498)
class ATether : public AActor
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0498(0x00D8) MISSED OFFSET
	class USphereComponent*                            SourcePhysicsHandle;                                      // 0x0570(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USphereComponent*                            TargetPhysicsHandle;                                      // 0x0578(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDistanceJointComponent*                     JointComponent;                                           // 0x0580(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SlackCm;                                                  // 0x0588(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	bool                                               HasAttached;                                              // 0x0590(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0591(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.Tether"));
		return ptr;
	}


	void OnRep_Attached();
};


// Class Tethering.TetherCustomisationInterface
// 0x0000 (0x0028 - 0x0028)
class UTetherCustomisationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Tethering.TetherCustomisationInterface"));
		return ptr;
	}

};


// Class Tethering.TetherCustomisationComponent
// 0x0018 (0x00E8 - 0x00D0)
class UTetherCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	class USceneComponent*                             ComponentToTetherTo;                                      // 0x00D8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanBeTethered;                                            // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET

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
