// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_tls_bucket_smp_01_a_ItemInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_tls_bucket_smp_01_a_ItemInfo.BP_tls_bucket_smp_01_a_ItemInfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_tls_bucket_smp_01_a_ItemInfo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_tls_bucket_smp_01_a_ItemInfo.BP_tls_bucket_smp_01_a_ItemInfo_C.UserConstructionScript"));

	ABP_tls_bucket_smp_01_a_ItemInfo_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
