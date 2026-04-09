// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JumperCables : ModuleRules
{
	public JumperCables(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"JumperCables",
			"JumperCables/Variant_Platforming",
			"JumperCables/Variant_Platforming/Animation",
			"JumperCables/Variant_Combat",
			"JumperCables/Variant_Combat/AI",
			"JumperCables/Variant_Combat/Animation",
			"JumperCables/Variant_Combat/Gameplay",
			"JumperCables/Variant_Combat/Interfaces",
			"JumperCables/Variant_Combat/UI",
			"JumperCables/Variant_SideScrolling",
			"JumperCables/Variant_SideScrolling/AI",
			"JumperCables/Variant_SideScrolling/Gameplay",
			"JumperCables/Variant_SideScrolling/Interfaces",
			"JumperCables/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
