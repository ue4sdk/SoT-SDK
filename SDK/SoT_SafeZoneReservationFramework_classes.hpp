#pragma once

// Sea of Thieves (2) SDK

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
// 0x0140 (0x06F0 - 0x05B0)
class USafeZoneComponent : public UCapsuleComponent
{
public:
	FScriptMulticastDelegate                           OnSafeZoneIsEmptyDelegate;                                // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ExclusionRadius;                                          // 0x05C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	float                                              ExclusionHeight;                                          // 0x05C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	FName                                              SafeZoneEmptyCollisionProfile;                            // 0x05CC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoActivateSafeZone;                                     // 0x05D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeactivateSafeZoneAfterExclusionRadiusIsEmpty;            // 0x05D5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePlayerTeleport;                                        // 0x05D6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05D7(0x0001) MISSED OFFSET
	float                                              PlayerTeleportRadius;                                     // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	bool                                               UseRepelForce;                                            // 0x05E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	float                                              RepelForceRadius;                                         // 0x05E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05E8(0x0004) MISSED OFFSET
	float                                              RepelForceExtents;                                        // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMin;                                            // 0x05F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMax;                                            // 0x05F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyRepelForceAtCentreOfMass;                            // 0x05F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	FRuntimeFloatCurve                                 RepelForceGradientCurve;                                  // 0x0600(0x0080) (Edit, DisableEditOnInstance)
	bool                                               UseAngularImpulse;                                        // 0x0680(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0681(0x0003) MISSED OFFSET
	float                                              AngularImpulseRadius;                                     // 0x0684(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0688(0x0004) MISSED OFFSET
	float                                              AngularImpulseForce;                                      // 0x068C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDeflectionAngle;                                    // 0x0690(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSafeZoneEmpty;                                          // 0x0694(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               StopAISpawning;                                           // 0x0695(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0696(0x0002) MISSED OFFSET
	FName                                              CurrentCollisionProfile;                                  // 0x0698(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESafeZoneState>                        SafeZoneState;                                            // 0x06A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4F];                                      // 0x06A1(0x004F) MISSED OFFSET

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
