// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tales.TaleQuestMerchantContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTaleQuestMerchantContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.GetContract"));

	struct
	{
		struct FGuid                   Guid;
		class UTaleQuestMerchantContract* ReturnValue;
	} params;

	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.AddContract
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FTaleQuestDeliveryRequest> Requests                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   InDeliveryDestination          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeLimit                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestMerchantContractsService::AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.AddContract"));

	struct
	{
		TArray<struct FTaleQuestDeliveryRequest> Requests;
		struct FName                   InDeliveryDestination;
		float                          InTimeLimit;
		struct FGuid                   ReturnValue;
	} params;

	params.Requests = Requests;
	params.InDeliveryDestination = InDeliveryDestination;
	params.InTimeLimit = InTimeLimit;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMapService.UpdateMerchantMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTaleQuestDeliverableItem Deliverable                    (Parm)

void UTaleQuestMapService::UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.UpdateMerchantMap"));

	struct
	{
		struct FName                   MapId;
		int                            Index;
		struct FTaleQuestDeliverableItem Deliverable;
	} params;

	params.MapId = MapId;
	params.Index = Index;
	params.Deliverable = Deliverable;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestMapService.AdvanceRiddleMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestMapService::AdvanceRiddleMap(const struct FName& MapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.AdvanceRiddleMap"));

	struct
	{
		struct FName                   MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
