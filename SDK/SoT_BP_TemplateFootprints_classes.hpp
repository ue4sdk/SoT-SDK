#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TemplateFootprints_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TemplateFootprints.BP_TemplateFootprints_C
// 0x0008 (0x04D0 - 0x04C8)
class ABP_TemplateFootprints_C : public ABP_RevealableDiorama_NPCSkeleton_C
{
public:
	class USplineFootprintPathComponent*               SplineFootprintPath;                                      // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TemplateFootprints.BP_TemplateFootprints_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
