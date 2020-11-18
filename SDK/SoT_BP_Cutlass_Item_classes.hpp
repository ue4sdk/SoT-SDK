#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cutlass_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C
// 0x0008 (0x0AF8 - 0x0AF0)
class ABP_Cutlass_Item_C : public APlayerMeleeWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C"));
		return ptr;
	}


	void DoBlockEffect();
	void UserConstructionScript();
	void OnBlockedAttack(const struct FEventBlocked& Event);
	void ExecuteUbergraph_BP_Cutlass_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
