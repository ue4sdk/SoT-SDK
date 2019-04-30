// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interface_Bomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_Bomb.Interface_Bomb_C.Interface Trigger
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Bomb_C::Interface_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interface_Bomb.Interface_Bomb_C.Interface Trigger"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Interface_Bomb.Interface_Bomb_C.Set Bomb Parameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Bomb_C::Set_Bomb_Parameters(float Radius, int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interface_Bomb.Interface_Bomb_C.Set Bomb Parameters"));

	struct
	{
		float                          Radius;
		int                            Seed;
	} params;

	params.Radius = Radius;
	params.Seed = Seed;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
