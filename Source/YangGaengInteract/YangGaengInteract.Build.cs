﻿// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class YangGaengInteract : ModuleRules
{
	public YangGaengInteract(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "UMG" });

		PrivateDependencyModuleNames.AddRange(new string[] { });
	}
}
