#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CannonBall_Cursed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CannonBall_Cursed.BP_CannonBall_Cursed_C
// 0x0059 (0x0851 - 0x07F8)
class ABP_CannonBall_Cursed_C : public ABP_CannonBall_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FObjectMessagingHandle                      OnWieldedHandle;                                          // 0x0808(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsWielded;                                                // 0x0850(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CannonBall_Cursed.BP_CannonBall_Cursed_C"));
		return ptr;
	}


	void SetLightVisibility(bool Visibility);
	void OnRep_IsWielded();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnIsWielded(const struct FEventWieldableItemSetIsWielded& NewParam);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_CannonBall_Cursed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
