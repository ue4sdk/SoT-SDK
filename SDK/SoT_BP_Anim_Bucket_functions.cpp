// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_Bucket_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_Bucket.BP_Anim_Bucket_C.ExecuteUbergraph_BP_Anim_Bucket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_Bucket_C::ExecuteUbergraph_BP_Anim_Bucket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Bucket.BP_Anim_Bucket_C.ExecuteUbergraph_BP_Anim_Bucket");

	UBP_Anim_Bucket_C_ExecuteUbergraph_BP_Anim_Bucket_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
