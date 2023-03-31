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

// Function UI_Challenge_Rep.UI_Challenge_Rep_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rep_C::SetTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rep.UI_Challenge_Rep_C.SetTexture");

	UUI_Challenge_Rep_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rep.UI_Challenge_Rep_C.UpdatePercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rep_C::UpdatePercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rep.UI_Challenge_Rep_C.UpdatePercent");

	UUI_Challenge_Rep_C_UpdatePercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rep.UI_Challenge_Rep_C.SetDetails
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Rep_Gained                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Current_Rep                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rep_Max                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            XpCount                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            XPTotal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rep_C::SetDetails(int Rep_Gained, int Current_Rep, int Rep_Max, const struct FLinearColor& Color, int* XpCount, int* XPTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rep.UI_Challenge_Rep_C.SetDetails");

	UUI_Challenge_Rep_C_SetDetails_Params params;
	params.Rep_Gained = Rep_Gained;
	params.Current_Rep = Current_Rep;
	params.Rep_Max = Rep_Max;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XpCount != nullptr)
		*XpCount = params.XpCount;
	if (XPTotal != nullptr)
		*XPTotal = params.XPTotal;
}


// Function UI_Challenge_Rep.UI_Challenge_Rep_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Challenge_Rep_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rep.UI_Challenge_Rep_C.Construct");

	UUI_Challenge_Rep_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rep.UI_Challenge_Rep_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rep_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rep.UI_Challenge_Rep_C.Tick");

	UUI_Challenge_Rep_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rep.UI_Challenge_Rep_C.ExecuteUbergraph_UI_Challenge_Rep
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Rep_C::ExecuteUbergraph_UI_Challenge_Rep(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rep.UI_Challenge_Rep_C.ExecuteUbergraph_UI_Challenge_Rep");

	UUI_Challenge_Rep_C_ExecuteUbergraph_UI_Challenge_Rep_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Rep.UI_Challenge_Rep_C.FinishedAnimatingPercent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Challenge_Rep_C::FinishedAnimatingPercent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Rep.UI_Challenge_Rep_C.FinishedAnimatingPercent__DelegateSignature");

	UUI_Challenge_Rep_C_FinishedAnimatingPercent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
