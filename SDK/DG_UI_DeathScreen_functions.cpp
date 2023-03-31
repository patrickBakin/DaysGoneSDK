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

// Function UI_DeathScreen.UI_DeathScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_DeathScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.Construct");

	UUI_DeathScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeathScreen_C::ExecuteUbergraph_UI_DeathScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeathScreen.UI_DeathScreen_C.ExecuteUbergraph_UI_DeathScreen");

	UUI_DeathScreen_C_ExecuteUbergraph_UI_DeathScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
