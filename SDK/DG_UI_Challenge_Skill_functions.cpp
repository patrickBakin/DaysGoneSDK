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

// Function UI_Challenge_Skill.UI_Challenge_Skill_C.OnFail_19F51DDD49F39D19D5A98F839DDFCEF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Skill_C::OnFail_19F51DDD49F39D19D5A98F839DDFCEF2(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Skill.UI_Challenge_Skill_C.OnFail_19F51DDD49F39D19D5A98F839DDFCEF2");

	UUI_Challenge_Skill_C_OnFail_19F51DDD49F39D19D5A98F839DDFCEF2_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Skill.UI_Challenge_Skill_C.OnSuccess_19F51DDD49F39D19D5A98F839DDFCEF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Skill_C::OnSuccess_19F51DDD49F39D19D5A98F839DDFCEF2(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Skill.UI_Challenge_Skill_C.OnSuccess_19F51DDD49F39D19D5A98F839DDFCEF2");

	UUI_Challenge_Skill_C_OnSuccess_19F51DDD49F39D19D5A98F839DDFCEF2_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Skill.UI_Challenge_Skill_C.SetSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendSkill              Skill                          (Parm)

void UUI_Challenge_Skill_C::SetSkill(const struct FBendSkill& Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Skill.UI_Challenge_Skill_C.SetSkill");

	UUI_Challenge_Skill_C_SetSkill_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Challenge_Skill.UI_Challenge_Skill_C.ExecuteUbergraph_UI_Challenge_Skill
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Challenge_Skill_C::ExecuteUbergraph_UI_Challenge_Skill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Challenge_Skill.UI_Challenge_Skill_C.ExecuteUbergraph_UI_Challenge_Skill");

	UUI_Challenge_Skill_C_ExecuteUbergraph_UI_Challenge_Skill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
