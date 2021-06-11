#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Retraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Retraction.RetractableComponent
// 0x0068 (0x0130 - 0x00C8)
class URetractableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00C8(0x0058) MISSED OFFSET
	struct FName                                       FeatureToggle;                                            // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRetractorOrientationAdjustmentFlags        OrientationAdjustmentOnRetractFlags;                      // 0x0128(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RetractorBoxAxis;                                         // 0x012B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAutoReleaseOnSuccessfulRetract;                     // 0x012C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MigrateAttachedWithRetractor;                             // 0x012D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasSimulatingPhysicsBeforeRetract;                        // 0x012E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x012F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Retraction.RetractableComponent"));
		return ptr;
	}

};


// Class Retraction.RetractorInterface
// 0x0000 (0x0028 - 0x0028)
class URetractorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Retraction.RetractorInterface"));
		return ptr;
	}

};


// Class Retraction.RetractableInterface
// 0x0000 (0x0028 - 0x0028)
class URetractableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Retraction.RetractableInterface"));
		return ptr;
	}

};


// Class Retraction.RetractableProviderInterface
// 0x0000 (0x0028 - 0x0028)
class URetractableProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Retraction.RetractableProviderInterface"));
		return ptr;
	}

};


// Class Retraction.RetractableFloatingBarrelComponent
// 0x0010 (0x0140 - 0x0130)
class URetractableFloatingBarrelComponent : public URetractableComponent
{
public:
	TScriptInterface<class UBuoyancyInterface>         OwnerBuoyancyInterface;                                   // 0x0130(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Retraction.RetractableFloatingBarrelComponent"));
		return ptr;
	}

};


// Class Retraction.RetractorComponent
// 0x0060 (0x0128 - 0x00C8)
class URetractorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TScriptInterface<class URetractableInterface>      AttachedRetractable;                                      // 0x00D0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00E0(0x0030) MISSED OFFSET
	class USceneComponent*                             RetractDestinationComponent;                              // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RetractingComponent;                                      // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Retraction.RetractorComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
