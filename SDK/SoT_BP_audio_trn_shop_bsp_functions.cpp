// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_trn_shop_bsp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_audio_trn_shop_bsp.BP_audio_trn_shop_bsp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_audio_trn_shop_bsp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_trn_shop_bsp.BP_audio_trn_shop_bsp_C.UserConstructionScript");

	ABP_audio_trn_shop_bsp_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_audio_trn_shop_bsp.BP_audio_trn_shop_bsp_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_audio_trn_shop_bsp_C::BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_trn_shop_bsp.BP_audio_trn_shop_bsp_C.BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_audio_trn_shop_bsp_C_BndEvt__AudioSpace_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_audio_trn_shop_bsp.BP_audio_trn_shop_bsp_C.ExecuteUbergraph_BP_audio_trn_shop_bsp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_audio_trn_shop_bsp_C::ExecuteUbergraph_BP_audio_trn_shop_bsp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_audio_trn_shop_bsp.BP_audio_trn_shop_bsp_C.ExecuteUbergraph_BP_audio_trn_shop_bsp");

	ABP_audio_trn_shop_bsp_C_ExecuteUbergraph_BP_audio_trn_shop_bsp_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
