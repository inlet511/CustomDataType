#pragma once

#include "AssetTypeActions_Base.h"
#include "Templates/SharedPointer.h"

class ISlateStyle;


class FMyDataTypeActions
    : public FAssetTypeActions_Base
{
public:
    FMyDataTypeActions(const TSharedRef<ISlateStyle>& InStyle);
public:
    virtual bool CanFilter() override;
    virtual void GetActions( const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;
    virtual uint32 GetCategories() override;
    virtual FText GetName() const override;
    virtual UClass* GetSupportedClass() const override;
    virtual FColor GetTypeColor() const override;
    virtual bool HasActions(const TArray<UObject*>& InObjects) const override;
    virtual void OpenAssetEditor( const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>() ) override;
    
private:
    TSharedRef<ISlateStyle> Style;
};