#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureMap_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureMap_DVR.BP_TreasureMap_DVR_C
// 0x00D8 (0x09B8 - 0x08E0)
class ABP_TreasureMap_DVR_C : public ABP_TreasureMap_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VFXSpawnPoints;                                           // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Emitter;                                                  // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0921(0x0007) MISSED OFFSET
	struct FObjectMessagingHandle                      OnStowedHandle;                                           // 0x0928(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                          // 0x0970(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TreasureMap_DVR.BP_TreasureMap_DVR_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam);
	void ExecuteUbergraph_BP_TreasureMap_DVR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
