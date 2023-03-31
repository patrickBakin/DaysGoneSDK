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

// Function BendLevelSoundManagerInterface.BendLevelSoundManagerInterface_C.EventUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLevelSoundManagerInterface_C::EventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLevelSoundManagerInterface.BendLevelSoundManagerInterface_C.EventUpdate");

	UBendLevelSoundManagerInterface_C_EventUpdate_Params params;
	params.Event_Name = Event_Name;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
