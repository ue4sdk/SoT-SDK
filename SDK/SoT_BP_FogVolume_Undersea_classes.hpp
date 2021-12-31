#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FogVolume_Undersea_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FogVolume_Undersea.BP_FogVolume_Undersea_C
// 0x0014 (0x03F4 - 0x03E0)
class ABP_FogVolume_Undersea_C : public AFogVolume
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              WorldFadeDistanceStart;                                   // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldFadeDistanceRange;                                   // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxDensity;                                            // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FogVolume_Undersea.BP_FogVolume_Undersea_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_FogVolume_Undersea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
