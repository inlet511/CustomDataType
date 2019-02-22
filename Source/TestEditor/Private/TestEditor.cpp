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

	//��ȡ��Դ����ģ��
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

	//�˴�Ϊע���Լ�����Դ����,�������ʾ�ڡ����������������
	EAssetTypeCategories::Type MyAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("MyAssetCategory")), LOCTEXT("MyCategoryName", "MyCategory"));

	//���ﴴ����ע��ʵ��
	AssetTools.RegisterAssetTypeActions(MakeShareable(new FMyDataTypeActions(Style.ToSharedRef())));
}

void FTestEditor::ShutdownModule()
{

}

IMPLEMENT_MODULE(FTestEditor,FTestEditor)
#undef LOCTEXT_NAMESPACE