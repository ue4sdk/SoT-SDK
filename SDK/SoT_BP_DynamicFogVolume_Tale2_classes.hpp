#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_DynamicFogVolume_Tale2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C
// 0x0014 (0x0454 - 0x0440)
class ABP_DynamicFogVolume_Tale2_C : public ABP_DynamicDensityFogVolume_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              WorldFadeDistanceStart;                                   // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldFadeDistanceRange;                                   // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FogMaxDensity;                                            // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_DynamicFogVolume_Tale2.BP_DynamicFogVolume_Tale2_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_DynamicFogVolume_Tale2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
