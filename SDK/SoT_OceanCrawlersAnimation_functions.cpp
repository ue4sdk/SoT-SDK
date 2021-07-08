// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OceanCrawlersAnimation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack
// (Final, Native, Public, BlueprintCallable)

void UOceanCrawlerAnimationInstance::ClearActiveAttack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack
// (Final, Native, Public, BlueprintCallable)

void UOceanCrawlerAnimationInstance::BeginNewAttack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
