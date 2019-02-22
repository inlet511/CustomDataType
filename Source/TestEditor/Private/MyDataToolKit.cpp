#include "MyDataToolKit.h"
#include "MyStyle.h"
#include "MySingleObjectDetailsPanel.h"

#define LOCTEXT_NAMESPACE "MyDataToolkit_NAMESPACE"

FMyDataToolKit::FMyDataToolKit(const TSharedRef<ISlateStyle> InStyle)
	:Style(InStyle)
{

}

FMyDataToolKit::~FMyDataToolKit()
{

}

FText FMyDataToolKit::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "My Data Editor");
}

FName FMyDataToolKit::GetToolkitFName() const
{
	return FName("MyDataEditor");
}

FLinearColor FMyDataToolKit::GetWorldCentricTabColorScale() const
{
	return FLinearColor(0.3f, 0.2f, 0.5f, 0.5f);
}

FString FMyDataToolKit::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentricTabPrefix", "MyData").ToString();
}

void FMyDataToolKit::InvokeTab(const FTabId& TabId)
{

}

void FMyDataToolKit::RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	TabManager->RegisterTabSpawner(
		FName(TEXT("Details")), 
		FOnSpawnTab::CreateLambda(
			[&](const FSpawnTabArgs& Args) {
				return SNew(SDockTab)
					//.Icon(FMyStyle::GetBrush("LevelEditor.Tabs.Details"))
					.Label(LOCTEXT("DetailsTab_Title", " Ù–‘"))
					[
						SNew(SMySingleObjectDetailsPanel)
					];
			})
	)
	.SetDisplayName(LOCTEXT("DetailsTabLabel", " Ù–‘"));
		//.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));
}

void FMyDataToolKit::InitObjectEditor(EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UMyDataType* Object)
{
	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("Standalone_MyDataEditor")
		->AddArea(
			FTabManager::NewPrimaryArea()
			->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.1f)
				->SetHideTabWell(true)
				->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
			)
			->Split
			(
				FTabManager::NewSplitter()
				->SetOrientation(Orient_Horizontal)
				->SetSizeCoefficient(0.1f)
				->Split
				(
					FTabManager::NewSplitter()
					->SetOrientation(Orient_Vertical)
					->Split
					(
						FTabManager::NewStack()
						->SetSizeCoefficient(0.5f)
						->SetHideTabWell(true)
						->AddTab(FName(TEXT("Details")), ETabState::OpenedTab)
					)
					->Split
					(
						FTabManager::NewStack()
						->SetSizeCoefficient(0.5f)
						->SetHideTabWell(true)
						->AddTab(FName(TEXT("‘§¿¿")), ETabState::OpenedTab)
					)
				)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.9f)
					->SetHideTabWell(true)
					->AddTab(FName(TEXT("±‡º≠∆˜")), ETabState::OpenedTab)
				)
			)
		);
}

#undef LOCTEXT_NAMESPACE