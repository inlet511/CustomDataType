#include "MySingleObjectDetailsPanel.h"
#include "SEditorViewport.h"
#include "Widgets/SBoxPanel.h"


UObject* SMySingleObjectDetailsPanel::GetObjectToObserve() const
{
	return nullptr;
}

TSharedRef<SWidget> SMySingleObjectDetailsPanel::PopulateSlot(TSharedRef<SWidget> PropertyEditorWidget)
{
	return SNew(SVerticalBox)
		+ SVerticalBox::Slot()
		.FillHeight(1)
		[
			PropertyEditorWidget
		];
}
