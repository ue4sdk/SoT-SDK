#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_onboarding_shroudGate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_onboarding_shroudGate.BP_onboarding_shroudGate_C
// 0x0050 (0x04B8 - 0x0468)
class ABP_onboarding_shroudGate_C : public ALandmarkReactionActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             EndPoint_WorldPos_;                                       // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             StartPoint_WorldPos_;                                     // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        visBall;                                                  // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GateOpen_Shader_FE47166D45EC0481D08E0FAF9B8A964A;         // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GateOpen_Movement_FE47166D45EC0481D08E0FAF9B8A964A;       // 0x049C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GateOpen__Direction_FE47166D45EC0481D08E0FAF9B8A964A;     // 0x04A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          GateOpen;                                                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ShroudGateMat;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_onboarding_shroudGate.BP_onboarding_shroudGate_C"));
		return ptr;
	}


	bool StopReaction();
	bool StartReaction();
	void UserConstructionScript();
	void GateOpen__FinishedFunc();
	void GateOpen__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_onboarding_shroudGate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
