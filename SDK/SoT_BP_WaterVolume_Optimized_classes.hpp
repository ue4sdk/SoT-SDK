#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_Optimized_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C
// 0x0034 (0x0484 - 0x0450)
class ABP_WaterVolume_Optimized_C : public AWaterVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WaterPlaneActivatationVolume;                             // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlatWaterPlaneComponent*                    FlatWaterPlane;                                           // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFlatWaterMeshComponent*                     FlatWaterMesh;                                            // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SunLit;                                                   // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	struct FName                                       RippleGeneratorTag;                                       // 0x047C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C"));
		return ptr;
	}


	void CollectRippleGenerators();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_WaterVolume_Optimized(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
