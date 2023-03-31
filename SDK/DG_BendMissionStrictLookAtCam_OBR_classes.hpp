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

// BlueprintGeneratedClass BendMissionStrictLookAtCam_OBR.BendMissionStrictLookAtCam_OBR_C
// 0x0000 (0x0380 - 0x0380)
class UBendMissionStrictLookAtCam_OBR_C : public UBendPlayerCamFollow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendMissionStrictLookAtCam_OBR.BendMissionStrictLookAtCam_OBR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
