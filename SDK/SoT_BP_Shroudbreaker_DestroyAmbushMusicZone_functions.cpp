// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shroudbreaker_DestroyAmbushMusicZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Shroudbreaker_DestroyAmbushMusicZone.BP_Shroudbreaker_DestroyAmbushMusicZone_C.OnBegin
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_DestroyAmbushMusicZone_C::OnBegin(TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_DestroyAmbushMusicZone.BP_Shroudbreaker_DestroyAmbushMusicZone_C.OnBegin"));

	struct
	{
		TEnumAsByte<ETaleQuestStepBeginMode> InBeginMode;
	} params;

	params.InBeginMode = InBeginMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Shroudbreaker_DestroyAmbushMusicZone.BP_Shroudbreaker_DestroyAmbushMusicZone_C.ExecuteUbergraph_BP_Shroudbreaker_DestroyAmbushMusicZone
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Shroudbreaker_DestroyAmbushMusicZone_C::ExecuteUbergraph_BP_Shroudbreaker_DestroyAmbushMusicZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Shroudbreaker_DestroyAmbushMusicZone.BP_Shroudbreaker_DestroyAmbushMusicZone_C.ExecuteUbergraph_BP_Shroudbreaker_DestroyAmbushMusicZone"));

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
