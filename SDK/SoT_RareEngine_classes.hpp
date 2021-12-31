#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RareEngine.RareGameEngine
// 0x0058 (0x0A40 - 0x09E8)
class URareGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x09E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.RareGameEngine"));
		return ptr;
	}

};


// Class RareEngine.AssetReferencer
// 0x0010 (0x0038 - 0x0028)
class UAssetReferencer : public UDataAsset
{
public:
	TArray<TAssetPtr<class UObject>>                   AssetsToReference;                                        // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.AssetReferencer"));
		return ptr;
	}

};


// Class RareEngine.AudioHardwareDeviceService
// 0x0018 (0x0040 - 0x0028)
class UAudioHardwareDeviceService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.AudioHardwareDeviceService"));
		return ptr;
	}

};


// Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHitchDiagnosisBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary"));
		return ptr;
	}


	static void SetHitchThreshold(int InThreshold);
	static FString GetMaxHitchNameThisFrame();
	static int GetMaxHitchLengthThisFrameMs();
	static void DumpThisFramesHitchesToLog();
	static bool DidHitchOccurThisFrame();
};


// Class RareEngine.MemoryUsageVisualiserSettings
// 0x0010 (0x0038 - 0x0028)
class UMemoryUsageVisualiserSettings : public UObject
{
public:
	TArray<FMemoryVisualiserCategory>                  VisualiserCategories;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.MemoryUsageVisualiserSettings"));
		return ptr;
	}

};


// Class RareEngine.RareHUD
// 0x0000 (0x04C8 - 0x04C8)
class ARareHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.RareHUD"));
		return ptr;
	}

};


// Class RareEngine.StallDetector
// 0x0028 (0x0050 - 0x0028)
class UStallDetector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	FScriptMulticastDelegate                           Callback;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.StallDetector"));
		return ptr;
	}


	void Deactivate();
	static UStallDetector* CreateStallDetector(float Delay, bool CreateActive);
	void Activate();
};


// Class RareEngine.StaticMeshActorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UStaticMeshActorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareEngine.StaticMeshActorBlueprintLibrary"));
		return ptr;
	}


	static void FindAllStaticMeshComponents(UObject* WorldContextObject, TArray<UStaticMesh*> MeshFilter, ULevel* RestrictToLevel, TArray<FStaticMeshComponentList>* OutComponentLists);
	static void FindAllStaticMeshActors(UObject* WorldContextObject, TArray<UStaticMesh*> MeshFilter, ULevel* RestrictToLevel, TArray<FStaticMeshActorList>* OutActorLists);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
