using UnrealBuildTool;

public class TestEditor : ModuleRules
{
    public TestEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UnrealEd", "CustomDataType" });
        PrivateDependencyModuleNames.AddRange(new string[] { "AssetTools", "Slate","SlateCore", "Projects" });

    }
}