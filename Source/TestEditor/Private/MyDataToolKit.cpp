#include "MyDataToolKit.h"

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

}

void FMyDataToolKit::InitObjectEditor(EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UMyDataType* Object)
{

}

#undef LOCTEXT_NAMESPACE