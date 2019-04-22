#pragma once

// Sea of Thieves (1.4) SDK

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
// 0x007D (0x18A1 - 0x1824)
class UBP_Anim_PirateLord_standing_TallTales_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1824(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1828(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_1;                                           // 0x1830(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_2;                                           // 0x1840(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_3;                                           // 0x1850(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_4;                                           // 0x1860(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class ABP_TreasureRoomBrazier_C>> BrazierGroup_5;                                           // 0x1870(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               IntensityCurveNames;                                      // 0x1880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ShaderValuesUpdated;                                      // 0x1890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               InCutscene;                                               // 0x18A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PirateLord_standing_TallTales.BP_Anim_PirateLord_standing_TallTales_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_BeginCutsceneUpdates();
	void AnimNotify_EndCutsceneUpdates();
	void ExecuteUbergraph_BP_Anim_PirateLord_standing_TallTales(int EntryPoint);
	void ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
