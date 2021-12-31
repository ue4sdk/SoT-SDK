#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_Sitting_ThirdPerson_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C
// 0x0152 (0x026A - 0x0118)
class UBP_Prompt_Sitting_ThirdPerson_C : public UBP_PromptCoordinator_Base_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	FObjectMessagingHandle                             Handle_LocalPlayerEnteredSittingState;                    // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FPrioritisedPromptWithHandle                       Prompt_ThirdPerson;                                       // 0x0168(0x0068) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PromptDisplayDuration;                                    // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CrewInRadius;                                             // 0x01D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptOnCooldown;                                         // 0x01D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01D6(0x0002) MISSED OFFSET
	FObjectMessagingHandle                             Handle_LocalPlayerExitedSittingState;                     // 0x01D8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	FObjectMessagingHandle                             Handle_LocalPlayerEnteredSittingThirdPersonCameraState;   // 0x0220(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayerOnSeat;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PromptEvaluated;                                          // 0x0269(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C"));
		return ptr;
	}


	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void LocalPlayerEnteredSittingState(const FEventLocalPlayerEnteredSittingState& Event);
	void LocalPlayerExitedSittingState(const FEventLocalPlayerExittedSittingState& Event);
	void LocalPlayerEnteredSittingThirdPersonCamera(const FEventLocalPlayerEnteredSittingThirdPersonCameraState& Event);
	void ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
