using UnrealBuildTool;

public class AbsolverEditorTarget : TargetRules {
	public AbsolverEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		ExtraModuleNames.AddRange(new string[] {
			"Absolver",
		});
	}
}
