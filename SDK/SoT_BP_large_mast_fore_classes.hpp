#pragma once

// Sea of Thieves (1.1.6) SDK

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
// 0x0018 (0x07E8 - 0x07D0)
class ABP_large_mast_fore_C : public ABP_Mast_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        shp_flag_pennant_pole_01_a;                               // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_flag_pennant_01_a;                                    // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_large_mast_fore.BP_large_mast_fore_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset** MastDesc);
	void ExecuteUbergraph_BP_large_mast_fore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
