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

// BlueprintGeneratedClass BPI_LGT_EditorInterface.BPI_LGT_EditorInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_LGT_EditorInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_LGT_EditorInterface.BPI_LGT_EditorInterface_C");
		return ptr;
	}


	void EditorTicker(float Delta_Seconds, const struct FVector& CameraLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
