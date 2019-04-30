#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_GenerateNPCLocationReference_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shroudbreaker_GenerateNPCLocationReference.BP_Shroudbreaker_GenerateNPCLocationReference_C
// 0x000C (0x00A4 - 0x0098)
class UBP_Shroudbreaker_GenerateNPCLocationReference_C : public UTaleQuestParallelForeachStep
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Index;                                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shroudbreaker_GenerateNPCLocationReference.BP_Shroudbreaker_GenerateNPCLocationReference_C"));
		return ptr;
	}


	void ForIndex(int Index);
	void ExecuteUbergraph_BP_Shroudbreaker_GenerateNPCLocationReference(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
