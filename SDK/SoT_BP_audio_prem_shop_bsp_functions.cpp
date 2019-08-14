// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_prem_shop_bsp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_audio_prem_shop_bsp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_audio_prem_shop_bsp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_audio_prem_shop_bsp_C::BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));

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


// Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.ExecuteUbergraph_BP_audio_prem_shop_bsp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_audio_prem_shop_bsp_C::ExecuteUbergraph_BP_audio_prem_shop_bsp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_audio_prem_shop_bsp.BP_audio_prem_shop_bsp_C.ExecuteUbergraph_BP_audio_prem_shop_bsp"));

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
