#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_trn_shop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_audio_trn_shop.BP_audio_trn_shop_C
// 0x0020 (0x0448 - 0x0428)
class ABP_audio_trn_shop_C : public AActor
{
public:
	class UTritonComponent*                            Triton;                                                   // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       AudioPortal;                                              // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioSpaceComponent*                        AudioSpace;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_audio_trn_shop.BP_audio_trn_shop_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
