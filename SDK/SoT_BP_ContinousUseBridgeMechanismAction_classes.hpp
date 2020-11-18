#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ContinousUseBridgeMechanismAction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ContinousUseBridgeMechanismAction.BP_ContinousUseBridgeMechanismAction_C
// 0x0008 (0x0AB8 - 0x0AB0)
class ABP_ContinousUseBridgeMechanismAction_C : public AContinuousAnimatedMechanismAction
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ContinousUseBridgeMechanismAction.BP_ContinousUseBridgeMechanismAction_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
