// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SafeZoneReservationFramework_parameters.hpp"

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

	USafeZoneComponent_SafeZoneIsEmpty__DelegateSignature_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile
// (Final, Native, Private)

void USafeZoneComponent::OnRep_UpdateCollisionProfile()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_UpdateCollisionProfile"));

	USafeZoneComponent_OnRep_UpdateCollisionProfile_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged
// (Final, Native, Private)

void USafeZoneComponent::OnRep_EmptyStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.OnRep_EmptyStateChanged"));

	USafeZoneComponent_OnRep_EmptyStateChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void USafeZoneComponent::DeactivateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateSafeZone"));

	USafeZoneComponent_DeactivateSafeZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void USafeZoneComponent::DeactivateCollider()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.DeactivateCollider"));

	USafeZoneComponent_DeactivateCollider_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void USafeZoneComponent::ActivateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SafeZoneReservationFramework.SafeZoneComponent.ActivateSafeZone"));

	USafeZoneComponent_ActivateSafeZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
