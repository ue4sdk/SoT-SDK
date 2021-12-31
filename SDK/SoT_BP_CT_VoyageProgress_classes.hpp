#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CT_VoyageProgress_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CT_VoyageProgress.BP_CT_VoyageProgress_C
// 0x0021 (0x0101 - 0x00E0)
class UBP_CT_VoyageProgress_C : public UCompanyTutorialVoyageProgress
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	AAthenaPlayerController*                           AthenaPlayerController;                                   // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<ETutorialVoyageInternalState>          VoyageState;                                              // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	UClass*                                            MaximumRank;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NoLongerPurchaseable;                                     // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CT_VoyageProgress.BP_CT_VoyageProgress_C"));
		return ptr;
	}


	void IsPurchaseable(bool* Result);
	void SetProgress(TEnumAsByte<ETutorialVoyageInternalState> NewProgress);
	void IsCurrently(TEnumAsByte<ETutorialVoyageInternalState> ProgressState, bool* Result);
	void IsPast(TEnumAsByte<ETutorialVoyageInternalState> ProgressState, bool* Result);
	void PopulateExistingState();
	void Initialise(bool Disabled);
	void ExecuteUbergraph_BP_CT_VoyageProgress(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
