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

// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.SetShowMarkEnemiesText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Binoculars_C::SetShowMarkEnemiesText(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.SetShowMarkEnemiesText");

	UUI_Reticle_Binoculars_C_SetShowMarkEnemiesText_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Binoculars_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.SetVisible");

	UUI_Reticle_Binoculars_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Reticle_Binoculars_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.Construct");

	UUI_Reticle_Binoculars_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.FadeFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Binoculars_C::FadeFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.FadeFinished");

	UUI_Reticle_Binoculars_C_FadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Binoculars_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.Tick");

	UUI_Reticle_Binoculars_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.ExecuteUbergraph_UI_Reticle_Binoculars
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Binoculars_C::ExecuteUbergraph_UI_Reticle_Binoculars(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Binoculars.UI_Reticle_Binoculars_C.ExecuteUbergraph_UI_Reticle_Binoculars");

	UUI_Reticle_Binoculars_C_ExecuteUbergraph_UI_Reticle_Binoculars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
