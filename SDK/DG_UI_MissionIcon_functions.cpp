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

// Function UI_MissionIcon.UI_MissionIcon_C.SetIsMissionOrTask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMission                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionIcon_C::SetIsMissionOrTask(bool IsMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionIcon.UI_MissionIcon_C.SetIsMissionOrTask");

	UUI_MissionIcon_C_SetIsMissionOrTask_Params params;
	params.IsMission = IsMission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionIcon.UI_MissionIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MissionIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionIcon.UI_MissionIcon_C.Construct");

	UUI_MissionIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MissionIcon.UI_MissionIcon_C.ExecuteUbergraph_UI_MissionIcon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MissionIcon_C::ExecuteUbergraph_UI_MissionIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionIcon.UI_MissionIcon_C.ExecuteUbergraph_UI_MissionIcon");

	UUI_MissionIcon_C_ExecuteUbergraph_UI_MissionIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
