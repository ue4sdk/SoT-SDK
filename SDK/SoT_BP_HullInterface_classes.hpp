#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HullInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HullInterface.BP_HullInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBP_HullInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_HullInterface.BP_HullInterface_C");
		return ptr;
	}


	void Apply_Hit(const struct FVector& HitPosition, const struct FVector& HitNormal, float HitStrength, bool Has_Decal, class UDecalComponent** Decal);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
