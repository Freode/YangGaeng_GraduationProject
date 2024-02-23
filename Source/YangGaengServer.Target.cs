// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class YangGaengServerTarget : TargetRules
{
    public YangGaengServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		BuildEnvironment = TargetBuildEnvironment.Shared;
		ExtraModuleNames.Add("YangGaeng");
		ExtraModuleNames.Add("YangGaengSetting");
		ExtraModuleNames.Add("YangGaengInteract");
        ExtraModuleNames.Add("YangGaengUI");
    }
}
