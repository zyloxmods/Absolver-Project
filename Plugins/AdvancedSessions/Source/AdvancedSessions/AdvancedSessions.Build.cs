using UnrealBuildTool;

public class AdvancedSessions : ModuleRules {
    public AdvancedSessions(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystemUtils",
        });
    }
}
