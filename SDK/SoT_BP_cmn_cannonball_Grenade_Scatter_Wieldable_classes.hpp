#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannonball_Grenade_Scatter_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C
// 0x0020 (0x0908 - 0x08E8)
class ABP_cmn_cannonball_Grenade_Scatter_Wieldable_C : public ABP_Grenade_Wieldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              JiggleVelocityThreshold;                                  // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JiggleVelocityScale;                                      // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JiggleAmount;                                             // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                          // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_cannonball_Grenade_Scatter_Wieldable.BP_cmn_cannonball_Grenade_Scatter_Wieldable_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_cmn_cannonball_Grenade_Scatter_Wieldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
