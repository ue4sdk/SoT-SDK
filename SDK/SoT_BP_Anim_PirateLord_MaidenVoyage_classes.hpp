#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_PirateLord_MaidenVoyage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C
// 0x001C (0x19B1 - 0x1995)
class UBP_Anim_PirateLord_MaidenVoyage_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x1995(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1998(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    ShaderValuesUpdated;                                      // 0x19A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               InCutscene;                                               // 0x19B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_PirateLord_MaidenVoyage.BP_Anim_PirateLord_MaidenVoyage_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_BeginCutsceneUpdates();
	void AnimNotify_EndMaterialUpdate();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_BP_Anim_PirateLord_MaidenVoyage(int EntryPoint);
	void ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
