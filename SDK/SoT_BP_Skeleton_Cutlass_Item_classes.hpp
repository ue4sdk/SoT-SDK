#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Skeleton_Cutlass_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Skeleton_Cutlass_Item.BP_Skeleton_Cutlass_Item_C
// 0x0008 (0x0A58 - 0x0A50)
class ABP_Skeleton_Cutlass_Item_C : public AMeleeWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Skeleton_Cutlass_Item.BP_Skeleton_Cutlass_Item_C"));
		return ptr;
	}


	void DoBlockEffect();
	void UserConstructionScript();
	void OnBlockedAttack(const struct FEventBlocked& Event);
	void ExecuteUbergraph_BP_Skeleton_Cutlass_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
