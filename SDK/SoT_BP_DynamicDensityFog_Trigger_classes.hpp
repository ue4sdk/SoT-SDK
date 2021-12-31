#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicDensityFog_Trigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C
// 0x0020 (0x03F0 - 0x03D0)
class ABP_DynamicDensityFog_Trigger_C : public AActor
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UCapsuleComponent*                                 DynamicTrigger;                                           // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	USceneComponent*                                   DefaultSceneRoot;                                         // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ABP_DynamicDensityFogVolume_C*                     FogVolume;                                                // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DynamicDensityFog_Trigger.BP_DynamicDensityFog_Trigger_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_136_ComponentBeginOverlapSignature__DelegateSignature(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void BndEvt__DynamicTrigger_K2Node_ComponentBoundEvent_181_ComponentEndOverlapSignature__DelegateSignature(AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_DynamicDensityFog_Trigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
