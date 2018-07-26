#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterVolume.BP_WaterVolume_C
// 0x003C (0x0534 - 0x04F8)
class ABP_WaterVolume_C : public AWaterVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WaterPlaneActivatationVolume;                             // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDynamicFlowComponent*                       DynamicFlow;                                              // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlatWaterPlaneComponent*                    FlatWaterPlane;                                           // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlatWaterMeshComponent*                     FlatWaterMesh;                                            // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SunLit;                                                   // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	struct FName                                       RippleGeneratorTag;                                       // 0x052C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterVolume.BP_WaterVolume_C");
		return ptr;
	}


	void CollectRippleGenerators();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_BP_WaterVolume(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
