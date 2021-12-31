#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FrontendFireworkLight_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FrontendFireworkLight.BP_FrontendFireworkLight_C
// 0x003C (0x0424 - 0x03E8)
class ABP_FrontendFireworkLight_C : public APointLight
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWwiseEmitterComponent*                      WwiseEmitter;                                             // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColours_LightColour_2D0B7D8F4B9E3E3DB46BDDA6799E2AFF;// 0x03F8(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              LightColours_LightIntensity_2D0B7D8F4B9E3E3DB46BDDA6799E2AFF;// 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightColours__Direction_2D0B7D8F4B9E3E3DB46BDDA6799E2AFF; // 0x040C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightColours;                                             // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Triggered;                                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              LightIntensityTriggerValue;                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentLightIntensity;                                    // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FrontendFireworkLight.BP_FrontendFireworkLight_C"));
		return ptr;
	}


	void UserConstructionScript();
	void LightColours__FinishedFunc();
	void LightColours__UpdateFunc();
	void LightColours__Event_Track__EventFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FrontendFireworkLight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
