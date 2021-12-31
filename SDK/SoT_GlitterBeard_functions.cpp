// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GlitterBeard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// FFinaleReplicationState        OldState                       (ConstParm, Parm, OutParm, ReferenceParm)

void UGlitterBeardFinaleCoordinatorComponent::OnRep_ReplicationState(const FFinaleReplicationState& OldState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardFinaleCoordinatorComponent.OnRep_ReplicationState"));

	UGlitterBeardFinaleCoordinatorComponent_OnRep_ReplicationState_Params params;
	params.OldState = OldState;

	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTree.StopVocals
// (Final, Native, Public, BlueprintCallable)

void AGlitterBeardTree::StopVocals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StopVocals"));

	AGlitterBeardTree_StopVocals_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTree.StopReaction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGlitterBeardTree::StopReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StopReaction"));

	AGlitterBeardTree_StopReaction_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GlitterBeard.GlitterBeardTree.StartVocals
// (Final, Native, Public, BlueprintCallable)

void AGlitterBeardTree::StartVocals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StartVocals"));

	AGlitterBeardTree_StartVocals_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTree.StartReaction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGlitterBeardTree::StartReaction()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.StartReaction"));

	AGlitterBeardTree_StartReaction_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GlitterBeard.GlitterBeardTree.Reset_Impl
// (Event, Protected, BlueprintEvent)

void AGlitterBeardTree::Reset_Impl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTree.Reset_Impl"));

	AGlitterBeardTree_Reset_Impl_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent
// (Final, RequiredAPI, Native, Private, HasOutParms)
// Parameters:
// TArray<TEnumAsByte<EGlitterbeardVFXState>> OldStates                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGlitterBeardTreeVisualFeedbackComponent::OnRep_NextStateEvent(TArray<TEnumAsByte<EGlitterbeardVFXState>> OldStates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function GlitterBeard.GlitterBeardTreeVisualFeedbackComponent.OnRep_NextStateEvent"));

	UGlitterBeardTreeVisualFeedbackComponent_OnRep_NextStateEvent_Params params;
	params.OldStates = OldStates;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
