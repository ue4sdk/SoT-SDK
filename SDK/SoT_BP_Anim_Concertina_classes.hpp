#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Concertina_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C
// 0x0109 (0x0739 - 0x0630)
class UBP_Anim_Concertina_C : public UWieldableItemAnimationInstance
{
public:
	unsigned char                                      UnknownData00[0x109];                                     // 0x0630(0x0109) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Concertina.BP_Anim_Concertina_C");
		return ptr;
	}


	void OnUseStarted(class UClass** InputID, struct FWieldableItemActionVisuals* ActionVisuals);
	void OnUseStopped(class UClass** InputID);
	void ExecuteUbergraph_BP_Anim_Concertina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
