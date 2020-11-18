// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Cutscene_PirateLord_CollectorsChest_Anim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Cutscene_PirateLord_CollectorsChest_Anim.BP_Cutscene_PirateLord_CollectorsChest_Anim_C.ExecuteUbergraph_BP_Cutscene_PirateLord_CollectorsChest_Anim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Cutscene_PirateLord_CollectorsChest_Anim_C::ExecuteUbergraph_BP_Cutscene_PirateLord_CollectorsChest_Anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Cutscene_PirateLord_CollectorsChest_Anim.BP_Cutscene_PirateLord_CollectorsChest_Anim_C.ExecuteUbergraph_BP_Cutscene_PirateLord_CollectorsChest_Anim"));

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
