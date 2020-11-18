// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MaidenVoyage_IslandInnerBoundary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MaidenVoyage_IslandInnerBoundary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_MaidenVoyage_IslandInnerBoundary_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.OnOverlapEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_IslandInnerBoundary_C::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.OnOverlapEnd"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.OnOverlapBegin
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_MaidenVoyage_IslandInnerBoundary_C::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.OnOverlapBegin"));

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


// Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_IslandInnerBoundary_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MaidenVoyage_IslandInnerBoundary_C::ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MaidenVoyage_IslandInnerBoundary.BP_MaidenVoyage_IslandInnerBoundary_C.ExecuteUbergraph_BP_MaidenVoyage_IslandInnerBoundary"));

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
