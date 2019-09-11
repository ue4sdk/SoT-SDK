#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PirateLord_standing_TallTales_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C
// 0x007C (0x1931 - 0x18B5)
class UBP_Anim_PirateLord_standing_TallTales_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x18B5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x18B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_1;                                           // 0x18C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_2;                                           // 0x18D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_3;                                           // 0x18E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_4;                                           // 0x18F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_5;                                           // 0x1900(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               IntensityCurveNames;                                      // 0x1910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ShaderValuesUpdated;                                      // 0x1920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               InCutscene;                                               // 0x1930(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_BeginCutsceneUpdates();
	void AnimNotify_EndCutsceneUpdates();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BP_Anim_PirateLord_standing_TallTales(int EntryPoint);
	void ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
