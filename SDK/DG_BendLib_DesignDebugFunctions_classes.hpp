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

// BlueprintGeneratedClass BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_DesignDebugFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C");
		return ptr;
	}


	void STATIC_TakeBugitScreenshot(const struct FString& ShotName, class UObject* __WorldContext);
	void STATIC_TakeScreenshot1024(class UObject* __WorldContext);
	void STATIC_SimplifyVectorForPrint(const struct FVector& VectorIn, class UObject* __WorldContext, struct FString* VectorOut);
	void STATIC_PrintPlayerWorldPosition(class UObject* __WorldContext);
	void STATIC_TakeScreenshot(class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
