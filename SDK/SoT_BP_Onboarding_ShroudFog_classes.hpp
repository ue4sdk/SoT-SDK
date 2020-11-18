#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Onboarding_ShroudFog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C
// 0x0026 (0x0496 - 0x0470)
class ABP_Onboarding_ShroudFog_C : public AFogVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ShroudAnimation_ShroudParting_51933648445A6213C64100A2A8E809D1;// 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShroudAnimation__Direction_51933648445A6213C64100A2A8E809D1;// 0x047C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShroudAnimation;                                          // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinimumShroudClosePosition;                               // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShroudActive;                                             // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShroudPartingTriggered;                                   // 0x0495(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Onboarding_ShroudFog.BP_Onboarding_ShroudFog_C"));
		return ptr;
	}


	void OnRep_ShroudPartingTriggered();
	void UserConstructionScript();
	void ShroudAnimation__FinishedFunc();
	void ShroudAnimation__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OpenShroud();
	void StartShroudParting();
	void ExecuteUbergraph_BP_Onboarding_ShroudFog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
