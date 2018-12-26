#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x0058 (0x0B38 - 0x0AE0)
class URareGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0AE0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareEngine.RareGameEngine");
		return ptr;
	}

};


// Class RareEngine.AudioHardwareDeviceService
// 0x01F0 (0x0218 - 0x0028)
class UAudioHardwareDeviceService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0028(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareEngine.AudioHardwareDeviceService");
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
		static auto ptr = UObject::FindObject<UClass>("Class RareEngine.HitchDiagnosisBlueprintFunctionLibrary");
		return ptr;
	}


	static void SetHitchThreshold(int InThreshold);
	static class FString GetMaxHitchNameThisFrame();
	static int GetMaxHitchLengthThisFrameMs();
	static void DumpThisFramesHitchesToLog();
	static bool DidHitchOccurThisFrame();
};


// Class RareEngine.MemoryUsageVisualiserSettings
// 0x0010 (0x0038 - 0x0028)
class UMemoryUsageVisualiserSettings : public UObject
{
public:
	TArray<struct FMemoryVisualiserCategory>           VisualiserCategories;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareEngine.MemoryUsageVisualiserSettings");
		return ptr;
	}

};


// Class RareEngine.RareHUD
// 0x0000 (0x0588 - 0x0588)
class ARareHUD : public AHUD
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareEngine.RareHUD");
		return ptr;
	}

};


// Class RareEngine.StallDetector
// 0x0028 (0x0050 - 0x0028)
class UStallDetector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    Callback;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareEngine.StallDetector");
		return ptr;
	}


	void Deactivate();
	static class UStallDetector* CreateStallDetector(float Delay, bool CreateActive);
	void Activate();
};


// Class RareEngine.StaticMeshActorBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UStaticMeshActorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class RareEngine.StaticMeshActorBlueprintLibrary");
		return ptr;
	}


	static void FindAllStaticMeshComponents(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshComponentList>* OutComponentLists);
	static void FindAllStaticMeshActors(class UObject* WorldContextObject, TArray<class UStaticMesh*> MeshFilter, class ULevel* RestrictToLevel, TArray<struct FStaticMeshActorList>* OutActorLists);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
