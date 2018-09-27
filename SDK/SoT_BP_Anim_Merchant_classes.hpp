#pragma once

// Sea of Thieves (1.2.6) SDK

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
// 0x000B (0x14B8 - 0x14AD)
class UBP_Anim_Merchant_C : public UBP_Anim_NPC_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x14AD(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x14B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass BP_Anim_Merchant.BP_Anim_Merchant_C");
		return ptr;
	}


	void AnimNotify_NPCItemAnimation();
	void ExecuteUbergraph_BP_Anim_Merchant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
