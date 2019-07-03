#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StarsOfAThief_SpawnLoreBooks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StarsOfAThief_SpawnLoreBooks.BP_StarsOfAThief_SpawnLoreBooks_C
// 0x0010 (0x00A8 - 0x0098)
class UBP_StarsOfAThief_SpawnLoreBooks_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      LocationActor;                                            // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StarsOfAThief_SpawnLoreBooks.BP_StarsOfAThief_SpawnLoreBooks_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void ExecuteUbergraph_BP_StarsOfAThief_SpawnLoreBooks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
