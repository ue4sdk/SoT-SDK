#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_GhostShips_Flameheart_Skull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Anim_GhostShips_Flameheart_Skull.BP_Anim_GhostShips_Flameheart_Skull_C
// 0x0120 (0x0720 - 0x0600)
class UBP_Anim_GhostShips_Flameheart_Skull_C : public UNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DAADF37A4616ABF47C7C55AE8262EE3B;      // 0x0608(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EAF3AEC7469AFDE2C888D8981F61A3CA;      // 0x0650(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_915CC10C4DBEF5751E92D083AE01BAB9;// 0x06B0(0x0060)
	struct FScriptMulticastDelegate                    ShaderValuesUpdated;                                      // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Anim_GhostShips_Flameheart_Skull.BP_Anim_GhostShips_Flameheart_Skull_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_BP_Anim_GhostShips_Flameheart_Skull(int EntryPoint);
	void ShaderValuesUpdated__DelegateSignature(float GhostOpacity, float GhostBloom, float ShroudOpacity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
