// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GlitterBeard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// struct FFinaleReplicationState OldState                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGlitterBeardFinaleCoordinatorComponent::OnRep_ReplicationState(const struct FFinaleReplicationState& OldState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState"));

	struct
	{
		struct FFinaleReplicationState OldState;
	} params;

	params.OldState = OldState;

	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTree.StopVocals
// (Final, Native, Public, BlueprintCallable)

void AGlitterBeardTree::StopVocals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StopVocals"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTree.StopReaction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGlitterBeardTree::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StopReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GlitterBeard.GlitterBeardTree.StartVocals
// (Final, Native, Public, BlueprintCallable)

void AGlitterBeardTree::StartVocals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StartVocals"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTree.StartReaction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGlitterBeardTree::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StartReaction"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GlitterBeard.GlitterBeardTree.Reset_Impl
// (Event, Protected, BlueprintEvent)

void AGlitterBeardTree::Reset_Impl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.Reset_Impl"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// TArray<TEnumAsByte<EGlitterbeardVFXState>> OldStates                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGlitterBeardTreeVisualFeedbackComponent::OnRep_NextStateEvent(TArray<TEnumAsByte<EGlitterbeardVFXState>> OldStates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent"));

	struct
	{
		TArray<TEnumAsByte<EGlitterbeardVFXState>> OldStates;
	} params;

	params.OldStates = OldStates;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
