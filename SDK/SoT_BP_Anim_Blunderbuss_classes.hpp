#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Blunderbuss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C
// 0x0150 (0x0780 - 0x0630)
class UBP_Anim_Blunderbuss_C : public UWieldableItemAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0630(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Blunderbuss.BP_Anim_Blunderbuss_C");
		return ptr;
	}


	void AnimNotify_ExitedFire();
	void OnOneShotUseTriggered(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals);
	void OnUseStarted(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals);
	void BlueprintInitializeAnimation();
	void ReloadEventDelegate(const struct FEventProjectileWeaponReload& Event);
	void BlueprintUninitializeAnimation();
	void AnimNotify_ResetReload();
	void ExecuteUbergraph_BP_Anim_Blunderbuss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
