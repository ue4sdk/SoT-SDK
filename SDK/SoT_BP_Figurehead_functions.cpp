// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Figurehead.BP_Figurehead_C.GetVFXComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystemComponent* ABP_Figurehead_C::GetVFXComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Figurehead.BP_Figurehead_C.GetVFXComponent"));

	struct
	{
		class UParticleSystemComponent* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Figurehead.BP_Figurehead_C.GetMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMeshComponent* ABP_Figurehead_C::GetMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Figurehead.BP_Figurehead_C.GetMeshComponent"));

	struct
	{
		class UStaticMeshComponent*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Figurehead_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
