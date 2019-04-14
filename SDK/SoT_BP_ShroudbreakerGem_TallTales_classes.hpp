#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShroudbreakerGem_TallTales_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShroudbreakerGem_TallTales.BP_ShroudbreakerGem_TallTales_C
// 0x0008 (0x04B0 - 0x04A8)
class ABP_ShroudbreakerGem_TallTales_C : public AActor
{
public:
	class UStaticMeshComponent*                        gmp_tal_shroudbreaker_statue_gem_01_a;                    // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShroudbreakerGem_TallTales.BP_ShroudbreakerGem_TallTales_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
