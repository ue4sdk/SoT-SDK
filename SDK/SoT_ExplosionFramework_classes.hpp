#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ExplosionFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ExplosionFramework.ExplosiveComponentInterface
// 0x0000 (0x0028 - 0x0028)
class UExplosiveComponentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ExplosionFramework.ExplosiveComponentInterface"));
		return ptr;
	}

};


// Class ExplosionFramework.StatusResponseExplodeAfterTime
// 0x0018 (0x0040 - 0x0028)
class UStatusResponseExplodeAfterTime : public UStatusResponse
{
public:
	float                                              MinTimeUntilExplosion;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeUntilExplosion;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UWorld*                                      CachedWorld;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ExplosionFramework.StatusResponseExplodeAfterTime"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
