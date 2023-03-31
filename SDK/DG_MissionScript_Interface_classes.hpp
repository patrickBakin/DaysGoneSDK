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

// BlueprintGeneratedClass MissionScript_Interface.MissionScript_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UMissionScript_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionScript_Interface.MissionScript_Interface_C");
		return ptr;
	}


	void I_GetCurrentCheckpointCount(int* Count, int* MaxCount);
	void I_SetDoOnceVariables(int HighestIndex, TArray<bool>* init_d, TArray<bool>* Closed);
	void I_GetDoonceVariable(TArray<bool>* init_d, TArray<bool>* Closed, int* highest_index_used);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
