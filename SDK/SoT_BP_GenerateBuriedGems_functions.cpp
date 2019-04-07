// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GenerateBuriedGems_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GenerateBuriedGems.BP_GenerateBuriedGems_C.GetIslandFromActorRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class AActor>        Actor                          (Parm)
// struct FName                   IslandName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_GenerateBuriedGems_C::GetIslandFromActorRef(TAssetPtr<class AActor> Actor, struct FName* IslandName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedGems.BP_GenerateBuriedGems_C.GetIslandFromActorRef"));

	struct
	{
		TAssetPtr<class AActor>        Actor;
		struct FName                   IslandName;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (IslandName != nullptr)
		*IslandName = params.IslandName;
}


// Function BP_GenerateBuriedGems.BP_GenerateBuriedGems_C.ForIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_GenerateBuriedGems_C::ForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedGems.BP_GenerateBuriedGems_C.ForIndex"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GenerateBuriedGems.BP_GenerateBuriedGems_C.ExecuteUbergraph_BP_GenerateBuriedGems
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_GenerateBuriedGems_C::ExecuteUbergraph_BP_GenerateBuriedGems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_GenerateBuriedGems.BP_GenerateBuriedGems_C.ExecuteUbergraph_BP_GenerateBuriedGems"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
