#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SkullRitual_Pipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SkullRitual_Pipe.BP_SkullRitual_Pipe_C
// 0x0008 (0x0430 - 0x0428)
class ABP_SkullRitual_Pipe_C : public AActor
{
public:
	class UStaticMeshComponent*                        gmp_sm_pipe_oos_01_a;                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SkullRitual_Pipe.BP_SkullRitual_Pipe_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
