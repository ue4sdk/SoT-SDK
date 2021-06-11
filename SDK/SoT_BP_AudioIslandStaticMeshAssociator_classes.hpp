#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioIslandStaticMeshAssociator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioIslandStaticMeshAssociator.BP_AudioIslandStaticMeshAssociator_C
// 0x0008 (0x0438 - 0x0430)
class ABP_AudioIslandStaticMeshAssociator_C : public AAudioIslandStaticMeshAssociatorBase
{
public:
	class UStaticMeshAudioEmittersComponent*           StaticMeshAudioEmitters;                                  // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AudioIslandStaticMeshAssociator.BP_AudioIslandStaticMeshAssociator_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
