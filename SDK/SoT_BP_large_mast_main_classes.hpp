#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_large_mast_main_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_large_mast_main.BP_large_mast_main_C
// 0x0028 (0x07D0 - 0x07A8)
class ABP_large_mast_main_C : public ABP_Mast_C
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x07A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_large_mast_main.BP_large_mast_main_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMastDescLoaded(class UMastDescAsset** MastDesc);
	void ExecuteUbergraph_BP_large_mast_main(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
