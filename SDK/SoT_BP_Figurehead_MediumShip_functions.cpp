// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_MediumShip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetVFXComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystemComponent* ABP_Figurehead_MediumShip_C::GetVFXComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetVFXComponent"));

	ABP_Figurehead_MediumShip_C_GetVFXComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMeshComponent* ABP_Figurehead_MediumShip_C::GetMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetMeshComponent"));

	ABP_Figurehead_MediumShip_C_GetMeshComponent_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Figurehead_MediumShip_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript"));

	ABP_Figurehead_MediumShip_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
