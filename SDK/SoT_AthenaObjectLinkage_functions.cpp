// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaObjectLinkage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UEndPlayHandler::OnEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay"));

	UEndPlayHandler_OnEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkEndpointIdUtilities::IsValid(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid"));

	ULinkEndpointIdUtilities_IsValid_Params params;
	params.Id = Id;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkEndpointIdUtilities::IsPathed(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed"));

	ULinkEndpointIdUtilities_IsPathed_Params params;
	params.Id = Id;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FString                        String                         (Parm, ZeroConstructor)
// FLinkEndpointId                ReturnValue                    (Parm, OutParm, ReturnParm)

FLinkEndpointId ULinkEndpointIdUtilities::CreateEndpointId(const FString& String)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId"));

	ULinkEndpointIdUtilities_CreateEndpointId_Params params;
	params.String = String;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// FString                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

FString ULinkEndpointIdUtilities::Conv_LinkEndpointIdToString(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString"));

	ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params params;
	params.Id = Id;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// FLinkEndpointId                Root                           (ConstParm, Parm, OutParm, ReferenceParm)
// FLinkEndpointId                path                           (ConstParm, Parm, OutParm, ReferenceParm)
// FLinkEndpointId                ReturnValue                    (Parm, OutParm, ReturnParm)

FLinkEndpointId ULinkEndpointIdUtilities::CombineEndpointIds(const FLinkEndpointId& Root, const FLinkEndpointId& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds"));

	ULinkEndpointIdUtilities_CombineEndpointIds_Params params;
	params.Root = Root;
	params.path = path;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FLinkEndpointId                Id                             (Parm)
// AActor*                        Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void ULinkEndpointInterface::ReceiveLink(const FLinkEndpointId& Id, AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink"));

	ULinkEndpointInterface_ReceiveLink_Params params;
	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FLinkEndpointId                Id                             (Parm)

void ULinkEndpointInterface::LoseLink(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink"));

	ULinkEndpointInterface_LoseLink_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLinkEndpointId                SourceId                       (ConstParm, Parm, OutParm, ReferenceParm)
// FLinkEndpointId                TargetID                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULinkerComponent::UnregisterLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.UnregisterLink"));

	ULinkerComponent_UnregisterLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)

void ULinkerComponent::UnregisterEndpoint(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint"));

	ULinkerComponent_UnregisterEndpoint_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// AActor*                        Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerComponent::SetParent(AActor* Parent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.SetParent"));

	ULinkerComponent_SetParent_Params params;
	params.Parent = Parent;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLinkEndpointId                SourceId                       (ConstParm, Parm, OutParm, ReferenceParm)
// FLinkEndpointId                TargetID                       (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EAddLinkResult>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAddLinkResult> ULinkerComponent::RegisterLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.RegisterLink"));

	ULinkerComponent_RegisterLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// AActor*                        Source                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAddEndpointResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAddEndpointResult> ULinkerComponent::RegisterEndpoint(const FLinkEndpointId& Id, AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint"));

	ULinkerComponent_RegisterEndpoint_Params params;
	params.Id = Id;
	params.Source = Source;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        Child                          (Parm, ZeroConstructor, IsPlainOldData)
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)

void ULinkerComponent::OnEndpointRemovedFromChild(AActor* Child, const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild"));

	ULinkerComponent_OnEndpointRemovedFromChild_Params params;
	params.Child = Child;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// AActor*                        Child                          (Parm, ZeroConstructor, IsPlainOldData)
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// AActor*                        Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerComponent::OnEndpointAddedToChild(AActor* Child, const FLinkEndpointId& Id, AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild"));

	ULinkerComponent_OnEndpointAddedToChild_Params params;
	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// FLinkEndpointId                Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* ULinkerComponent::LookupEndpoint(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint"));

	ULinkerComponent_LookupEndpoint_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinkerComponent::GetNumSetLinks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks"));

	ULinkerComponent_GetNumSetLinks_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinkerComponent::GetNumRegisteredLinks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks"));

	ULinkerComponent_GetNumRegisteredLinks_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinkerComponent::GetNumRegisteredEndpoints()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints"));

	ULinkerComponent_GetNumRegisteredEndpoints_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinkerComponent::GetNumPendingLinks()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks"));

	ULinkerComponent_GetNumPendingLinks_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.SetParent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerInterface::SetParent(AActor* Parent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.SetParent"));

	ULinkerInterface_SetParent_Params params;
	params.Parent = Parent;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FLinkEndpointId                SourceId                       (Parm)
// FLinkEndpointId                TargetID                       (Parm)

void ULinkerInterface::RemoveLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.RemoveLink"));

	ULinkerInterface_RemoveLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FLinkEndpointId                Id                             (Parm)

void ULinkerInterface::RemoveEndpoint(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint"));

	ULinkerInterface_RemoveEndpoint_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        Child                          (Parm, ZeroConstructor, IsPlainOldData)
// FLinkEndpointId                Id                             (Parm)

void ULinkerInterface::OnEndpointRemovedFromChild(AActor* Child, const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild"));

	ULinkerInterface_OnEndpointRemovedFromChild_Params params;
	params.Child = Child;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// AActor*                        Child                          (Parm, ZeroConstructor, IsPlainOldData)
// FLinkEndpointId                Id                             (Parm)
// AActor*                        Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerInterface::OnEndpointAddedToChild(AActor* Child, const FLinkEndpointId& Id, AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild"));

	ULinkerInterface_OnEndpointAddedToChild_Params params;
	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FLinkEndpointId                Id                             (Parm)
// AActor*                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

AActor* ULinkerInterface::LookupEndpoint(const FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint"));

	ULinkerInterface_LookupEndpoint_Params params;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FLinkEndpointId                SourceId                       (Parm)
// FLinkEndpointId                TargetID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkerInterface::AddLink(const FLinkEndpointId& SourceId, const FLinkEndpointId& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.AddLink"));

	ULinkerInterface_AddLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FLinkEndpointId                Id                             (Parm)
// AActor*                        Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkerInterface::AddEndpoint(const FLinkEndpointId& Id, AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaObjectLinkage.LinkerInterface.AddEndpoint"));

	ULinkerInterface_AddEndpoint_Params params;
	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
