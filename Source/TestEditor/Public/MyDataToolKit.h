#pragma once
#include "Toolkits/AssetEditorToolkit.h"
#include "MyDataType.h"

class FMyDataToolKit :public FAssetEditorToolkit
{

public:
	FMyDataToolKit(const TSharedRef<ISlateStyle> InStyle);
	virtual ~FMyDataToolKit();

public:

	//~ IToolkit interface

	virtual FText GetBaseToolkitName() const override;
	virtual FName GetToolkitFName() const override;
	virtual FLinearColor GetWorldCentricTabColorScale() const override;
	virtual FString GetWorldCentricTabPrefix() const override;
	virtual void InvokeTab(const FTabId& TabId) override;
	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager) override;

public:
	// Custom Initialize Function
	virtual void InitObjectEditor(EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UMyDataType* Object);

private:
	TSharedRef<ISlateStyle> Style;
};