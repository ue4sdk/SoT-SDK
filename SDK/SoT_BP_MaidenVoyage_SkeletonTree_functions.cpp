// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_SkeletonTree_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_SkeletonTree_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_MaidenVoyage_SkeletonTree_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ExecuteDockableCutsceneAction
// (Event, Public, BlueprintEvent)

void ABP_MaidenVoyage_SkeletonTree_C::ExecuteDockableCutsceneAction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ExecuteDockableCutsceneAction"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ActivateMesh
// (Event, Public, BlueprintEvent)

void ABP_MaidenVoyage_SkeletonTree_C::ActivateMesh()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ActivateMesh"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_SkeletonTree_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.OnApplyDamage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FImpactDamageEvent      ImpactDamageEvent              (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_MaidenVoyage_SkeletonTree_C::OnApplyDamage(const struct FImpactDamageEvent& ImpactDamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.OnApplyDamage"));

	struct
	{
		struct FImpactDamageEvent      ImpactDamageEvent;
	} params;

	params.ImpactDamageEvent = ImpactDamageEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.PickAnimationBasedOnGender
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFirstPersonAnimationInstance* FirstPersonAnimInstance        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_SkeletonTree_C::PickAnimationBasedOnGender(class UFirstPersonAnimationInstance* FirstPersonAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.PickAnimationBasedOnGender"));

	struct
	{
		class UFirstPersonAnimationInstance* FirstPersonAnimInstance;
	} params;

	params.FirstPersonAnimInstance = FirstPersonAnimInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ActivateGlintOnObject
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_SkeletonTree_C::ActivateGlintOnObject()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ActivateGlintOnObject"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.Activate Glint
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_SkeletonTree_C::Activate_Glint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.Activate Glint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_SkeletonTree_C::ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.BroadcastDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_SkeletonTree_C::BroadcastDamage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_SkeletonTree.BP_MaidenVoyage_SkeletonTree_C.BroadcastDamage__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
