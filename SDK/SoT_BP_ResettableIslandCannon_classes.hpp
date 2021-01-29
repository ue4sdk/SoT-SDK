#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResettableIslandCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResettableIslandCannon.BP_ResettableIslandCannon_C
// 0x0018 (0x0B70 - 0x0B58)
class ABP_ResettableIslandCannon_C : public ABP_IslandCannon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMechanismProximityResetComponent*           MechanismProximityReset;                                  // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlueprintMechanismResetComponent*           BlueprintMechanismReset;                                  // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ResettableIslandCannon.BP_ResettableIslandCannon_C"));
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__BlueprintMechanismReset_K2Node_ComponentBoundEvent_12_ResetMechanismEventInBlueprint__DelegateSignature();
	void ExecuteUbergraph_BP_ResettableIslandCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
