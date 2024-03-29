// Copyright 2016 Team Axe Lasers

#pragma once

#include "DanceInterface.generated.h"

UINTERFACE()
class UDanceInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class GRANDPAGETSHISGROOVE_API IDanceInterface
{
	GENERATED_IINTERFACE_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Can I Dance?"), Category = "Dancing")
	bool CanDance();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Make Me Dance!"), Category = "Dancing")
	void Dance();
};