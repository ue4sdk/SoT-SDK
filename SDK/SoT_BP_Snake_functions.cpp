// Sea of Thieves (2.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Snake_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Snake.BP_Snake_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Snake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Snake.BP_Snake_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Snake.BP_Snake_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Snake_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Snake.BP_Snake_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Snake.BP_Snake_C.OnAgitatedDirected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  Crate                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Snake_C::OnAgitatedDirected(const struct FVector& SourceLocation, const struct FVector& Direction, class AActor* Crate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Snake.BP_Snake_C.OnAgitatedDirected"));

	struct
	{
		struct FVector                 SourceLocation;
		struct FVector                 Direction;
		class AActor*                  Crate;
	} params;

	params.SourceLocation = SourceLocation;
	params.Direction = Direction;
	params.Crate = Crate;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Snake.BP_Snake_C.ExecuteUbergraph_BP_Snake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Snake_C::ExecuteUbergraph_BP_Snake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Snake.BP_Snake_C.ExecuteUbergraph_BP_Snake"));

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
