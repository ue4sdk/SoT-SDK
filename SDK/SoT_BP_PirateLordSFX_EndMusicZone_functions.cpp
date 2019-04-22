// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateLordSFX_EndMusicZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PirateLordSFX_EndMusicZone.BP_PirateLordSFX_EndMusicZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateLordSFX_EndMusicZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLordSFX_EndMusicZone.BP_PirateLordSFX_EndMusicZone_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLordSFX_EndMusicZone.BP_PirateLordSFX_EndMusicZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PirateLordSFX_EndMusicZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLordSFX_EndMusicZone.BP_PirateLordSFX_EndMusicZone_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLordSFX_EndMusicZone.BP_PirateLordSFX_EndMusicZone_C.ExecuteUbergraph_BP_PirateLordSFX_EndMusicZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateLordSFX_EndMusicZone_C::ExecuteUbergraph_BP_PirateLordSFX_EndMusicZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLordSFX_EndMusicZone.BP_PirateLordSFX_EndMusicZone_C.ExecuteUbergraph_BP_PirateLordSFX_EndMusicZone"));

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
