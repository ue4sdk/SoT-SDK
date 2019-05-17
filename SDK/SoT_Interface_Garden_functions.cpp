// Sea of Thieves (2.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Interface_Garden_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interface_Garden.Interface_Garden_C.Set Garden Parameters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Int                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instances_Created              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Garden_C::Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Interface_Garden.Interface_Garden_C.Set Garden Parameters"));

	struct
	{
		float                          Radius;
		int                            Int;
		bool                           Instances_Created;
	} params;

	params.Radius = Radius;
	params.Int = Int;

	UObject::ProcessEvent(fn, &params);

	if (Instances_Created != nullptr)
		*Instances_Created = params.Instances_Created;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
