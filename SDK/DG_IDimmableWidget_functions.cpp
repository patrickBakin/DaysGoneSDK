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

// Function IDimmableWidget.IDimmableWidget_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UIDimmableWidget_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function IDimmableWidget.IDimmableWidget_C.FadeIn");

	UIDimmableWidget_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IDimmableWidget.IDimmableWidget_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UIDimmableWidget_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function IDimmableWidget.IDimmableWidget_C.FadeOut");

	UIDimmableWidget_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
