// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WoodPlank_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WoodPlank.BP_WoodPlank_C.GetRepairType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ABP_WoodPlank_C::GetRepairType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodPlank.BP_WoodPlank_C.GetRepairType");

	struct
	{
		class UClass*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_WoodPlank.BP_WoodPlank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WoodPlank_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodPlank.BP_WoodPlank_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WoodPlank.BP_WoodPlank_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_WoodPlank_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodPlank.BP_WoodPlank_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_WoodPlank.BP_WoodPlank_C.ExecuteUbergraph_BP_WoodPlank
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WoodPlank_C::ExecuteUbergraph_BP_WoodPlank(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WoodPlank.BP_WoodPlank_C.ExecuteUbergraph_BP_WoodPlank");

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
