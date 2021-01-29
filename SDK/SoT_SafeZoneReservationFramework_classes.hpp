#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SafeZoneReservationFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SafeZoneReservationFramework.SafeZoneComponent
// 0x0060 (0x05B0 - 0x0550)
class USafeZoneComponent : public UCapsuleComponent
{
public:
	struct FScriptMulticastDelegate                    OnSafeZoneIsEmptyDelegate;                                // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ExclusionRadius;                                          // 0x0560(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseForceToApplyToShipsInsideSafeZone;                 // 0x0564(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SafeZoneEmptyCollisionProfile;                            // 0x0568(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSafeZoneEmpty;                                          // 0x0570(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	struct FName                                       CurrentCollisionProfile;                                  // 0x0574(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x057C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SafeZoneReservationFramework.SafeZoneComponent"));
		return ptr;
	}


	void SafeZoneIsEmpty__DelegateSignature();
	void OnRep_UpdateCollisionProfile();
	void OnRep_EmptyStateChanged();
	void DeactivateCollider();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
