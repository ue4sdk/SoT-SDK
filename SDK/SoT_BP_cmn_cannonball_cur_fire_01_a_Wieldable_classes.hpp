#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_cmn_cannonball_cur_fire_01_a_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C
// 0x0059 (0x0941 - 0x08E8)
class ABP_cmn_cannonball_cur_fire_01_a_Wieldable_C : public ABP_Grenade_Wieldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                          // 0x08F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsWielded;                                                // 0x0940(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_cmn_cannonball_cur_fire_01_a_Wieldable.BP_cmn_cannonball_cur_fire_01_a_Wieldable_C"));
		return ptr;
	}


	void SetLightVisibility(bool Visibility);
	void OnRep_IsWielded();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_cmn_cannonball_cur_fire_01_a_Wieldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
