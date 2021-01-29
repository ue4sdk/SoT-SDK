#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RiddleMap_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RiddleMap_DVR.BP_RiddleMap_DVR_C
// 0x0068 (0x0988 - 0x0920)
class ABP_RiddleMap_DVR_C : public ABP_RiddleMap_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                          // 0x0940(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RiddleMap_DVR.BP_RiddleMap_DVR_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam);
	void ExecuteUbergraph_BP_RiddleMap_DVR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
