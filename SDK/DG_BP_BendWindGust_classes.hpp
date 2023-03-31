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

// BlueprintGeneratedClass BP_BendWindGust.BP_BendWindGust_C
// 0x0008 (0x0458 - 0x0450)
class ABP_BendWindGust_C : public ABendWindGust
{
public:
	class UAudioComponent*                             CCSnd_WindGust;                                           // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendWindGust.BP_BendWindGust_C");
		return ptr;
	}


	void CreateWindGust();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
