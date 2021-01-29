#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SwimmingCreatureAnimGraph_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_SwimmingCreatureAnimGraph.BP_SwimmingCreatureAnimGraph_C
// 0x01C0 (0x0780 - 0x05C0)
class UBP_SwimmingCreatureAnimGraph_C : public USwimmingCreatureAnimationInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E7F6DF894B46F234D4A841BC61E0D4AD;      // 0x05C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_77C9F4534D37BB8E009A5F9C970B0709;      // 0x0610(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_913DF544458E162EBC5E8BA529582CF1;// 0x0670(0x0110)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_SwimmingCreatureAnimGraph.BP_SwimmingCreatureAnimGraph_C"));
		return ptr;
	}


	void ExecuteUbergraph_BP_SwimmingCreatureAnimGraph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
