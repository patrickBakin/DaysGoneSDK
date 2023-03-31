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

// Function UI_WeaponTexture.UI_WeaponTexture_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WeaponTexture_C::SetOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.SetOpacity");

	UUI_WeaponTexture_C_SetOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WeaponTexture.UI_WeaponTexture_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WeaponTexture_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.SetColor");

	UUI_WeaponTexture_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WeaponTexture.UI_WeaponTexture_C.SetDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WeaponTexture_C::SetDamage(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.SetDamage");

	UUI_WeaponTexture_C_SetDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WeaponTexture.UI_WeaponTexture_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WeaponTexture_C::SetTexture(class UTexture2D* Texture, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.SetTexture");

	UUI_WeaponTexture_C_SetTexture_Params params;
	params.Texture = Texture;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WeaponTexture.UI_WeaponTexture_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WeaponTexture_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.Construct");

	UUI_WeaponTexture_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WeaponTexture.UI_WeaponTexture_C.SetTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WeaponTexture_C::SetTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.SetTextureAsset");

	UUI_WeaponTexture_C_SetTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WeaponTexture.UI_WeaponTexture_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_WeaponTexture_C::CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.CustomEvent_1");

	UUI_WeaponTexture_C_CustomEvent_1_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WeaponTexture.UI_WeaponTexture_C.ExecuteUbergraph_UI_WeaponTexture
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WeaponTexture_C::ExecuteUbergraph_UI_WeaponTexture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WeaponTexture.UI_WeaponTexture_C.ExecuteUbergraph_UI_WeaponTexture");

	UUI_WeaponTexture_C_ExecuteUbergraph_UI_WeaponTexture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
