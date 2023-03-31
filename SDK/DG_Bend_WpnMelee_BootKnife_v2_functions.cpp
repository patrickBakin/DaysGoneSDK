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

// Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.SetHiddenForDLC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldHide                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_BootKnife_v2_C::SetHiddenForDLC(bool ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.SetHiddenForDLC");

	ABend_WpnMelee_BootKnife_v2_C_SetHiddenForDLC_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMelee_BootKnife_v2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.UserConstructionScript");

	ABend_WpnMelee_BootKnife_v2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.OnHolsterFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_BootKnife_v2_C::OnHolsterFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.OnHolsterFinished");

	ABend_WpnMelee_BootKnife_v2_C_OnHolsterFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.OnDrawStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnMelee_BootKnife_v2_C::OnDrawStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.OnDrawStarted");

	ABend_WpnMelee_BootKnife_v2_C_OnDrawStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.ExecuteUbergraph_Bend_WpnMelee_BootKnife_v2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_BootKnife_v2_C::ExecuteUbergraph_Bend_WpnMelee_BootKnife_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BootKnife_v2.Bend_WpnMelee_BootKnife_v2_C.ExecuteUbergraph_Bend_WpnMelee_BootKnife_v2");

	ABend_WpnMelee_BootKnife_v2_C_ExecuteUbergraph_Bend_WpnMelee_BootKnife_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
