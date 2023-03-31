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

// Function BPI_LGT_EditorInterface.BPI_LGT_EditorInterface_C.EditorTicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void UBPI_LGT_EditorInterface_C::EditorTicker(float Delta_Seconds, const struct FVector& CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_LGT_EditorInterface.BPI_LGT_EditorInterface_C.EditorTicker");

	UBPI_LGT_EditorInterface_C_EditorTicker_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
