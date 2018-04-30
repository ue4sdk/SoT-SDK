#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Bucket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_Bucket.BP_Anim_Bucket_C
// 0x00B0 (0x06E0 - 0x0630)
class UBP_Anim_Bucket_C : public UWieldableItemAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_ED7B862E4F56A4793A1861A824B99CAC;      // 0x0638(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A67D48FC4EC45A2222C682BB2B12AC8D;      // 0x0680(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_Bucket.BP_Anim_Bucket_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Anim_Bucket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
