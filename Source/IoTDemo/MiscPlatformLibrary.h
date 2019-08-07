// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MiscPlatformLibrary.generated.h"

/**
 * 
 */
UCLASS()
class IOTDEMO_API UMiscPlatformLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Miscellaneous Logging")
		static void LogCPUInfo();
	UFUNCTION(BlueprintCallable, Category = "Miscellaneous Logging")
		static void LogDeviceInfo();
	UFUNCTION(BlueprintCallable, Category = "Miscellaneous Logging")
		static void LogNetworkType();
	UFUNCTION(BlueprintCallable, Category = "Miscellaneous Logging")
		static void LogOperatingSystemInfo();
	UFUNCTION(BlueprintCallable, Category = "Miscellaneous Logging")
		static void LogPowerInfo();
};
