#include "MyDataTypeActions.h"
#include "MyDataType.h"
#include "Styling/SlateStyle.h"
#include "MyDataToolkit.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

FMyDataTypeActions::FMyDataTypeActions(const TSharedRef<ISlateStyle>& InStyle)
	:Style(InStyle)
{ }

bool FMyDataTypeActions::CanFilter()
{
    return true;
}

void FMyDataTypeActions::GetActions( const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{

}

uint32 FMyDataTypeActions::GetCategories()
{
    return EAssetTypeCategories::Misc;
}

FText FMyDataTypeActions::GetName() const
{
    return NSLOCTEXT("AssetTypeActions","AssetTypeActions_MyDataType", "My Data Type");
}

UClass* FMyDataTypeActions::GetSupportedClass() const
{
    return UMyDataType::StaticClass();
}

FColor FMyDataTypeActions::GetTypeColor() const
{
    return FColor::Green;
}

bool FMyDataTypeActions::HasActions(const TArray<UObject*>& InObjects) const
{
    return true;
}

void FMyDataTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (UMyDataType* CustomAsset = Cast<UMyDataType>(*ObjIt))
		{
			TSharedRef<FMyDataToolKit> Editor(new FMyDataToolKit(Style));
			Editor->InitObjectEditor(EToolkitMode::Standalone, EditWithinLevelEditor, CustomAsset);

		}
	}
}


#undef LOCTEXT_NAMESPACE