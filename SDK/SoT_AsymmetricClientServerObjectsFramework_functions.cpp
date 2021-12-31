// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AsymmetricClientServerObjectsFramework_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset
// (Final, RequiredAPI, Native, Private)

void AAsymmetricObjectServerManager::OnRep_AsymmetricObjectAsset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AsymmetricClientServerObjectsFramework.AsymmetricObjectServerManager.OnRep_AsymmetricObjectAsset"));

	AAsymmetricObjectServerManager_OnRep_AsymmetricObjectAsset_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
