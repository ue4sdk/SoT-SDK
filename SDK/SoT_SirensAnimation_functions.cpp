// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SirensAnimation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack
// (Final, Native, Public, BlueprintCallable)

void USirenAnimationInstance::ClearActiveAttack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function SirensAnimation.SirenAnimationInstance.BeginNewAttack
// (Final, Native, Public, BlueprintCallable)

void USirenAnimationInstance::BeginNewAttack()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function SirensAnimation.SirenAnimationInstance.BeginNewAttack"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
