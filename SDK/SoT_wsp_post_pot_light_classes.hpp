#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_post_pot_light_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_post_pot_light.wsp_post_pot_light_C
// 0x0028 (0x04A8 - 0x0480)
class Awsp_post_pot_light_C : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0480(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_post_pot_light.wsp_post_pot_light_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
