#include "SSingleObjectDetailsPanel.h"

class SMySingleObjectDetailsPanel :public SSingleObjectDetailsPanel
{
public:
	virtual UObject* GetObjectToObserve() const override;
	virtual TSharedRef<SWidget> PopulateSlot(TSharedRef<SWidget> PropertyEditorWidget) override;
};