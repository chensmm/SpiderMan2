// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SpiderMan2 : ModuleRules
{
	public SpiderMan2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
