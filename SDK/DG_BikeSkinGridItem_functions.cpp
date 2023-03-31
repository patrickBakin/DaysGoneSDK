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

// Function BikeSkinGridItem.BikeSkinGridItem_C.OnFail_3DF4DC0846E069F43C6A298FDFAED1B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UBikeSkinGridItem_C::OnFail_3DF4DC0846E069F43C6A298FDFAED1B4(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeSkinGridItem.BikeSkinGridItem_C.OnFail_3DF4DC0846E069F43C6A298FDFAED1B4");

	UBikeSkinGridItem_C_OnFail_3DF4DC0846E069F43C6A298FDFAED1B4_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeSkinGridItem.BikeSkinGridItem_C.OnSuccess_3DF4DC0846E069F43C6A298FDFAED1B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UBikeSkinGridItem_C::OnSuccess_3DF4DC0846E069F43C6A298FDFAED1B4(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeSkinGridItem.BikeSkinGridItem_C.OnSuccess_3DF4DC0846E069F43C6A298FDFAED1B4");

	UBikeSkinGridItem_C_OnSuccess_3DF4DC0846E069F43C6A298FDFAED1B4_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeSkinGridItem.BikeSkinGridItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void UBikeSkinGridItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeSkinGridItem.BikeSkinGridItem_C.Invalidate");

	UBikeSkinGridItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeSkinGridItem.BikeSkinGridItem_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UBikeSkinGridItem_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeSkinGridItem.BikeSkinGridItem_C.FadeIn");

	UBikeSkinGridItem_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeSkinGridItem.BikeSkinGridItem_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UBikeSkinGridItem_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeSkinGridItem.BikeSkinGridItem_C.FadeOut");

	UBikeSkinGridItem_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeSkinGridItem.BikeSkinGridItem_C.Update Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UBikeSkinGridItem_C::Update_Image(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeSkinGridItem.BikeSkinGridItem_C.Update Image");

	UBikeSkinGridItem_C_Update_Image_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeSkinGridItem.BikeSkinGridItem_C.ExecuteUbergraph_BikeSkinGridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBikeSkinGridItem_C::ExecuteUbergraph_BikeSkinGridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeSkinGridItem.BikeSkinGridItem_C.ExecuteUbergraph_BikeSkinGridItem");

	UBikeSkinGridItem_C_ExecuteUbergraph_BikeSkinGridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
