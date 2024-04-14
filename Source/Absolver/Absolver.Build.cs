using UnrealBuildTool;

public class Absolver : ModuleRules {
    public Absolver(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "OnlineSubsystemUtils",
            "SlateCore",
            "UMG",
            "AdvancedSessions",
            "GameplayAbilities",
            "GameplayTasks"
        });
    }
}
