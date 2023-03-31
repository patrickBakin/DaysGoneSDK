#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GasMeterWidget.GasMeterWidget_C.Construct
struct UGasMeterWidget_C_Construct_Params
{
};

// Function GasMeterWidget.GasMeterWidget_C.UpdateMeter
struct UGasMeterWidget_C_UpdateMeter_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GasMeterWidget.GasMeterWidget_C.ExecuteUbergraph_GasMeterWidget
struct UGasMeterWidget_C_ExecuteUbergraph_GasMeterWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
