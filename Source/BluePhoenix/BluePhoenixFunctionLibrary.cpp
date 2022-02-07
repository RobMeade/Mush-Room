// Fill out your copyright notice in the Description page of Project Settings.

#include "BluePhoenixFunctionLibrary.h"

FString UBluePhoenixFunctionLibrary::GetAppVersion()
{
	FString AppVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		AppVersion,
		GGameIni
	);

	return AppVersion;
}