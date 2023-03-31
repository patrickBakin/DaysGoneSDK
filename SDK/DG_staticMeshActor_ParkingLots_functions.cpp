// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function staticMeshActor_ParkingLots.staticMeshActor_ParkingLots_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstaticMeshActor_ParkingLots_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_ParkingLots.staticMeshActor_ParkingLots_C.UserConstructionScript");

	AstaticMeshActor_ParkingLots_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
