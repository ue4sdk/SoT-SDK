#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AF_Rank08_RankDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AF_Rank08_RankDesc.BP_AF_Rank08_RankDesc_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_AF_Rank08_RankDesc_C : public URankDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AF_Rank08_RankDesc.BP_AF_Rank08_RankDesc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
