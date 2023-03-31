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

// Function PatchGridItem.PatchGridItem_C.OnFail_AA6ECEC94E6783AB3CA18F9E7C297828
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UPatchGridItem_C::OnFail_AA6ECEC94E6783AB3CA18F9E7C297828(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.OnFail_AA6ECEC94E6783AB3CA18F9E7C297828");

	UPatchGridItem_C_OnFail_AA6ECEC94E6783AB3CA18F9E7C297828_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatchGridItem.PatchGridItem_C.OnSuccess_AA6ECEC94E6783AB3CA18F9E7C297828
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UPatchGridItem_C::OnSuccess_AA6ECEC94E6783AB3CA18F9E7C297828(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.OnSuccess_AA6ECEC94E6783AB3CA18F9E7C297828");

	UPatchGridItem_C_OnSuccess_AA6ECEC94E6783AB3CA18F9E7C297828_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatchGridItem.PatchGridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPatchGridItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.Construct");

	UPatchGridItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatchGridItem.PatchGridItem_C.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UPatchGridItem_C::SetSelected(bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.SetSelected");

	UPatchGridItem_C_SetSelected_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatchGridItem.PatchGridItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void UPatchGridItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.Invalidate");

	UPatchGridItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatchGridItem.PatchGridItem_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UPatchGridItem_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.FadeIn");

	UPatchGridItem_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatchGridItem.PatchGridItem_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UPatchGridItem_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.FadeOut");

	UPatchGridItem_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatchGridItem.PatchGridItem_C.ExecuteUbergraph_PatchGridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPatchGridItem_C::ExecuteUbergraph_PatchGridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatchGridItem.PatchGridItem_C.ExecuteUbergraph_PatchGridItem");

	UPatchGridItem_C_ExecuteUbergraph_PatchGridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
