// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Buxton : ModuleRules
{
	public Buxton(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		CppStandard = CppStandardVersion.Latest;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
