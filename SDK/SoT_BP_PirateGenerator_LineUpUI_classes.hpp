#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateGenerator_LineUpUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C
// 0x0088 (0x0458 - 0x03D0)
class ABP_PirateGenerator_LineUpUI_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_PirateGenerator_LineUp_C*>        Pirates;                                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<struct FCarouselPirateDesc>                 CarouselPirateDescs;                                      // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       LockedPirates;                                            // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRadialCoordinate                           MinBodyShape;                                             // 0x0410(0x0008) (Edit, BlueprintVisible)
	struct FRadialCoordinate                           MaxBodyShape;                                             // 0x0418(0x0008) (Edit, BlueprintVisible)
	bool                                               UseIPG;                                                   // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UAnimationDataStoreAsset*                    AnimationAsset;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultAnimationSet;                                      // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCarouselPirateGeneratorParamsAsset*         PirateGeneratorParams;                                    // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfPiratesCurrentlyGenerating;                       // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PirateLineUpInitializedDispatcher;                        // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PirateGenerator_LineUpUI.BP_PirateGenerator_LineUpUI_C"));
		return ptr;
	}


	void GetLockStatus(int IndexToToggle, bool* Locked);
	void ToggleLockStatus(int IndexToToggle);
	void ClearLockedPirates();
	void GetTransitionState(bool* Transitioning);
	void GetAnimationDataFromClass(class UClass* Class, class UAD_FrontendPirate_Default_C** AnimationData);
	void SanitizeAnimationPoses();
	void RandomizePirates();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void LineUpPirateInitalized();
	void ExecuteUbergraph_BP_PirateGenerator_LineUpUI(int EntryPoint);
	void PirateLineUpInitializedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
