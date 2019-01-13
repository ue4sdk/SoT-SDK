// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Entry.Entry_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AEntry_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Entry.Entry_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Entry.Entry_C.ExecuteUbergraph_Entry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEntry_C::ExecuteUbergraph_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Entry.Entry_C.ExecuteUbergraph_Entry");

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
