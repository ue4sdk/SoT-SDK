#pragma once

// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleEventDispatcherProxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C
// 0x0018 (0x0428 - 0x0410)
class ABP_TaleEventDispatcherProxy_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BroadcastToListeners;                                     // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TaleEventDispatcherProxy.BP_TaleEventDispatcherProxy_C"));
		return ptr;
	}


	void Broadcast();
	void UserConstructionScript();
	void BroadcastToListeners__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
