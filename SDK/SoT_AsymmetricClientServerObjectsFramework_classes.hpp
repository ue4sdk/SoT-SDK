#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AsymmetricClientServerObjectsFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AsymmetricClientServerObjectsFramework.AsymmetricClientObject
// 0x0050 (0x0420 - 0x03D0)
class AAsymmetricClientObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	UBoxComponent*                                     BaseComponent;                                            // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	UStaticMeshMemoryConstraintComponent*              ThirdPersonMesh;                                          // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UWaterInteractionComponent*                        WaterInteractionComponent;                                // 0x03F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	UBuoyancyComponent*                                BuoyancyComponent;                                        // 0x0400(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	USpawnDependentTrackedOwnerComponent*              SpawnDependentTrackedOwnerComponent;                      // 0x0408(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FRotator                                           RotationWhenPlacingWorldProxy;                            // 0x0410(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOffsetWhenPlacingWorldProxy;                             // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AsymmetricClientServerObjectsFramework.AsymmetricClientObject"));
		return ptr;
	}

};


// Class AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager
// 0x0058 (0x0428 - 0x03D0)
class AAsymmetricObjectServerManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	AAsymmetricClientObject*                           SpawnedObject;                                            // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   SceneComponent;                                           // 0x03F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	FStringAssetReference                              AsymmetricObjectAsset;                                    // 0x03F8(0x0010) (Net, ZeroConstructor)
	TAssetPtr<class UClass>                            ForcedAsymmetricObjectAsset;                              // 0x0408(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager"));
		return ptr;
	}


	void OnRep_AsymmetricObjectAsset();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
