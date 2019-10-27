// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnServer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
// (Final, Native, Private)
// Parameters:
// bool                           OldIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UTutorial2019Component::OnRep_IsEnabledByServer(bool OldIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer"));

	struct
	{
		bool                           OldIsEnabled;
	} params;

	params.OldIsEnabled = OldIsEnabled;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
// (Event, Public, BlueprintEvent)

void UTutorial2019Component::ForceDisableComponent_Blueprint()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
