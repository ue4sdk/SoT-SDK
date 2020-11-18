#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_NPCHalfSkelly_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_NPCHalfSkelly.BP_Anim_NPCHalfSkelly_C
// 0x000F (0x1BB8 - 0x1BA9)
class UBP_Anim_NPCHalfSkelly_C : public UBP_Anim_BaseNPCHalfSkelly_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1BA9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1BB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_NPCHalfSkelly.BP_Anim_NPCHalfSkelly_C"));
		return ptr;
	}


	void AnimNotify_WakeUpSkelly();
	void ExecuteUbergraph_BP_Anim_NPCHalfSkelly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
