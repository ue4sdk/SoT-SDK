// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaDebug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged
// (Final, Native, Private)

void ADrawDebugService::OnRep_PersistentShapeChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged"));

	ADrawDebugService_OnRep_PersistentShapeChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged
// (Final, Native, Private)

void ADrawDebugService::OnRep_IsDrawDebugActiveChanged()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged"));

	ADrawDebugService_OnRep_IsDrawDebugActiveChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_ClearGroup
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// FName                          GroupName                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ADrawDebugService::Multicast_ClearGroup(const FName& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_ClearGroup"));

	ADrawDebugService_Multicast_ClearGroup_Params params;
	params.GroupName = GroupName;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddStrings
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<FDrawDebugItemString>   Strings                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddStrings(TArray<FDrawDebugItemString> Strings)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddStrings"));

	ADrawDebugService_Multicast_AddStrings_Params params;
	params.Strings = Strings;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddSpheres
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<FDrawDebugItemSphere>   Spheres                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddSpheres(TArray<FDrawDebugItemSphere> Spheres)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddSpheres"));

	ADrawDebugService_Multicast_AddSpheres_Params params;
	params.Spheres = Spheres;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddSectors
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<FDrawDebugItemSector>   Sectors                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddSectors(TArray<FDrawDebugItemSector> Sectors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddSectors"));

	ADrawDebugService_Multicast_AddSectors_Params params;
	params.Sectors = Sectors;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddLines
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<FDrawDebugItemLine>     Lines                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddLines(TArray<FDrawDebugItemLine> Lines)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddLines"));

	ADrawDebugService_Multicast_AddLines_Params params;
	params.Lines = Lines;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddCapsules
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<FDrawDebugItemCapsule>  Capsules                       (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddCapsules(TArray<FDrawDebugItemCapsule> Capsules)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddCapsules"));

	ADrawDebugService_Multicast_AddCapsules_Params params;
	params.Capsules = Capsules;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaDebug.DrawDebugService.Multicast_AddBoxes
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// TArray<FDrawDebugItemBox>      Boxes                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void ADrawDebugService::Multicast_AddBoxes(TArray<FDrawDebugItemBox> Boxes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaDebug.DrawDebugService.Multicast_AddBoxes"));

	ADrawDebugService_Multicast_AddBoxes_Params params;
	params.Boxes = Boxes;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
