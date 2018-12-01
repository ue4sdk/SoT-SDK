#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Spyglass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Spyglass.BP_Spyglass_C
// 0x0048 (0x08B8 - 0x0870)
class ABP_Spyglass_C : public ASpyglass
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Glint;                                                    // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurningOn;                                                // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0891(0x0003) MISSED OFFSET
	float                                              BlurTime;                                                 // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlurInDuration;                                           // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlurOutDuration;                                          // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BlurCurve;                                                // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  LensNormal;                                               // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LensMask;                                                 // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Spyglass.BP_Spyglass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ScopeOn();
	void ScopeOff();
	void GlintOn();
	void GlintOff();
	void ForceScopeOff();
	void ExecuteUbergraph_BP_Spyglass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
