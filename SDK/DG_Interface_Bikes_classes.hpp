#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_Bikes.Interface_Bikes_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Bikes_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Bikes.Interface_Bikes_C");
		return ptr;
	}


	void WhatBikeIsThis(TEnumAsByte<EAB_bike_size>* VehBIkeType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
