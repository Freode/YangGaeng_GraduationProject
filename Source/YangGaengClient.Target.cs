// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class YangGaengClientTarget : TargetRules
{
    public YangGaengClientTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Client;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		BuildEnvironment = TargetBuildEnvironment.Shared;
		ExtraModuleNames.Add("YangGaeng");
		ExtraModuleNames.Add("YangGaengSetting");
		ExtraModuleNames.Add("YangGaengInteract");
        ExtraModuleNames.Add("YangGaengUI");
    }
}
