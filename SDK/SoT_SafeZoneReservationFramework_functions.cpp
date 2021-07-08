// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SafeZoneReservationFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void USafeZoneComponent::SafeZoneIsEmpty__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction SafeZoneReservationFramework.SafeZoneComponent.SafeZoneIsEmpty__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile
// (Final, Native, Private)

void USafeZoneComponent::OnRep_UpdateCollisionProfile()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged
// (Final, Native, Private)

void USafeZoneComponent::OnRep_EmptyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void USafeZoneComponent::DeactivateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void USafeZoneComponent::DeactivateCollider()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void USafeZoneComponent::ActivateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
