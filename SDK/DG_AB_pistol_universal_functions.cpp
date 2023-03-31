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

// Function AB_pistol_universal.AB_pistol_universal_C.ExecuteUbergraph_AB_pistol_universal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_pistol_universal_C::ExecuteUbergraph_AB_pistol_universal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_pistol_universal.AB_pistol_universal_C.ExecuteUbergraph_AB_pistol_universal");

	UAB_pistol_universal_C_ExecuteUbergraph_AB_pistol_universal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
