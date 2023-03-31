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

// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetAttached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Attached                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelPart_C::SetAttached(bool Attached)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetAttached");

	UUI_SurvivalWheelPart_C_SetAttached_Params params;
	params.Attached = Attached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelPart_C::SetVisible(float Duration, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetVisible");

	UUI_SurvivalWheelPart_C_SetVisible_Params params;
	params.Duration = Duration;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.TweenDistance
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelPart_C::TweenDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.TweenDistance");

	UUI_SurvivalWheelPart_C_TweenDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelPart_C::SetDistance(float Duration, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetDistance");

	UUI_SurvivalWheelPart_C_SetDistance_Params params;
	params.Duration = Duration;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelPart_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetSelected");

	UUI_SurvivalWheelPart_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.Get_Icon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UUI_SurvivalWheelPart_C::Get_Icon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.Get_Icon_Brush_1");

	UUI_SurvivalWheelPart_C_Get_Icon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelPart_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.Tick");

	UUI_SurvivalWheelPart_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              tex                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelPart_C::SetTexture(class UTexture2D* tex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetTexture");

	UUI_SurvivalWheelPart_C_SetTexture_Params params;
	params.tex = tex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SyncTexture
// (BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelPart_C::SyncTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SyncTexture");

	UUI_SurvivalWheelPart_C_SyncTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)

void UUI_SurvivalWheelPart_C::SetTextureAsset(TAssetPtr<class UTexture2D> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.SetTextureAsset");

	UUI_SurvivalWheelPart_C_SetTextureAsset_Params params;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_SurvivalWheelPart_C::CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.CustomEvent_1");

	UUI_SurvivalWheelPart_C_CustomEvent_1_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.ExecuteUbergraph_UI_SurvivalWheelPart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelPart_C::ExecuteUbergraph_UI_SurvivalWheelPart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelPart.UI_SurvivalWheelPart_C.ExecuteUbergraph_UI_SurvivalWheelPart");

	UUI_SurvivalWheelPart_C_ExecuteUbergraph_UI_SurvivalWheelPart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
