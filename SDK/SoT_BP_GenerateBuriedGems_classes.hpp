#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GenerateBuriedGems_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GenerateBuriedGems.BP_GenerateBuriedGems_C
// 0x001C (0x00B4 - 0x0098)
class UBP_GenerateBuriedGems_C : public UTaleQuestParallelForeachStep
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FName>                               IslandsToExclude;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Index;                                                    // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GenerateBuriedGems.BP_GenerateBuriedGems_C"));
		return ptr;
	}


	void GetIslandFromActorRef(TAssetPtr<class AActor> Actor, struct FName* IslandName);
	void ForIndex(int Index);
	void ExecuteUbergraph_BP_GenerateBuriedGems(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
