#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_fore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_large_mast_fore.BP_large_mast_fore_C
// 0x0018 (0x0A10 - 0x09F8)
class ABP_large_mast_fore_C : public ABP_Mast_C
{
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                           // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	UStaticMeshComponent*                              shp_flag_pennant_pole_01_a;                               // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UStaticMeshComponent*                              shp_flag_pennant_01_a;                                    // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_large_mast_fore.BP_large_mast_fore_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(UMastDescAsset* MastDesc);
	void ExecuteUbergraph_BP_large_mast_fore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
