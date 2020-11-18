// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PirateLord_MaidenVoyage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.OnRep_IsPirateLordVisible
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::OnRep_IsPirateLordVisible()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.OnRep_IsPirateLordVisible"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.GetNPCAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNPCAnimInstance*        NPCAnimInstance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PirateLord_MaidenVoyage_C::GetNPCAnimInstance(class UNPCAnimInstance** NPCAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.GetNPCAnimInstance"));

	struct
	{
		class UNPCAnimInstance*        NPCAnimInstance;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NPCAnimInstance != nullptr)
		*NPCAnimInstance = params.NPCAnimInstance;
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.CollectMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::CollectMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.CollectMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Appear__FinishedFunc
// (BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::Appear__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Appear__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Appear__UpdateFunc
// (BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::Appear__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Appear__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Disappear__FinishedFunc
// (BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::Disappear__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Disappear__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Disappear__UpdateFunc
// (BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::Disappear__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.Disappear__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.GhostCutsceneEventHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GhostOpacity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          GhostBloom                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateLord_MaidenVoyage_C::GhostCutsceneEventHandler(float GhostOpacity, float GhostBloom)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.GhostCutsceneEventHandler"));

	struct
	{
		float                          GhostOpacity;
		float                          GhostBloom;
	} params;

	params.GhostOpacity = GhostOpacity;
	params.GhostBloom = GhostBloom;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordAppear
// (NetReliable, BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::PirateLordAppear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordAppear"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordDisappear
// (NetReliable, BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::PirateLordDisappear()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordDisappear"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateLord_MaidenVoyage_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordHidden
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::PirateLordHidden()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordHidden"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordAppearEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPirateLordAppearEvent_FPirateLordAppearEvent NewParam                       (Parm)

void ABP_PirateLord_MaidenVoyage_C::PirateLordAppearEvent(const struct FPirateLordAppearEvent_FPirateLordAppearEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordAppearEvent"));

	struct
	{
		struct FPirateLordAppearEvent_FPirateLordAppearEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordDisappearEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPirateLordDisappearEvent_FPirateLordDisappearEvent NewParam                       (Parm)

void ABP_PirateLord_MaidenVoyage_C::PirateLordDisappearEvent(const struct FPirateLordDisappearEvent_FPirateLordDisappearEvent& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.PirateLordDisappearEvent"));

	struct
	{
		struct FPirateLordDisappearEvent_FPirateLordDisappearEvent NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.AnimNotify_StartPirateLordCutsceneAnim
// (BlueprintCallable, BlueprintEvent)

void ABP_PirateLord_MaidenVoyage_C::AnimNotify_StartPirateLordCutsceneAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.AnimNotify_StartPirateLordCutsceneAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.ExecuteUbergraph_BP_PirateLord_MaidenVoyage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PirateLord_MaidenVoyage_C::ExecuteUbergraph_BP_PirateLord_MaidenVoyage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PirateLord_MaidenVoyage.BP_PirateLord_MaidenVoyage_C.ExecuteUbergraph_BP_PirateLord_MaidenVoyage"));

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
