#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Merchant_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Merchant.BP_Anim_Merchant_C
// 0x000B (0x1BE0 - 0x1BD5)
class UBP_Anim_Merchant_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x1BD5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_Merchant.BP_Anim_Merchant_C"));
		return ptr;
	}


	void AnimNotify_NPCItemAnimation();
	void ExecuteUbergraph_BP_Anim_Merchant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
