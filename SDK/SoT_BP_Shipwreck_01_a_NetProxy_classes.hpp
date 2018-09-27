#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwreck_01_a_NetProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shipwreck_01_a_NetProxy.BP_Shipwreck_01_a_NetProxy_C
// 0x0000 (0x04A8 - 0x04A8)
class ABP_Shipwreck_01_a_NetProxy_C : public ANetProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Shipwreck_01_a_NetProxy.BP_Shipwreck_01_a_NetProxy_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
