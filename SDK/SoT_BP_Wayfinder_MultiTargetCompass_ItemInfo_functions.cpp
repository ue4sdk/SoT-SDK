// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Wayfinder_MultiTargetCompass_ItemInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C.OnRep_NewVar_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Wayfinder_MultiTargetCompass_ItemInfo_C::OnRep_NewVar_1()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C.OnRep_NewVar_1"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Wayfinder_MultiTargetCompass_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C.ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_ItemInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Wayfinder_MultiTargetCompass_ItemInfo_C::ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_ItemInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Wayfinder_MultiTargetCompass_ItemInfo.BP_Wayfinder_MultiTargetCompass_ItemInfo_C.ExecuteUbergraph_BP_Wayfinder_MultiTargetCompass_ItemInfo"));

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
