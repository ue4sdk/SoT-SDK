// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MermaidGem_Proxy_Emerald_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MermaidGem_Proxy_Emerald.BP_MermaidGem_Proxy_Emerald_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MermaidGem_Proxy_Emerald_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MermaidGem_Proxy_Emerald.BP_MermaidGem_Proxy_Emerald_C.UserConstructionScript");

	ABP_MermaidGem_Proxy_Emerald_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
