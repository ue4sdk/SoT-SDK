#pragma once

// Sea of Thieves (2.1) SDK

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
// 0x0110 (0x0690 - 0x0580)
class USafeZoneComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0580(0x0008) MISSED OFFSET
	float                                              ExclusionRadius;                                          // 0x0588(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	struct FName                                       SafeZoneEmptyCollisionProfile;                            // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoActivateSafeZone;                                     // 0x0598(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeactivateSafeZoneAfterExclusionRadiusIsEmpty;            // 0x0599(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePlayerTeleport;                                        // 0x059A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x059B(0x0001) MISSED OFFSET
	float                                              PlayerTeleportRadius;                                     // 0x059C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05A0(0x0004) MISSED OFFSET
	bool                                               UseRepelForce;                                            // 0x05A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	float                                              RepelForceRadius;                                         // 0x05A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	float                                              RepelForceExtents;                                        // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMin;                                            // 0x05B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMax;                                            // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyRepelForceAtCentreOfMass;                            // 0x05BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05BD(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          RepelForceGradientCurve;                                  // 0x05C0(0x0080) (Edit, DisableEditOnInstance)
	bool                                               UseAngularImpulse;                                        // 0x0640(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0641(0x0003) MISSED OFFSET
	float                                              AngularImpulseRadius;                                     // 0x0644(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0648(0x0004) MISSED OFFSET
	float                                              AngularImpulseForce;                                      // 0x064C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDeflectionAngle;                                    // 0x0650(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSafeZoneEmpty;                                          // 0x0654(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0655(0x0003) MISSED OFFSET
	struct FName                                       CurrentCollisionProfile;                                  // 0x0658(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x30];                                      // 0x0660(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SafeZoneReservationFramework.SafeZoneComponent"));
		return ptr;
	}


	void SafeZoneIsEmpty__DelegateSignature();
	void OnRep_UpdateCollisionProfile();
	void OnRep_EmptyStateChanged();
	void DeactivateSafeZone();
	void DeactivateCollider();
	void ActivateSafeZone();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
