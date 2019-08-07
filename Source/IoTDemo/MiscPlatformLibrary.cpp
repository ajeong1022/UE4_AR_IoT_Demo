// Fill out your copyright notice in the Description page of Project Settings.


#include "MiscPlatformLibrary.h"
#include "GenericPlatformMisc.h"


void UMiscPlatformLibrary::LogCPUInfo()
{
	UE_LOG(LogTemp, Log, TEXT("%s"), *FGenericPlatformMisc::GetCPUVendor())
		UE_LOG(LogTemp, Log, TEXT("%s"), *FGenericPlatformMisc::GetCPUBrand())
		UE_LOG(LogTemp, Log, TEXT("%s"), *FGenericPlatformMisc::GetCPUChipset())
}

void UMiscPlatformLibrary::LogDeviceInfo()
{
	UE_LOG(LogTemp, Log, TEXT("Make and Model: %s"), *FGenericPlatformMisc::GetDeviceMakeAndModel())
		UE_LOG(LogTemp, Log, TEXT("Device Id: %s"), *FGenericPlatformMisc::GetDeviceId())
		UE_LOG(LogTemp, Log, TEXT("Temperature: %.3f"), FGenericPlatformMisc::GetDeviceTemperatureLevel())
		UE_LOG(LogTemp, Log, TEXT("Volume: %d"), FGenericPlatformMisc::GetDeviceVolume())
}

void UMiscPlatformLibrary::LogNetworkType()
{
	UE_LOG(LogTemp, Log, TEXT("Network Connection Type: %s"), LexToString(FGenericPlatformMisc::GetNetworkConnectionType()))
}

void UMiscPlatformLibrary::LogOperatingSystemInfo()
{
	UE_LOG(LogTemp, Log, TEXT("OS ID: %s"), *FGenericPlatformMisc::GetOperatingSystemId())
		UE_LOG(LogTemp, Log, TEXT("OS Version: %s"), *FGenericPlatformMisc::GetOSVersion())
}

void UMiscPlatformLibrary::LogPowerInfo()
{
	UE_LOG(LogTemp, Log, TEXT("Brightness: %.1f"), FGenericPlatformMisc::GetBrightness())
		UE_LOG(LogTemp, Log, TEXT("Battery level: %d"), FGenericPlatformMisc::GetBatteryLevel())
}

