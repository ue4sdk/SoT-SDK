// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_BecalmedEndMusicZone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BecalmedEndMusicZone.BP_BecalmedEndMusicZone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BecalmedEndMusicZone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BecalmedEndMusicZone.BP_BecalmedEndMusicZone_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BecalmedEndMusicZone.BP_BecalmedEndMusicZone_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_BecalmedEndMusicZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BecalmedEndMusicZone.BP_BecalmedEndMusicZone_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BecalmedEndMusicZone.BP_BecalmedEndMusicZone_C.ExecuteUbergraph_BP_BecalmedEndMusicZone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BecalmedEndMusicZone_C::ExecuteUbergraph_BP_BecalmedEndMusicZone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_BecalmedEndMusicZone.BP_BecalmedEndMusicZone_C.ExecuteUbergraph_BP_BecalmedEndMusicZone"));

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
