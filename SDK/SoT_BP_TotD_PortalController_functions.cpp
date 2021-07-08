// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TotD_PortalController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PortalOpen                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          LightScale                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          CrackVisibility                (Parm, ZeroConstructor, IsPlainOldData)
// float                          PortalSwirlVisibility          (Parm, ZeroConstructor, IsPlainOldData)
// float                          CloudVisibility                (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TotD_PortalController_C::SetParameters(float PortalOpen, float LightScale, float CrackVisibility, float PortalSwirlVisibility, float CloudVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetParameters"));

	struct
	{
		float                          PortalOpen;
		float                          LightScale;
		float                          CrackVisibility;
		float                          PortalSwirlVisibility;
		float                          CloudVisibility;
	} params;

	params.PortalOpen = PortalOpen;
	params.LightScale = LightScale;
	params.CrackVisibility = CrackVisibility;
	params.PortalSwirlVisibility = PortalSwirlVisibility;
	params.CloudVisibility = CloudVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetPortalPositionAndOrientation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TotD_PortalController_C::SetPortalPositionAndOrientation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.SetPortalPositionAndOrientation"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.CollectMaterialsAndLights
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TotD_PortalController_C::CollectMaterialsAndLights()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.CollectMaterialsAndLights"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TotD_PortalController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_TotD_PortalController_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_TotD_PortalController_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TotD_PortalController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TotD_PortalController_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.OpenPortal
// (BlueprintCallable, BlueprintEvent)

void ABP_TotD_PortalController_C::OpenPortal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.OpenPortal"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TotD_PortalController.BP_TotD_PortalController_C.ExecuteUbergraph_BP_TotD_PortalController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TotD_PortalController_C::ExecuteUbergraph_BP_TotD_PortalController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_TotD_PortalController.BP_TotD_PortalController_C.ExecuteUbergraph_BP_TotD_PortalController"));

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
