#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Damagers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Damagers.RadialDamagerComponent
// 0x0058 (0x0120 - 0x00C8)
class URadialDamagerComponent : public UActorComponent
{
public:
	float                                              DamageIntervalSeconds;                                    // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerSecondAtCentre;                                  // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerSecondAtMaxRadius;                               // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	class UClass*                                      DamagerType;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  HealthChangedReason;                                      // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	struct FVector                                     LocalOffset;                                              // 0x00EC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00F8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Damagers.RadialDamagerComponent"));
		return ptr;
	}


	void SetDamageRadius(float Radius);
	void EndDamage();
	void BeginDamage();
};


// Class Damagers.ShipDamagerComponent
// 0x0158 (0x0220 - 0x00C8)
class UShipDamagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         Shape;                                                    // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TScriptInterface<class UHullDamageInterface>> ShipHulls;                                                // 0x00D8(0x0010) (ZeroConstructor, Transient)
	TArray<TScriptInterface<class UHealthInterface>>   WatercraftHealthInterfaces;                               // 0x00E8(0x0010) (ZeroConstructor, Transient)
	struct FStrainDamage                               ShipStrainDamage;                                         // 0x00F8(0x0028) (Edit)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenWatercraftDamage;                              // 0x0120(0x0030) (Edit)
	float                                              WatercraftDamage;                                         // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StartDamagingOnBeginPlay;                                 // 0x0154(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xCB];                                      // 0x0155(0x00CB) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Damagers.ShipDamagerComponent"));
		return ptr;
	}


	void SetShape(class UPrimitiveComponent* InShape);
	void EndDamage();
	void BeginDamage();
};


// Class Damagers.ShockwaveDamagerInterface
// 0x0000 (0x0028 - 0x0028)
class UShockwaveDamagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Damagers.ShockwaveDamagerInterface"));
		return ptr;
	}


	void StartShockwaveAtLocation(const struct FVector& StartLocation);
	void StartShockwave();
	void IgnoreGhostShip(class AAggressiveGhostShip* Ship);
	float GetShockwaveRadius();
	float GetShockwaveDuration();
};


// Class Damagers.ShockwaveDamagerComponent
// 0x0108 (0x01D0 - 0x00C8)
class UShockwaveDamagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	float                                              ExpansionDuration;                                        // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndRadiusInMetres;                                        // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyImpulseToShips;                                      // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           ForceToApplyToShip;                                       // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	bool                                               ApplyDamageToShips;                                       // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	TArray<struct FShockwaveDamagerShipDamage>         ShipDamageLevels;                                         // 0x0118(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DamagerType;                                              // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyImpulseToGhostShips;                                 // 0x0130(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              GhostShipImpulseDuration;                                 // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GhostShipImpulseMaxDeflectionAngle;                       // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroyHostileGhostShips;                                 // 0x013C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              NearbyEncounterDistanceInMetres;                          // 0x0140(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnShockwaveStarted;                                       // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShockwaveEnded;                                         // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<TWeakObjectPtr<class AShip>>                ProcessedShips;                                           // 0x0168(0x0010) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class AAggressiveGhostShip>> ProcessedGhostShips;                                      // 0x0178(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x48];                                      // 0x0188(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Damagers.ShockwaveDamagerComponent"));
		return ptr;
	}


	void Multi_StartShockwave(const struct FVector& InStartLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
