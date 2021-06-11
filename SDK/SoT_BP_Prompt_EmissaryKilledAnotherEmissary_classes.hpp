#pragma once

// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Prompt_EmissaryKilledAnotherEmissary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C
// 0x00A8 (0x01C0 - 0x0118)
class UBP_Prompt_EmissaryKilledAnotherEmissary_C : public UBP_PromptCoordinator_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FObjectMessagingHandle                      Handle_EmissaryKilledAnotherEmissary;                     // 0x0120(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CompanyName;                                              // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VictimCompanyName;                                        // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SurfacedThisSession;                                      // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	struct FName                                       ExpectedCompanyName;                                      // 0x017C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	TArray<struct FName>                               ExpectedVictimCompanyName;                                // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FPrioritisedPromptWithHandle>        Prompts;                                                  // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      PromptAccessKey;                                          // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PromptIndex;                                              // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfPrompts;                                          // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShowPromptDuration;                                       // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Prompt_EmissaryKilledAnotherEmissary.BP_Prompt_EmissaryKilledAnotherEmissary_C"));
		return ptr;
	}


	void OnEmissaryKilledAnotherEmissary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam);
	void EmissaryKilledAnotherEmisary(const struct FEmissaryKilledAnotherEmissaryNetworkEvent& NewParam);
	void Evaluate();
	void RegisterOtherEvents_Implementable();
	void UnregisterOtherEvents_Implementable();
	void ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
