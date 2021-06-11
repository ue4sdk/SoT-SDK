// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_OnlineSubsystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                  Match                          (Parm, ZeroConstructor)
// bool                           bDidBecomeActive               (Parm, ZeroConstructor, IsPlainOldData)

void UTurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn"));

	struct
	{
		class FString                  Match;
		bool                           bDidBecomeActive;
	} params;

	params.Match = Match;
	params.bDidBecomeActive = bDidBecomeActive;

	UObject::ProcessEvent(fn, &params);
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                  Match                          (Parm, ZeroConstructor)

void UTurnBasedMatchInterface::OnMatchEnded(const class FString& Match)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded"));

	struct
	{
		class FString                  Match;
	} params;

	params.Match = Match;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
