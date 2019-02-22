#pragma once
#include "CoreMinimal.h"
#include "ModuleManager.h"

class ISlateStyle;

class FTestEditor :public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
	/** Holds the plug-ins style set. */
	TSharedPtr<ISlateStyle> Style;

};