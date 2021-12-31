#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Chicken.BP_Chicken_C
// 0x0018 (0x0BB8 - 0x0BA0)
class ABP_Chicken_C : public ABP_Fauna_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UAIItemSpawnComponent*                             AIItemSpawn;                                              // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USkeletalMeshComponent*                            ChickenSkeletalMesh;                                      // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Chicken.BP_Chicken_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ExecuteUbergraph_BP_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
