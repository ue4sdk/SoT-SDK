#pragma once

// Sea of Thieves (2) SDK

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
// 0x0008 (0x03D8 - 0x03D0)
class ABP_AudioIslandStaticMeshAssociator_C : public AAudioIslandStaticMeshAssociatorBase
{
public:
	UStaticMeshAudioEmittersComponent*                 StaticMeshAudioEmitters;                                  // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
