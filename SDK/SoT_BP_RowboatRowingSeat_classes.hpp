#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_RowboatRowingSeat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RowboatRowingSeat.BP_RowboatRowingSeat_C
// 0x0008 (0x0868 - 0x0860)
class ABP_RowboatRowingSeat_C : public ARowingSeat
{
public:
	class UWwiseEmitterComponent*                      RowboatEmitter;                                           // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_RowboatRowingSeat.BP_RowboatRowingSeat_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
