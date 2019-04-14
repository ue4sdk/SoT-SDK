// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TT_RitualBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TT_RitualBox.BP_TT_RitualBox_C.Set Replaced World OOS Magic Box Hidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Hidden                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_C::Set_Replaced_World_OOS_Magic_Box_Hidden(bool Is_Hidden)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox.BP_TT_RitualBox_C.Set Replaced World OOS Magic Box Hidden"));

	struct
	{
		bool                           Is_Hidden;
	} params;

	params.Is_Hidden = Is_Hidden;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox.BP_TT_RitualBox_C.Get World OOS Magic Box to Replace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ABP_shop_oos_01_a_C*     Magic_Box_to_Replace           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_C::Get_World_OOS_Magic_Box_to_Replace(class ABP_shop_oos_01_a_C** Magic_Box_to_Replace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox.BP_TT_RitualBox_C.Get World OOS Magic Box to Replace"));

	struct
	{
		class ABP_shop_oos_01_a_C*     Magic_Box_to_Replace;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Magic_Box_to_Replace != nullptr)
		*Magic_Box_to_Replace = params.Magic_Box_to_Replace;
}


// Function BP_TT_RitualBox.BP_TT_RitualBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TT_RitualBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox.BP_TT_RitualBox_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox.BP_TT_RitualBox_C.BndEvt__RehideSphere_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_TT_RitualBox_C::BndEvt__RehideSphere_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox.BP_TT_RitualBox_C.BndEvt__RehideSphere_K2Node_ComponentBoundEvent_9_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox.BP_TT_RitualBox_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TT_RitualBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox.BP_TT_RitualBox_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox.BP_TT_RitualBox_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox.BP_TT_RitualBox_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TT_RitualBox.BP_TT_RitualBox_C.ExecuteUbergraph_BP_TT_RitualBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TT_RitualBox_C::ExecuteUbergraph_BP_TT_RitualBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TT_RitualBox.BP_TT_RitualBox_C.ExecuteUbergraph_BP_TT_RitualBox"));

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
