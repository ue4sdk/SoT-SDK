#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WildRose_SpawnLoreBooks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WildRose_SpawnLoreBooks.BP_WildRose_SpawnLoreBooks_C
// 0x0008 (0x00A0 - 0x0098)
class UBP_WildRose_SpawnLoreBooks_C : public UBlueprintStepBase
{
public:
	class AActor*                                      LocationActor;                                            // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WildRose_SpawnLoreBooks.BP_WildRose_SpawnLoreBooks_C"));
		return ptr;
	}


	void OnBeginCustom(TArray<struct FDS_Lorebooks>* Lorebooks);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
