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

// Function PlayerSkillManager.PlayerSkillManager_C.ResetMeleeSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSkillManager_C::ResetMeleeSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSkillManager.PlayerSkillManager_C.ResetMeleeSkills");

	UPlayerSkillManager_C_ResetMeleeSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSkillManager.PlayerSkillManager_C.ResetGeoffsSkills
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSkillManager_C::ResetGeoffsSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSkillManager.PlayerSkillManager_C.ResetGeoffsSkills");

	UPlayerSkillManager_C_ResetGeoffsSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSkillManager.PlayerSkillManager_C.OnSkillAcquired
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventorySkillID>* SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemSkill**    Skill                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillManager_C::OnSkillAcquired(TEnumAsByte<EInventorySkillID>* SkillID, class UInventoryItemSkill** Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSkillManager.PlayerSkillManager_C.OnSkillAcquired");

	UPlayerSkillManager_C_OnSkillAcquired_Params params;
	params.SkillID = SkillID;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSkillManager.PlayerSkillManager_C.OnSkillsModified
// (Event, Protected, BlueprintEvent)

void UPlayerSkillManager_C::OnSkillsModified()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSkillManager.PlayerSkillManager_C.OnSkillsModified");

	UPlayerSkillManager_C_OnSkillsModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSkillManager.PlayerSkillManager_C.ExecuteUbergraph_PlayerSkillManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSkillManager_C::ExecuteUbergraph_PlayerSkillManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSkillManager.PlayerSkillManager_C.ExecuteUbergraph_PlayerSkillManager");

	UPlayerSkillManager_C_ExecuteUbergraph_PlayerSkillManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
