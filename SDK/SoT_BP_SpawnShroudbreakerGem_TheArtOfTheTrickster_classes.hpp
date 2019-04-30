#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpawnShroudbreakerGem_TheArtOfTheTrickster.BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C
// 0x0010 (0x00A0 - 0x0090)
class UBP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C : public UBlueprintStepBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      ShroudbreakerGem;                                         // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SpawnShroudbreakerGem_TheArtOfTheTrickster.BP_SpawnShroudbreakerGem_TheArtOfTheTrickster_C"));
		return ptr;
	}


	void OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode);
	void OnItemPickedUp();
	void ExecuteUbergraph_BP_SpawnShroudbreakerGem_TheArtOfTheTrickster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
