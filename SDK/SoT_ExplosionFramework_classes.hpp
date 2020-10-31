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

// Class ExplosionFramework.CreateActorInstanceOnExplodeComponent
// 0x0060 (0x0128 - 0x00C8)
class UCreateActorInstanceOnExplodeComponent : public UActorComponent
{
public:
	class UClass*                                      ActorToInstance;                                          // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x00D0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ExplosionFramework.CreateActorInstanceOnExplodeComponent"));
		return ptr;
	}

};


// Class ExplosionFramework.ExplosionReceiverInterface
// 0x0000 (0x0028 - 0x0028)
class UExplosionReceiverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ExplosionFramework.ExplosionReceiverInterface"));
		return ptr;
	}

};


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
// 0x0018 (0x0048 - 0x0030)
class UStatusResponseExplodeAfterTime : public UStatusResponse
{
public:
	float                                              MinTimeUntilExplosion;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeUntilExplosion;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UWorld*                                      CachedWorld;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

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
