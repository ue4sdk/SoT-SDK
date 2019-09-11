// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WildRose_SpawnLoreBooks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WildRose_SpawnLoreBooks.BP_WildRose_SpawnLoreBooks_C.OnBeginCustom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDS_Lorebooks>   Lorebooks                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_WildRose_SpawnLoreBooks_C::OnBeginCustom(TArray<struct FDS_Lorebooks>* Lorebooks)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_WildRose_SpawnLoreBooks.BP_WildRose_SpawnLoreBooks_C.OnBeginCustom"));

	struct
	{
		TArray<struct FDS_Lorebooks>   Lorebooks;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Lorebooks != nullptr)
		*Lorebooks = params.Lorebooks;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
