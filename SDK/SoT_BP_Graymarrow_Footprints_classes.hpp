#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Graymarrow_Footprints_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Graymarrow_Footprints.BP_Graymarrow_Footprints_C
// 0x0060 (0x0530 - 0x04D0)
class ABP_Graymarrow_Footprints_C : public ABP_TemplateFootprints_C
{
public:
	class UDecalComponent*                             Decal15;                                                  // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal14;                                                  // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal13;                                                  // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal12;                                                  // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal11;                                                  // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal10;                                                  // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal9;                                                   // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal4;                                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal3;                                                   // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal2;                                                   // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal1;                                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Graymarrow_Footprints.BP_Graymarrow_Footprints_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
