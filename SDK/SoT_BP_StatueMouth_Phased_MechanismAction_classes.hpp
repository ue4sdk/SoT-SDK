#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_StatueMouth_Phased_MechanismAction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_StatueMouth_Phased_MechanismAction.BP_StatueMouth_Phased_MechanismAction_C
// 0x0010 (0x0580 - 0x0570)
class ABP_StatueMouth_Phased_MechanismAction_C : public AToggleAnimatedMechanismAction
{
public:
	class UActorPhasingComponent*                      ActorPhasing;                                             // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_StatueMouth_Phased_MechanismAction.BP_StatueMouth_Phased_MechanismAction_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
