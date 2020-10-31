// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClueConnectionConfig*   ConnectionConfiguration        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          AllowedClueTypes               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FClueSite               TargetSite                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UClueDescriptor*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClueDescriptor* UClueConnectionBlueprintFunctionLibrary::CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, TArray<class UClass*> AllowedClueTypes, const struct FClueSite& TargetSite)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary.CreateCluePointingToSite"));

	struct
	{
		class UClueConnectionConfig*   ConnectionConfiguration;
		TArray<class UClass*>          AllowedClueTypes;
		struct FClueSite               TargetSite;
		class UClueDescriptor*         ReturnValue;
	} params;

	params.ConnectionConfiguration = ConnectionConfiguration;
	params.AllowedClueTypes = AllowedClueTypes;
	params.TargetSite = TargetSite;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Participant                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClueDescriptor*         Clue                           (Parm, ZeroConstructor, IsPlainOldData)

void UClueLifetimeBlueprintFunctionLibrary::GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary.GiveClueToParticipant"));

	struct
	{
		class AActor*                  Participant;
		class UClueDescriptor*         Clue;
	} params;

	params.Participant = Participant;
	params.Clue = Clue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
