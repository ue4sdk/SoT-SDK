// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaObjectLinkage_classes.hpp"

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
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkEndpointIdUtilities::IsValid(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid");

	struct
	{
		struct FLinkEndpointId         Id;
		bool                           ReturnValue;
	} params;

	params.Id = Id;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkEndpointIdUtilities::IsPathed(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed");

	struct
	{
		struct FLinkEndpointId         Id;
		bool                           ReturnValue;
	} params;

	params.Id = Id;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  String                         (Parm, ZeroConstructor)
// struct FLinkEndpointId         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinkEndpointId ULinkEndpointIdUtilities::CreateEndpointId(const class FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId");

	struct
	{
		class FString                  String;
		struct FLinkEndpointId         ReturnValue;
	} params;

	params.String = String;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ULinkEndpointIdUtilities::Conv_LinkEndpointIdToString(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString");

	struct
	{
		struct FLinkEndpointId         Id;
		class FString                  ReturnValue;
	} params;

	params.Id = Id;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Root                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         path                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLinkEndpointId ULinkEndpointIdUtilities::CombineEndpointIds(const struct FLinkEndpointId& Root, const struct FLinkEndpointId& path)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds");

	struct
	{
		struct FLinkEndpointId         Root;
		struct FLinkEndpointId         path;
		struct FLinkEndpointId         ReturnValue;
	} params;

	params.Root = Root;
	params.path = path;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void ULinkEndpointInterface::ReceiveLink(const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink");

	struct
	{
		struct FLinkEndpointId         Id;
		class AActor*                  Instance;
	} params;

	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)

void ULinkEndpointInterface::LoseLink(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink");

	struct
	{
		struct FLinkEndpointId         Id;
	} params;

	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         SourceId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         TargetId                       (ConstParm, Parm, OutParm, ReferenceParm)

void ULinkerComponent::UnregisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.UnregisterLink");

	struct
	{
		struct FLinkEndpointId         SourceId;
		struct FLinkEndpointId         TargetId;
	} params;

	params.SourceId = SourceId;
	params.TargetId = TargetId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)

void ULinkerComponent::UnregisterEndpoint(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint");

	struct
	{
		struct FLinkEndpointId         Id;
	} params;

	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerComponent::SetParent(class AActor* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.SetParent");

	struct
	{
		class AActor*                  Parent;
	} params;

	params.Parent = Parent;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         SourceId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         TargetId                       (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<EAddLinkResult>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAddLinkResult> ULinkerComponent::RegisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.RegisterLink");

	struct
	{
		struct FLinkEndpointId         SourceId;
		struct FLinkEndpointId         TargetId;
		TEnumAsByte<EAddLinkResult>    ReturnValue;
	} params;

	params.SourceId = SourceId;
	params.TargetId = TargetId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAddEndpointResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EAddEndpointResult> ULinkerComponent::RegisterEndpoint(const struct FLinkEndpointId& Id, class AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint");

	struct
	{
		struct FLinkEndpointId         Id;
		class AActor*                  Source;
		TEnumAsByte<EAddEndpointResult> ReturnValue;
	} params;

	params.Id = Id;
	params.Source = Source;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)

void ULinkerComponent::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild");

	struct
	{
		class AActor*                  Child;
		struct FLinkEndpointId         Id;
	} params;

	params.Child = Child;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerComponent::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild");

	struct
	{
		class AActor*                  Child;
		struct FLinkEndpointId         Id;
		class AActor*                  Instance;
	} params;

	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULinkerComponent::LookupEndpoint(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint");

	struct
	{
		struct FLinkEndpointId         Id;
		class AActor*                  ReturnValue;
	} params;

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
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinkerComponent::GetNumRegisteredLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinkerComponent::GetNumRegisteredEndpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULinkerComponent::GetNumPendingLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.SetParent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerInterface::SetParent(class AActor* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.SetParent");

	struct
	{
		class AActor*                  Parent;
	} params;

	params.Parent = Parent;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         SourceId                       (Parm)
// struct FLinkEndpointId         TargetId                       (Parm)

void ULinkerInterface::RemoveLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.RemoveLink");

	struct
	{
		struct FLinkEndpointId         SourceId;
		struct FLinkEndpointId         TargetId;
	} params;

	params.SourceId = SourceId;
	params.TargetId = TargetId;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)

void ULinkerInterface::RemoveEndpoint(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint");

	struct
	{
		struct FLinkEndpointId         Id;
	} params;

	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinkEndpointId         Id                             (Parm)

void ULinkerInterface::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild");

	struct
	{
		class AActor*                  Child;
		struct FLinkEndpointId         Id;
	} params;

	params.Child = Child;
	params.Id = Id;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData)

void ULinkerInterface::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild");

	struct
	{
		class AActor*                  Child;
		struct FLinkEndpointId         Id;
		class AActor*                  Instance;
	} params;

	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ULinkerInterface::LookupEndpoint(const struct FLinkEndpointId& Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint");

	struct
	{
		struct FLinkEndpointId         Id;
		class AActor*                  ReturnValue;
	} params;

	params.Id = Id;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         SourceId                       (Parm)
// struct FLinkEndpointId         TargetId                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkerInterface::AddLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.AddLink");

	struct
	{
		struct FLinkEndpointId         SourceId;
		struct FLinkEndpointId         TargetId;
		bool                           ReturnValue;
	} params;

	params.SourceId = SourceId;
	params.TargetId = TargetId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULinkerInterface::AddEndpoint(const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.AddEndpoint");

	struct
	{
		struct FLinkEndpointId         Id;
		class AActor*                  Instance;
		bool                           ReturnValue;
	} params;

	params.Id = Id;
	params.Instance = Instance;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
