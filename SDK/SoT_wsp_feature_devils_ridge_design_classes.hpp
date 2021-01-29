#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_feature_devils_ridge_design_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_feature_devils_ridge_design.wsp_feature_devils_ridge_design_C
// 0x0008 (0x0438 - 0x0430)
class Awsp_feature_devils_ridge_design_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_feature_devils_ridge_design.wsp_feature_devils_ridge_design_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_wsp_feature_devils_ridge_design(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
