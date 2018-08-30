#pragma once

// Sea of Thieves (1.1.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PiratePreview_Lighting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C
// 0x0058 (0x04E8 - 0x0490)
class ABP_PiratePreview_Lighting_C : public AActor
{
public:
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                     // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkyLightComponent*                          SkyLight;                                                 // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight2;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight1;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    PreviewBusy;                                              // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PreviewReady;                                             // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PiratePreview_Lighting.BP_PiratePreview_Lighting_C");
		return ptr;
	}


	void UserConstructionScript();
	void PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data);
	void PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
