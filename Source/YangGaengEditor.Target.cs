// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class YangGaengEditorTarget : TargetRules
{
	public YangGaengEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;
		ExtraModuleNames.Add("YangGaeng");
		ExtraModuleNames.Add("YangGaengSetting");
		ExtraModuleNames.Add("YangGaengInteract");
	}
}
