#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CargoRunMap_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CargoRunMap_DVR.BP_CargoRunMap_DVR_C
// 0x0060 (0x0A90 - 0x0A30)
class ABP_CargoRunMap_DVR_C : public ABP_CargoRunMap_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                          // 0x0A48(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CargoRunMap_DVR.BP_CargoRunMap_DVR_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam);
	void ExecuteUbergraph_BP_CargoRunMap_DVR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
