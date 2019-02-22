#include "TestEditor.h"
#include "Modules/ModuleManager.h"
#include "Templates/SharedPointer.h"
#include "AssetToolsModule.h"
#include "MyDataTypeActions.h"
#include "MyStyle.h"

#define LOCTEXT_NAMESPACE "TestEditorModule"

void FTestEditor::StartupModule()
{

	Style = MakeShareable(new FMyStyle());

	//获取资源工具模块
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	//此处为注册自己的资源分类,否则会显示在“其他”这个分类中
	EAssetTypeCategories::Type MyAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("MyAssetCategory")), LOCTEXT("MyCategoryName", "MyCategory"));

	//这里创建并注册实例
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FMyDataTypeActions(Style.ToSharedRef())));
}

void FTestEditor::ShutdownModule()
{

}

IMPLEMENT_MODULE(FTestEditor,FTestEditor)
#undef LOCTEXT_NAMESPACE