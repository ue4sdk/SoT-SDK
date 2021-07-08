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
// 0x0130 (0x06D0 - 0x05A0)
class USafeZoneComponent : public UCapsuleComponent
{
public:
	struct FScriptMulticastDelegate                    OnSafeZoneIsEmptyDelegate;                                // 0x05A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ExclusionRadius;                                          // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	struct FName                                       SafeZoneEmptyCollisionProfile;                            // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoActivateSafeZone;                                     // 0x05C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeactivateSafeZoneAfterExclusionRadiusIsEmpty;            // 0x05C1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePlayerTeleport;                                        // 0x05C2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05C3(0x0001) MISSED OFFSET
	float                                              PlayerTeleportRadius;                                     // 0x05C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05C8(0x0004) MISSED OFFSET
	bool                                               UseRepelForce;                                            // 0x05CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05CD(0x0003) MISSED OFFSET
	float                                              RepelForceRadius;                                         // 0x05D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	float                                              RepelForceExtents;                                        // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMin;                                            // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMax;                                            // 0x05E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyRepelForceAtCentreOfMass;                            // 0x05E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          RepelForceGradientCurve;                                  // 0x05E8(0x0080) (Edit, DisableEditOnInstance)
	bool                                               UseAngularImpulse;                                        // 0x0668(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0669(0x0003) MISSED OFFSET
	float                                              AngularImpulseRadius;                                     // 0x066C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0670(0x0004) MISSED OFFSET
	float                                              AngularImpulseForce;                                      // 0x0674(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDeflectionAngle;                                    // 0x0678(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSafeZoneEmpty;                                          // 0x067C(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x067D(0x0003) MISSED OFFSET
	struct FName                                       CurrentCollisionProfile;                                  // 0x0680(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESafeZoneState>                        SafeZoneState;                                            // 0x0688(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x47];                                      // 0x0689(0x0047) MISSED OFFSET

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
