// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CursedRogue_CollectorsChestItemGenerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CursedRogue_CollectorsChestItemGenerator.BP_CursedRogue_CollectorsChestItemGenerator_C.ForIndex
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_CollectorsChestItemGenerator_C::ForIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_CollectorsChestItemGenerator.BP_CursedRogue_CollectorsChestItemGenerator_C.ForIndex"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CursedRogue_CollectorsChestItemGenerator.BP_CursedRogue_CollectorsChestItemGenerator_C.ExecuteUbergraph_BP_CursedRogue_CollectorsChestItemGenerator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_CursedRogue_CollectorsChestItemGenerator_C::ExecuteUbergraph_BP_CursedRogue_CollectorsChestItemGenerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CursedRogue_CollectorsChestItemGenerator.BP_CursedRogue_CollectorsChestItemGenerator_C.ExecuteUbergraph_BP_CursedRogue_CollectorsChestItemGenerator"));

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
