using UnrealBuildTool;

public class AbsolverGameTarget : TargetRules {
	public AbsolverGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		ExtraModuleNames.AddRange(new string[] {
			"Absolver",
		});
	}
}
