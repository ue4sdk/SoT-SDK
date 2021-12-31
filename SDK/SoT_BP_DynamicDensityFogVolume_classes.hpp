#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicDensityFogVolume_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C
// 0x0060 (0x0440 - 0x03E0)
class ABP_DynamicDensityFogVolume_C : public AFogVolume
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              StateBlend_BlendAmount_F79089CA4C773743F03F4C978EB7C986;  // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StateBlend__Direction_F79089CA4C773743F03F4C978EB7C986;   // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	UTimelineComponent*                                StateBlend;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UMaterialInstanceDynamic*                          UpdateMaterial;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UCanvasRenderTarget2D*                             Canvas;                                                   // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentState;                                             // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NextState;                                                // 0x040C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<UTexture2D*>                                StateTextures;                                            // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Width;                                                    // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseStateParameters;                                       // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0429(0x0007) MISSED OFFSET
	TArray<FBP_Struct_DynamicFogVolumeParams>          StateParams;                                              // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C"));
		return ptr;
	}


	void BlendParams(float BlendAmount);
	void OnRep_NextState();
	void UserConstructionScript();
	void StateBlend__FinishedFunc();
	void StateBlend__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateCanvas(UCanvas* Canvas, int Width, int Height);
	void ChangeState(int State);
	void SetState();
	void ExecuteUbergraph_BP_DynamicDensityFogVolume(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
